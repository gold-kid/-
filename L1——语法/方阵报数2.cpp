#include <bits/stdc++.h>
using namespace std;

const int N=1009;
int a[N][N];

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		cout<<(i-1)*m+1;
		for(int j=2;j<=m;j++)
			cout<<" "<<(i-1)*m+j;
		cout<<endl;
	}
	return 0;
}
