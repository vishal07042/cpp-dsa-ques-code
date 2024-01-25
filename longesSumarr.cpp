#include <iostream>
using namespace std;
#include <vector>
#include<bits/stdc++.h>
int main()
{
    int n = 7;
    int k = 3;
    int sum = 0;
    int count =0;

    // return longest pairs  whose sum =k;
    int arr[n] = {1, 2, 3, 1, 1, 1, 1};
    
        vector<int> p;

    for (int i = 0; i < 7; i++)
    {

        sum = sum + arr[i];


        if (sum = k)
        {sum=0;
            
            p.push_back(arr[i]);
           
          
           
           
          
            
        }

          
    }

  



    for(int x:p){
        cout<<x;
    }

    return 0;
}