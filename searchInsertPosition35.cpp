#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int target)
{   int ans;
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {   
        if (arr[mid] == target)
        {
            return mid;
        }
        if(mid == 0) return mid;
        if(mid == n-1) return mid+1;
        if (arr[mid] > target)
        {
            if (arr[mid - 1] < target)
            {
                ans = mid;
                break;
            }
            else
            {
                e = mid - 1;
            }
        }
        else
        {
            if (arr[mid + 1] > target)
            {
                ans= mid + 1;
                break;
            }
            else
            {
                s = mid + 1;
            }
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main(){
    int arr[8] ={1,3,5,7,9,13,14,16};
    int x;
    cout<<"enter the target :";
    cin>>x;
    int ans = binarySearch(arr,8,x);
    cout<<"ans = "<<ans<<endl;
    return 0;
}