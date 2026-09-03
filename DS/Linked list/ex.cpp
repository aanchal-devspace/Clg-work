#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* traverse(vector<int> arr){
    Node* head=new Node(arr[0]);
    Node* temp=head;
   for(int i=0;i<arr.size();i++){
    Node* temp = new Node(arr[i]);
    cout<<temp->data<<" ";
    temp->next=temp;
    
   }
   return head;
}
int main(){
    vector<int> arr={2,5,3,9,7};
    Node* head= traverse(arr);
   
    

}