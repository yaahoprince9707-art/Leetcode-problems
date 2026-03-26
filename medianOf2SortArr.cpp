#include<iostream>
#include<vector>
using namespace std;
double median(vector<int> nums1,vector<int> nums2){
    int i=0,j=0;
    double ans;
    vector<int> nums3;
    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]<nums2[j]){
            nums3.push_back(nums1[i]);
            i++;
        }
        else{
            nums3.push_back(nums2[j]);
            j++;
        }
    }
    while(i<nums1.size()){
            nums3.push_back(nums1[i]);
            i++;
    }
    while(j<nums2.size()){
            nums3.push_back(nums2[j]);
            j++;
    }
    int l=nums3.size();
    if(l%2==0){
        ans= (nums3[l/2]+nums3[(l/2)-1])/2.0;
    }
    else{
        ans= nums3[l/2];
    }
    return ans;
}
int main(){
       int i,n,m;
       cout<<"enter the size of nums1 and nums2 :";
       cin>>n>>m;
vector<int> v1,v2;
for(i=0;i<n;i++){
    int element;
    cin>>element;
    v1.push_back(element);
}
for(i=0;i<m;i++){
    int element;
    cin>>element;
    v2.push_back(element);
}
double ans = median(v1,v2);
cout<<"the median of the the two sorted array is :"<<ans<<endl;
    return 0;
}