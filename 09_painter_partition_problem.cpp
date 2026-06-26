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
    if(n<m){
        return -1;
    }
    int sum=0;
    int maxvalue=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        maxvalue=max(arr[i],maxvalue);
    }
    int start=maxvalue,ends=sum;
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
    vector<int> arr={1,1,3,3};
    int n=4,m=3;
    cout<<time(arr,n,m);
    return 0;
}