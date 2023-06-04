#include <bits/stdc++.h>
using namespace std;

const int N=1009;
int a[N];

int main(){
	int n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++)
			if(a[i]>a[j])
				ans++;
	cout<<ans;
	return 0;
}
