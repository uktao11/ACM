#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n,dem=0;
	cin>>n;
	int a[n];
	dem=(n*(n+1))/2;
	for(int i=0;i<n-1;i++)
		cin>>a[i];
	for(int i=0;i<n-1;i++){
		dem-=a[i];
	}
	cout<<dem<<endl;
}