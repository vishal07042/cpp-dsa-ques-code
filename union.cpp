#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{

  vector<int> p;
  int ans;
  int arr1[5] = {1, 2, 3, 4, 6};
  int arr2[3] = {2, 3, 5};

  for (int i = 0; i < 5; i++)
  {
    p.push_back(arr1[i]);
  };
  for (int i = 0; i < 3; i++)
  {
    p.push_back(arr2[i]);
  }

  for (int i = 0; i < 8; i++)
  {
    for (int j = i + 1; j < 8; j++)
    {
      if (p[i] > p[j])
      {
        swap(p[i], p[j]);
      }
    }
  }

  

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

  for (int x : p)
  {
    cout << x << " ";
  };

  return 0;
}