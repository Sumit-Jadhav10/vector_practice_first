#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// bool ispossible(vector<int>&nums,int N,int C,int minallocationdict){
//     int cows=1,laststallpos=nums[0];
//     for(int i=1;i<N;i++){
//         if(nums[i]-laststallpos>=minallocationdict){
//             cows++;
//             laststallpos=nums[i];
//         }
//         if(cows==C){
//             return true;
//         }
//     }
//     return false;
// }
// int getdistance(vector<int> &nums,int N,int C){
//     sort(nums.begin(), nums.end());
//     int st=1,end=nums[N-1]-nums[0];
//     int ans=0;
//     while(st<=end){
//         int mid=st+(end-st)/2;
//         if(ispossible(nums,N,C,mid)){
//             st=mid+1;
//             ans=mid;
//         }
//         else{
//             end=mid-1;
//         }
//     }
//     return ans;

// }
// int main(){
//     vector<int> nums={1,4,2,9};
//     int cows=3;
//     int node=nums.size();
//     cout<<getdistance(nums,node,cows);
//     return 0;
// } 
bool ispossible(vector<int> &nums,int N,int M,int mid){
     int cows=1;
     int lastPos = nums[0];
     for (int i = 1; i < N; i++)
     {
        if(nums[i]-lastPos>=mid){
            cows++;
            lastPos=nums[i];

        }
        if(cows==M){
            return true;
        }

     }
     return false;
     
}
int getdistance(vector<int> &nums,int N,int M){
    sort(nums.begin(),nums.end());
    int mindict=1;
    int maxdict = nums[N-1] - nums[0];
    int ans=-1;
    while(mindict<=maxdict){
        int mid=mindict+(maxdict-mindict)/2;
        if((ispossible(nums,N,M,mid))){
            ans=mid;
            mindict=mid+1;
        }else{
            maxdict=mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int> nums={1,3,4,9};
    int cows=3;
    int nodes=nums.size();
    cout<<getdistance(nums,nodes,cows);
    return 0;
}