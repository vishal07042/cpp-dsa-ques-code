#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    vector <int > p; 
 
 int k=2;
 int temp;
 int s=5;
    
    int arr[s]={1,2,3,4,5};

    //3,4,5,1,2

   


    for( int  i=k; i<=s-1;i++){

        p.push_back(arr[i]);

    }


 for(int i=0;i<k;i++){
        temp=arr[i];
         p.push_back(temp);
    }
   

    for(int s:p){
        cout<<s;
    }
    

    return 0;
}