//aanchal 2501920100582
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

/*#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head=NULL;
Node* tail=NULL;
void add(int val){
    Node* newNode= new Node;
    newNode->data=val;
    
    if(head==NULL){
        newNode->next=head;
        head=tail=newNode;
        return;

    }
    else{
        newNode->next=head;
        head=newNode;

    }

}
void addlast(int val){
    Node* newNode=new Node;
    newNode->data=val;
    newNode->next=NULL;
    if(head==NULL){
        head=tail=newNode;
        return;

    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
}
void deleteBeg(){
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    else{
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
    }
}
void deleteEnd(){
    if(head==NULL){
        return;
    }
    else{
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
}
void insertPos(int val,int pos){
    Node* newNode= new Node;
    newNode->data=val;
    if(pos==0) add(val);
    else if(pos <0) return;
    else{
        Node* temp=head;
        for(int i=0;i<pos-1;i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
}
void show(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    add(1);
    add(2);
    add(3);
    show();
    int val,pos;
    cout<<"Enter the value you want to insert and position : ";
    cin>>val>>pos;
    add(val);
    addlast(val);
    show();
    deleteBeg();
    show();
    deleteEnd();
    show();
    insertPos(val,pos);
    show();
    return 0;
}*/