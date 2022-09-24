#include<bits/stdc++.h>
using namespace std;


//implement binary search
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}


int main(){
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 30;
    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
        cout << x << " not present in array";
    else
        cout << x << " is present at index " << result;
}