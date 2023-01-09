#include <bits/stdc++.h>
using namespace std;
int search(int arr[], int l, int r, int x){
    int mid1 = l + (r - l) / 3; //midlle pointer-1
    int mid2 = r - (r - l) / 3; //midlle pointer-2
    if (arr[mid1] == x)
        return mid1;
    else if (arr[mid2] == x)
        return mid2;
    else if (x < arr[mid1])
        return search(arr, l, mid1 - 1, x);
    else if (x > arr[mid2])
        return search(arr, mid2 + 1, r, x);
    else
        return search(arr, mid1 + 1, mid2 - 1, x);
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