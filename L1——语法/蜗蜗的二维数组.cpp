#include <bits/stdc++.h>
using namespace std;

const int N=1009;
int a[N][N];

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			a[i][j]+=i*j;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
