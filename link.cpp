#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<vector> 

class Node{
    public:
    int data;
    Node * next;


    public:
    Node(int data1,Node * next1){
        data= data1;
        next= next1;

    }
    public:
    Node(int data1){
        data= data1;
        next= nullptr;
    }
};

 Node * convertArr2LL(vector<int> &arr){
    
    Node * head = new Node(arr[0]);
    Node * mover = head;

    for(int i=1;i<arr.size();i++){
        mover->next = temp;
        mover = temp;
    }

    return head;

}

int main()
{
    vector<int> arr = {2,5,8,7};
    Node* head = convertArr2LL(arr);
    cout<<head->data;
    
    return 0;
}