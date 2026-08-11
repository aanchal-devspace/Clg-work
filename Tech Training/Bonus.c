#include<stdio.h>
#include<stdlib.h>
int main(){
    int total,i;
    float bonus=0;
    printf("Enter number of employees : ");
    scanf("%d",&total);
    float *arr =  malloc(sizeof(float));
    printf("Enter salaries : ");
    for(i=0;i<total;i++){
        scanf("%f",&arr[i]);
        if(arr[i]>=50000){
            bonus+= 0.2*arr[i];
        }
        else if(arr[i]>20000 && arr[i]<=49999){
            bonus+=0.1*arr[i];
        }
        else{
            bonus+=0.05*arr[i];
        }
    }
    printf("The total bonus is : %d",bonus);
    
    return 0;
}