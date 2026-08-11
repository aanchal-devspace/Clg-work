#include<stdio.h>
#include<stdlib.h>
int main(){
    int total,count=0;
    float attendance;
    printf("Enter total number of days : ");
    scanf("%d",&total);
    char *arr = (char*)malloc(total*sizeof(char));
    printf("Enter attendance : ");
    for(int i=0;i<total;i++){
        scanf("%c ",&arr[i]);
        if(arr[i]=='P'){
            count++;
        }
    }
    attendance= ((float)count/total)*100;
    if(attendance > 75){
        printf("Eligible with attendance : %.2f%%",attendance);
    }
    else{
        printf("Not eligible with attendance : %.2f%%",attendance);
    }

    return 0;
}