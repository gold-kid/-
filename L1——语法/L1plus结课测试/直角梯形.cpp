#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n+i-1;j++)
			cout<<"+";
		cout<<endl;
	}
	return 0;
} 
