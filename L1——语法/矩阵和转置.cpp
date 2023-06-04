#include <bits/stdc++.h>
using namespace std;

int a[1009][1009];

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			a[i][j]=j+(i-1)*n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			cout<<a[j][i]<<" ";
		cout<<endl;
	}
	return 0;
}


