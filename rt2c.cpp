#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main()

{ 
    vector <int > p; 
     int d=2;
     int s=8;

  //  int nums[]={1,2,3,4,5};

    int nums[]={7, 5 ,2, 11 ,2 ,43, 1 ,1
};


    for(int i=d;i<s;i++){
        p.push_back(nums[i]);
    }
  

  for(int i=0;i<d;i++){
    p.push_back(nums[i]);
  }




    for(int x:p) {
        cout<<x;
        
    }

    return 0;
}