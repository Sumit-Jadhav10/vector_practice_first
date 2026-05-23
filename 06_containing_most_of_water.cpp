#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> height={2,2,3,4,5};
        int n=height.size(); 
        int maxwater=0;
        int i=0,j=n-1;
        while(i<j){
        int w=j-i;
        int ht=min(height[i],height[j]);
        int currentwater=w*ht;
        maxwater=max(maxwater,currentwater);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        cout<<maxwater;

            }

