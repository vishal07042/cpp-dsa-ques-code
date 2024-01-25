#include<iostream>
using namespace std;

int main()
{
   // n/2;  matlab appear more than once 
   int nums[8]={2,3,3,2,1,2,2,1};
   int count=0;


     for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(nums[i]>nums[j]){
                swap(nums[i],nums[j]);

            }
        }
     }

     for(int i=0;i<8;i++){
        
        for(int j=1;j<8;j++){
            if(nums[i]==nums[j]){
                count++;
            }else{
                count=0;
                i++;
            }
        }
        }


       for(int x:nums){
        cout<<x;
       }

         return 0;
     }




  