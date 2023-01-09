#include <bits/stdc++.h>
using namespace std;
int search(int arr[], int x, int n){
    int step = sqrt(n);
    int jump = step;
    int prev = 0;
    while (arr[min(step, n) - 1] < x){
        prev = step;
        step += jump;
        if (prev >= n)
            return -1;
    }
    while (arr[prev] < x){
        prev++;
        if (prev == min(step, n))
            return -1;
    }
    if (arr[prev] == x)
        return prev;
    return -1;
}
int main(){
    int arr[] = { 2, 3, 4, 10, 40, 54, 34, 92, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    int x = 900;
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    int result = search(arr, x, n);
    if (result == -1)
        cout << "Element is not present in array";
    else
        cout << "Element is present at index " << result;
    return 0;
}