#include<iostream>
using namespace std;

int main()
{     int  Tsum=0;
 int  iSum=0;
     int num = 8;
   // int arr[num] = {7, 8, 2, 3, 4, 6, 0, 1};

    int arr[9]= {9,6,4,2,3,5,7,0,1};

    for (int i = 0; i < 9+1; i++)
    {
        Tsum = Tsum+i;
        
    }
 

    for (int i = 0; i < 9; i++)
    {
        iSum= iSum+arr[i];

    }
   // cout<<endl;
    //cout<<iSum;

    int w= Tsum-iSum;

    cout<<"missing Number is "<<w;
    
    






   
    
    return 0;
}