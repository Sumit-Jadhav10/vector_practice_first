// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     vector<int> nums={1,1,2,2,2,1,1,2,2,2,2,2};
//     int n = nums.size();
//     int freq=1,ans=nums[0];
//     for (int  i = 1; i < n; i++)
//     {
//         if (nums[i]==nums[i-1])
//         {
//             freq++;
//         }
//         else{
//             freq--;
//             ans =nums[i];
       
//         }
//         if (freq>0)
//         {
//             cout<<nums[i];
//             break;
//         }
        
//     }
//     return 0;
// }