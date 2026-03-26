#include <iostream>
using namespace std;
int binarySearch(int arr[], int s, int e, int x)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {

        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] < x)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int searchInRotated(int arr[], int target, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            count++;
        }
        else
        {
            break;
        }
    }
    int left = binarySearch(arr, 0, count, target);
    int right = binarySearch(arr, count + 1, n - 1, target);
    int ans = max(left,right);
    return ans;
}
int main()
{
    // cout<<max(0,0)<<" ans"<<endl;
    int arr[7];
    cout << "enter the elements of array :" << endl;
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "enter the target :";
    cin >> x;
    int ans = searchInRotated(arr, x, 7);
    cout << "the target is found at index " << ans << endl;
    return 0;
}