#include<stdio.h>
void bubble(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int s=0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                s=1;
            }
        }
        if(s==0){
            break;
        }

    }

}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);

    }
    printf("\n");
}
int main(){
    int arr[]={5,7,9,2,1};
    int n=5;
    printf("Original array ");
    display(arr,n);
    bubble(arr,n);
    display(arr,n);
    return 0;

}