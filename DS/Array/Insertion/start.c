#include<stdio.h>
int main(){
    int i,arr[10],ele,size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter elements : ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    if(size >10){
        printf("Array is full");
    }
    else{
        printf("Enter element to insert: ");
        scanf("%d",&ele);

        for(int i=size;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=ele;
        size++;
        printf("New array is : ");
        for(i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}