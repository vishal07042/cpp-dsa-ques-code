#include<iostream>
using namespace std;

void quickSort(int arr[],int s,int e){

    if(s>=e){
        return ;
        //parititon karenge; 
    }

    int p= parition(arr,s,e);

    quickSort(arr,s,p-1);

    quickSort(arr,p+1,e);



}

int main()
{
    int arr[5]={2,4,1,6,9};
    int n=5;
    quickSort(arr,0,n-1);
    for(int s:arr){
        cout<<s<<" ";
    }
    return 0;
}