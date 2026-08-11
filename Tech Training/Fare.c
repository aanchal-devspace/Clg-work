#include<stdio.h>
int main(){
    float distance,fare;    
    printf("Enter total distance travelled : ");
    scanf("%f",&distance);
    fare = (distance*15)+100;
    if(distance>20) printf("Total fare is %.2f",fare-50);
    else printf("Total fare is : %.2f",fare);

    return 0;
}