#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    
      vector <int > prices ={7,0,9,3,6,4} ;
       int  s= prices.size();

        int  min=prices[0];
        int max=prices[0];


      for(int i=0;i<s;i++){

        if(min>prices[i]){
            min=prices[i];
        }
        if(max<prices[i]){
            max=prices[i];
        }

      
        
      };
      cout<<min;
      cout<<endl;
      cout<<max;
    return 0;
}