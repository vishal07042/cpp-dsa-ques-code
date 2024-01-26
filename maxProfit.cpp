#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    // vector <int > prices ={6,4,7,3,1};
    int s = prices.size();


    int min = prices[0];
    int max = prices[0];
    int p;
    for (int i = 0; i < s; i++)
    {

        if (min > prices[i])
        {
            min = prices[i];
        }
        if (max < prices[i])
        {
            max = prices[i];
        }
    }
    p=max-min;
    cout<<p;

    return 0;
}