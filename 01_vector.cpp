// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//  vector<int> vac(5);
//  for (int i = 0; i < 5; i++)
//  {
//     cin>>vac[i];
//  }
//  for (int i = 0; i < 5; i++)
//  {
//     cout<<vac[i];
//  }

// }


#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vac(5);
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter the "<<i+1<<" number :";
        cin >> vac[i];
    }
    int size = vac.size();
    int start = 0;
    int end = size - 1;
    for (int i = 0; i < size; i++)
    {
        while (start < end)
        {
            swap(vac[start], vac[end]);
            start++;
            end--;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << vac[i];
    }
    return 0;
}


