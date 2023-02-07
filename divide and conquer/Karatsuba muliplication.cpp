#include<bits/stdc++.h>
using namespace std;
int Length(int a,int  b){
    int l=0;
    if(a>b){
        int c=a;
        while(c>0){
            c=c%10;
            l++;
        }
    }
    else{
        int c=b,l=0;
        while(c>0){
            c=c%10;
            l++;
        }
    }
    return l;
}
int multiply(int a, int b)
{
	int m = Length(a,b);
    cout<<1;
	if (m <= 1) 
        return a*b;

	int n = m/2;
	int al = a/(10^n);
	int ar = a%(10^n);
    int bl = b/(10^n);
	int br = b%(10^n);
    int p1=multiply(al,bl);
    int p2=(multiply((al+ar),(bl+br))-multiply(al,bl)-multiply(ar,br));
    int p3=multiply(ar,br);
	return 10^(2*n)*p1+(10^n)*p2+p3;
}
int main(){
    cout<<multiply(2012,2345);
}

