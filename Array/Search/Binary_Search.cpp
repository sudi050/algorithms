#include <bits/stdc++.h>
using namespace std;
int search(int arr[], int l, int r, int x){
    int mid = l + (r - l) / 2; //midlle pointer
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] > x)
        return search(arr, l, mid - 1, x);
    else
        return search(arr, mid + 1, r, x);
    if (l > r)
        return -1;
}
int main(){
    int arr[] = { 2, 3, 4, 10, 40, 54, 34, 92, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    int l = 0, r = n-1;
    // l - left pointer
    // r - right pointer
    int result = search(arr, l, r, x);
    if (result == -1)
        cout << "Element is not present in array";
    else
        cout << "Element is present at index " << result;
    return 0;
}