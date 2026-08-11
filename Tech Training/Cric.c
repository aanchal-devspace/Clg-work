#include<stdio.h>
#include<stdlib.h>
struct cric{
    char name[100];
    int runs;
    float average;
};
int main(){
    int total,i;
    struct cric *ptr;
    printf("Enter total players : ");
    scanf("%d",&total);
    ptr = (struct cric *)malloc(total*sizeof(struct cric));
    for(i=0;i<total;i++){
        printf("Enter name , runs and average of player %d : ",i+1);
        scanf("%s",ptr[i].name);
        scanf("%d",&ptr[i].runs);
        scanf("%f",&ptr[i].average);

    }
    printf("\nEligible players are : ");
    for(i=0;i<total;i++){
        if(ptr[i].runs >=500 && ptr[i].average >=45){
            printf("%s\n",ptr[i].name);
        }
    }
    free(ptr);
    return 0;
}