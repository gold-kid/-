#include <bits/stdc++.h>
using namespace std;

const int N=1009;
long long a[N];

int main(){
	long long n,m,k;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m>>k;
		int j=1;
		while(m){
			a[j]=m%k;
			m/=k;
			j++; 
		}
		for(int t=j-1;t>=1;t--){
			if(a[t]<10)
				cout<<a[t];
			else
				cout<<(char)(a[t]-10+'A'); 
		}
		cout<<endl;
	}
	return 0;
}
