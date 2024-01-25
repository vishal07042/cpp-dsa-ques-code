#include<iostream>
using namespace std;

int main()
{  int  s1=6;
    int arr[]={2,2,0,1,1,0};
     int  s=0;
      int  e=s1-1;

     for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);

            }
        }
     }

      


for(int i=0;i<6;i++){
    cout<<arr[i];
}

    return 0;
}