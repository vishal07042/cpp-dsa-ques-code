#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> p = {1, 2, 2, 3, 3, 4, 5, 6};

    for (int i = 0; i < p.size() - 1;)
    {
        if (p[i] == p[i + 1])
        {
            
            p.erase(p.begin() + i + 1);
        }
        else
        {
            i++;
        }
    }

    

    // Print the modified vector
    for (int i : p)
    {
        cout << i << " ";
    }

    return 0;
}
