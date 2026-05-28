#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={2,2,1};
    int st=0,end=nums.size()-1;
    if(nums.size()==1){
        cout<< nums[0];
        return 0;
        
    } 
    while(st<=end){
        int mid=st+(end-st)/2;
        if(mid==0&& nums[mid]!=nums[mid+1]){
            cout<<nums[mid];
            break;
        }
        if(mid==nums.size()-1&&nums[mid]!=nums[mid-1]){
            cout<<nums[mid];
            break;
        }
        if(mid%2==0){
            if(nums[mid]!=nums[mid-1]&&nums[mid]!=nums[mid+1]){
                cout<<nums[mid];
                break;
            }
            else if(nums[mid]==nums[mid-1]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        else{
            if(nums[mid]!=nums[mid-1]&&nums[mid]!=nums[mid+1]){
                cout<<nums[mid];
                break;            
            }
            else if(nums[mid]==nums[mid-1]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }    
        
    }
    return 0;
}