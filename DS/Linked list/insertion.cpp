#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
struct Node* head = NULL;
void insert(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}
void display(){
    struct Node* ptr = head;
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<"NULL";
}
int main(){
    cout<<"Enter the elements : ";
    int n;
    cin>>n;
   
    insert(20);
    insert(30);
    insert(n);
    display();
    return 0;
}