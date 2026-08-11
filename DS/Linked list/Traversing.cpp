#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void traverse(Node* Head){
    if(Head == NULL){
        cout<<"Linked list empty";
    }
    else{
        Node* ptr = Head;
        while(ptr != NULL){
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
    }
}
int main(){
    Node* first = new Node{1,nullptr};
    Node* second = new Node{2,nullptr};
    Node* third= new Node{3,nullptr};
    first->next = second;
    second->next = third;
    traverse(first);


    return 0;
}