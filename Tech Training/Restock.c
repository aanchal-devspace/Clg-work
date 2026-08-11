#include<stdio.h>
#include<stdlib.h>
int main(){
    int total,i,count;
    printf("Enter total number of shelves : ");
    scanf("%d",&total);
    printf("Enter element in each shelf : ");
    int *arr =malloc(total*sizeof(int));
    for(i=0;i<total;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<10){
          count++;  
        }
    }
    if(count!=0){
        printf("Shelves to restock : %d",count);
    }
    else{
        printf("No need to restock");
    }
    return 0;
}