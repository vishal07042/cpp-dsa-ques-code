#include<iostream>
using namespace std;

int main()
{   int s=3;
    //int arr[s]={4,4,4,1,1,1,1};
  //  int arr[s]={2,2,1,1,1,2,2};
   // int arr[s]={3,2,3};
   int arr[s]={3,3,4};
    int count =0;
    int p;

    for(int i=0;i<s;i++){
        for( int  j=i+1;j<s;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }

    }

  for(int i=0;i<s;i++){
    for (int j = 1; j <s ; j++) {
        if(arr[i]==arr[j]){
            count++;
            p=arr[i];
        }else{
            
            count=0;
        }

    };

  };


cout<<p;
cout<<endl;
for (auto &&i : arr)
{
    cout<<i;
}



    return 0;
}

