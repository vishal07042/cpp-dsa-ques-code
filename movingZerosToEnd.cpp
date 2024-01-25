#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int main()
{   
    vector <int> p; 
   // int count=0;
   int ans;
     int  s=5;
    //int arr[s]={0,1,0,3,4,0,0,0,5,6,0};

    int arr[5]={0,1,0,3,12};
    
    //ans => 1,3,4,5,6,0,0,0,0,0,0

    //if arr[i] ==0 put it at last

   // iterate karke nonzero num se swap karte hai
   

    for (int i = 0; i < s; i++)
    {
        ans=arr[i]^0;
        
        if(ans!=0){
          p.push_back(arr[i]);
           
        }

    }

// cout<<p.size()<<" is the size";
// cout<<endl;

    for(int i=p.size();i<s;i++){
        p.push_back(0);
    }



    


  for(int s:p){
    cout<<s<<" ";
  }

    return 0;
}