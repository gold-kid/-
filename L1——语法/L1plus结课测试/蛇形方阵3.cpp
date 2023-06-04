#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[109][109];

int main(){
	cin>>n>>m;
	int t=1;
	a[1][m]=1;
	int i=1,j=m;
	while(t<n*m){
		while(a[i][j-1]==0 && j-1>=1){
			j--;
			a[i][j]=++t;
		}
		while(a[i+1][j]==0 && i+1<=n){
			i++;
			a[i][j]=++t;
		}
		while(a[i][j+1]==0 && j+1<=m){
			j++;
			a[i][j]=++t;
		}
		while(a[i-1][j]==0 && i-1>=1){
			i--;
			a[i][j]=++t;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
