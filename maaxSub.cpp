#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    
     
  vector  <int> nums={-2,1,-3,4,-1,2,1,-5,4};
   int  s=nums.size();

   int sum=0;
    int  nextSum;
   for(int i=0;i<s;i++){

    if(nums[i]>nums[i+1]){
        sum=sum+nums[i];
        cout<<nums[i]<<" ";
    }
   
   };
  // cout<<sum;


 
  
    return 0;
}