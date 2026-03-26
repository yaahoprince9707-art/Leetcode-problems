#include <iostream>
#include <vector>
using namespace std;

// vector<int> TwoSum(vector<int> nums, int target)
// {
//     int ans1,ans2;
//     for(int i=0;i<nums.size();i++){
//         for(int j=i+1;j<nums.size();j++){
//             int sum = nums[i]+nums[j];
//             if(sum == target){
//                 ans1=i;
//                 ans2=j;
//             }

//         }
//     }
//     return {ans1,ans2};
// }
vector<int> twoSum(vector<int>& numbers, int target) {
       int ans1,ans2;
        int i=0;
        int j= numbers.size()-1;
        while(i<j){
           int sum = numbers[i]+numbers[j];
            if(sum == target){
              ans1=i;
              ans2=j;
              break;
            }
            else if(sum > target){
                j--;
            }
            else {
                i++;
            }
        }
        return {ans1+1,ans2+1};
    }
int main()
{
    vector<int> nums;
    int n, target;
    cout << "enter the target : ";
    cin >> target;
    cout << "enter the number of elements :";
    cin >> n;
    cout << "enter the array " << endl;
  for(int i=0;i<n;i++){
    int element;
    cin>>element;
    nums.push_back(element);
}
   vector<int> ans = twoSum(nums, target);
    for (int ele : ans)
    {
        cout << ele << " ";
    }
    return 0;
}