#include <bits/stdc++.h>
using namespace std;
vector<int> insertionsort(vector<int> a, int n){
    int j, key;
    for(int i=1;i<n;i++){
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key){
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
    return a;
}
int main(){
    vector<int> a = {1, 5, 6, 7, 8, 9, 10, 4, 2, 3};
    int n = a.size();
    a = insertionsort(a, n);
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}