#include<iostream>
using namespace std;
#include<vector>
int minSearch(vector<int> nums){
    int ans=-1;
    int s=0;
    int e= nums.size()-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(s == e && s == mid){
            ans=nums[mid];
            break;
        }
        if(nums[mid]>=nums[s] && nums[mid]<nums[e]){
            ans = nums[s];
            break;
        }
        if(nums[mid]>=nums[s] && nums[mid]>nums[e]){
            s= mid+1;
        }
         else{
            e= mid-1;
        }
        if(nums[mid]<nums[mid+1] && nums[mid]<nums[mid-1] ){
            ans = nums[mid];
            break;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main(){
    vector<int> v ;
    cout<<"enter the elements :"<<endl;
    for(int i=0;i<7;i++){
    int element;
    cin>>element;
    v.push_back(element);
}
for(int i=0;i<7;i++){
    cout<<v[i]<<"  ";
}
cout<<"hi"<<endl;
    int ans = minSearch(v);
    cout<<"ans = "<<ans<<endl;
    return 0;
}
