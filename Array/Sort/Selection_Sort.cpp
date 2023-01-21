#include <bits/stdc++.h>
using namespace std;
vector<int> selectionSort(vector<int> a, int n){
	int i, j, min_idx;
	for (i = 0; i < n-1; i++){
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (a[j] < a[min_idx])
			min_idx = j;
		if(min_idx!=i)
			swap(a[min_idx],a[i]);
	}
    return a;
}
int main(){
    vector<int> a = {1, 5, 6, 7, 8, 9, 10, 4, 2, 3};
    int n = a.size();
    a = selectionSort(a, n);
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}