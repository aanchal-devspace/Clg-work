#include<stdio.h>
int p,q,m,x,i,j,c;
int partition(int arr[],int p,int q){
    x=arr[p];
    i=p;
    for(j=p+1;j<=q;j++){
        if(arr[j]<=x){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int tem=arr[i];
    arr[i]=arr[p];
    arr[p]=tem;
    
    return arr[p];

}
void quicksort(int arr[],int p,int q){
    if(p<q){
        m=partition(arr,p,q);
        quicksort(arr,p,m-1);
        quicksort(arr,m+1,q);
    }
}
void display(int arr[],int n){
    for(i=0;i<n;i++){
        printf("%d",arr[i]);

    }
}
int main(){
    int arr[]={5,10,3};
    int n=3;
    quicksort(arr,0,n-1);
    display(arr,n);
    return 0;
}

