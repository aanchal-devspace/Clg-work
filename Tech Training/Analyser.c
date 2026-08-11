#include<stdio.h>
#include<stdlib.h>
int main(){
    int total,i,max,min;
    printf("Enter total number of students : ");
    scanf("%d",&total);
    int *arr=malloc(total*sizeof(int));
    printf("Enter marks of students : ");
    for(i=0;i<total;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=0;i<total;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        else if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("Marks greater than 50 is");
    for(i=0;i<total;i++){
        if(arr[i]>=50){
            printf(" %d ",arr[i]);
        }
    }
    printf("\nHighest marks is %d and lowest marks is %d",max,min);
    return 0;
}