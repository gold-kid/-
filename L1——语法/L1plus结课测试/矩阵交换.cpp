#include <bits/stdc++.h>
using namespace std;

const int N=1009;
int a[N][N];

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	int k,m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(a[i][j]==1)
				k=i,m=j;
	if(k==1&&m==1){
		cout<<0;
		return 0;
	}
	else if(k==1&&m!=1 || k!=1&&m==1){
		cout<<1;
		return 0;
	}
	else{
		cout<<2;
		return 0;
	}
	return 0;
}
