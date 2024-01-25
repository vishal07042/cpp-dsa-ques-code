#include<iostream>
using namespace std;

int main()
{

    int arr[]={1,1,2,2,2,2,3,3};
    int prevC;
     int  count;

    for( int  i=0;i<8;i++){
        int ans=arr[i]^arr[i+1];

        if(ans==0 && prevC>=count){
            count++;
            prevC=count;
            
        }else{
            count=0;
        }

        

    }

    cout<<prevC;
    return 0;
}