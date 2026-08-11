#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,arr[10];
    cout<<"Enter number of elements in array : ";
    cin >> num;
    cout<<"Enter elements of array : "<< endl;
    for(int i=0;i<num;i++){
        cin>>arr[i];
       
    }
    cout<<"The elements in array is : "<<endl;
    for(int i=0;i<num;i++){
        cout << arr[i]<<" ";
       
    }
    return 0;
}

/*
Output : 
Enter number of elements in array : 3
Enter elements of array :
2 3 5 4 7
The elements in array is :
2 3 5 
*/