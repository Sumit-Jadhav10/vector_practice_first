#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={1,2,3,4,5,3,5,9,1,11};
    int maxprof=0;
    int bestbuy=nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i]>bestbuy)
        {
            maxprof=max(maxprof,nums[i]-bestbuy);
        }
        bestbuy=min(bestbuy,nums[i]);
        
    }
    cout<<maxprof;
    
    
    return 0;
}