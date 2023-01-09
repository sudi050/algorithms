#include <bits/stdc++.h>
using namespace std;
int search(int arr[], int x){
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
int main(void){
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int result = search(arr, x);
    if (result == -1)
        cout << "Element is not present in array";
    else
        cout << "Element is present at index " << result;
    return 0;
}