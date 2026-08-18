//aanchal
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
int main(){
    int num, i,x;
    printf("Enter number of nodes : ");
    scanf("%d",&num);
    printf("Enter elements : ");
    struct Node *h=NULL;
    for(i=0;i<num;i++){
        scanf("%d",&x);

        struct Node *p = (struct Node*)malloc(sizeof(struct Node));
        p->data = x;
        p->next = NULL;
        printf("%d ", p->data);
        struct Node *q = h;
        q=p;
        
    }
    

    

    return 0;
}