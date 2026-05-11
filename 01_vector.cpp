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


// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> vac(5);
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<"Enter the "<<i+1<<" number :";
//         cin >> vac[i];
//     }
//     int size = vac.size();
//     int start = 0;
//     int end = size - 1;
//     for (int i = 0; i < size; i++)
//     {
//         while (start < end)
//         {
//             swap(vac[start], vac[end]);
//             start++;
//             end--;
//         }
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << vac[i];
//     }
//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// int reverce(vector<int>& vac,int size){

    
//     int start = 0;
//     int end = size - 1;
//         for (int i = 0; i < size; i++)
//     {
//         while (start < end)
//         {
//             swap(vac[start], vac[end]);
//             start++;
//             end--;
//         }
//     }      
// }
// int main()
// {
//     vector<int> vac(5);
//     int size = vac.size();

//     for (int i = 0; i < 5; i++)
//     {
//         cout<<"Enter the "<<i+1<<" number :";
//         cin >> vac[i];
//     }
//     reverce(vac,size);
//     for (int i = 0; i < size; i++)
//     {
//         cout << vac[i]<<" ";
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vac={1,2,3,4,6,-3,-4,-7,9,9};
     int currentsum=0,maxsum=INT_FAST8_MIN;
     for(int value:vac){
        currentsum+=value;
        maxsum=max(currentsum,maxsum);
        if (currentsum<0)
        {
            currentsum=0;
        }
        
        
     }
cout<<maxsum;

    return 0;
}