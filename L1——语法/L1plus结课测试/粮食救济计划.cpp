#include <bits/stdc++.h>
using namespace std;

const int N=1009;
int a[N];

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) a[i]+=m;
	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	return 0;
} 
