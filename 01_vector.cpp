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

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> vac={1,2,3,-9,4,6};
//      int currentsum=0,maxsum=INT_FAST8_MIN;
//      for(int value:vac){
//         currentsum+=value;
//         maxsum=max(currentsum,maxsum);
//         if (currentsum<0)
//         {
//             currentsum=0;
//         }

//      }
// cout<<maxsum;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> nums={1,2,3,4,5};
//     int target;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         for (int j = i; j <= nums.size() - 1; j++)
//         {
//             for (int  k = i; k <= j; k++)
//             {
//                 cout<<nums[k];
//             }
//             cout<<" ";

//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> vac={1,2,3,-9,4,6};
//      int currentsum=0,maxsum=INT_FAST8_MIN;
//      for(int value:vac){
//         currentsum+=value;
//         maxsum=max(currentsum,maxsum);
//         if (currentsum<0)
//         {
//             currentsum=0;
//         }

//      }
// cout<<maxsum;

//     return 0;
// }

// #include <vector>
// #include <iostream>
// using namespace std;

//  vector<int> sumoftwo(vector<int> nums,int target)
//  {
//     vector<int> ans;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         for (int j = i+1; j < nums.size(); j++)
//         {
//             if (nums[i]+nums[j]==target)
//             {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }

//         }

//     }
//     return ans;

//  }
// int main(){
//     vector<int> nums={1,2,3,4,5,6};
//     int target= 9;
//     vector<int> ans =sumoftwo(nums,target);
//     cout<<ans[0]<<","<<ans[1];
//     return 0;
// }

#include <vector>
#include <iostream>
using namespace std;

vector<int> sumoftwo(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (nums[i] + nums[j] > target)
        {

            j--;
        }
        else if (nums[i] + nums[j] < target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int target = 9;
    vector<int> ans = sumoftwo(nums, target);
    cout << ans[0] << "," << ans[1];
    return 0;
}