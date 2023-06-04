#include <bits/stdc++.h>
using namespace std;

const int N=1009;
long long a[N],b[N];

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++) 
			if(a[i]>a[j])
				swap(a[i],a[j]);
	b[1]=a[1];
	for(int i=2;i<=n;i++)
		b[i]=a[i]-a[i-1];
	int ans=a[n];
	cout<<ans<<endl;
	for(int i=1;i<=n;i++)
		cout<<b[i]<<" ";
	return 0;
}




