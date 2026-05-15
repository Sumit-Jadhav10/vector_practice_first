// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     vector<int> nums={1,2,3,4,5,3,4,5};
//     int n = nums.size();
//     vector<int> ans(n,1);
//     for (int i = 1; i < n; i++)
//     {
//         ans[i]=ans[i-1]*nums[i-1];
//     }  
//     int suffix=1;
//     for (int  i =n-2; i >=0 ; i--)
//     {
//         suffix*=nums[i+1];
//         ans[i]*=suffix;
//     }
    
//    cout<<ans[5];
    


//     return 0;
// }


#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums={1,2,3,4,5,3,4,5};

   int n=nums.size();
        vector<int> ans(n,1);
        vector<int> prifix(n,1);
        vector<int> suffix(n,1);
        for(int i=1;i<n;i++){
            prifix[i]=prifix[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            suffix[i]=suffix[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++){
            ans[i]=prifix[i]*suffix[i];
        } 
        
        cout<<ans[5];
    


    return 0;
}