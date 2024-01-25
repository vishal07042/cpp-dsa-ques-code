#include<iostream>
using namespace std;

int main()
{    int s=5
    int arr[5]={1,2,3,4,5,};
    //left rotate 1 place 
  //  2,3,4,5,1 
  // you cant create new arrary;

  for (int i = 0; i < s-1; i++)
  {

    swap(arr[i],arr[i+1]);
        //swap(arr[1],arr[2]);
    
  }
  

      
  

  

  for(int x:arr){
    cout<<x;
  }


    return 0;
}