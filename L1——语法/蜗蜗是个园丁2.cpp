#include <bits/stdc++.h>
using namespace std;

int a[10009];
int n;

int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++)
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
	}
	cout<<a[n]<<endl;
	for(int i=1;i<=n;i++)
		cout<<a[i]-a[i-1]<<" ";
	return 0;
} 
