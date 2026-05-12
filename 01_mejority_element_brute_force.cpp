#include <vector>
#include <iostream>
using namespace std;


int main()
{
    vector<int> nums={1,1,2,2,2,1,1};
    int n = nums.size();
    for (int  i = 0; i < n; i++)
    {
        int count=0;
        for (int j = 0; j < n; j++)
        {
            if(nums[i]==nums[j]){
                count++;
            }
        }
        if (count>n/2)
        {
            cout<<nums[i];
            break;
        }  
    }
    return 0;
}

