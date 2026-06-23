#include <iostream>
#include <vector>
using namespace std;
bool isvalid(vector<int> &arr,int n,int m,int mid){
        int worker=1,plank=0;
        for(int i=0;i<n;i++){
            if(mid<arr[i]){
                return false;
            }
            if(plank+arr[i]<=mid){
                plank+=arr[i];
            }
            else{
                worker++;
                plank=arr[i];
            }
        }
        return worker>m?false:true;
}
int time(vector<int> &arr,int n,int m){
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    int start=0,ends=sum;
    int ans=-1;
    while(start<=ends){
        int mid=start+(ends-start)/2;
        if(isvalid(arr,n,m,mid)){
            ans=mid;
            ends=mid-1;
        }else{
            start=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr={1,3,4,7};
    int n=4,m=2;
    cout<<time(arr,n,m);
    return 0;
}