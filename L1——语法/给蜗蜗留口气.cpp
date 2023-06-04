#include <bits/stdc++.h>
using namespace std;

const int N=1009;
int a[N][N],b[N][N];

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	for(int i=0;i<=n+1;i++){
		a[i][0]=1;
		a[i][n+1]=1;
		a[0][i]=1;
		a[n+1][i]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]!=2)
				continue;
			else{
				if(a[i-1][j]==0){
					b[i][j]++;
					a[i-1][j]=1;
				}
				if(a[i+1][j]==0){
					b[i][j]++;
					a[i+1][j]=1;
				}
				if(a[i][j+1]==0){
					b[i][j]++;
					a[i][j+1]=1;
				}
				if(a[i][j-1]==0){
					a[i][j-1]=1;
					b[i][j]++;
				}
			}
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			ans+=b[i][j];
	cout<<ans;
	return 0;
} 
