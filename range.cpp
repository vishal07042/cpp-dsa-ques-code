#include <iostream>
using namespace std;

int main()
{
    int num = 8;
    int arr[num] = {7, 8, 2, 3, 4, 6, 0, 1};

    // range wil be 0-num;
    for (int j = 0; j < 8; j++)
    {
        for (int i = 0; i < 8; i++)
        {
            // if(j==arr[i]){
            //     cout<<arr[i]<<" is present";
            //     cout<<endl;


            // }

            if(j!=arr[i]){
                cout<<j<< " is absent ";
                cout<<endl;
            }

           


        }
    }

    return 0;
}