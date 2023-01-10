#include <bits/stdc++.h>
using namespace std;
vector<int> bubbleSort(vector<int>a, int n) {
    bool flag = true;
    for (int i=0; flag;i++) {
        flag = false;
        for (int j=n-1;j>= i+1;j--) {
            if (a[j] < a[j - 1]) {
                swap(a[j], a[j - 1]);
                flag = true;
            }
        }
    }
    return a;
}
int main(){
    vector<int> a ={53, 132, 21, 62, 12, 76, 18, 3, 1, 9};
    int n = a.size();
    a = bubbleSort(a, n);
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}