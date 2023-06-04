#include <bits/stdc++.h>
using namespace std;

const int N=1009;
int a[N];

int main(){
	int n;
	cin>>n;
	int ans=0;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		int asd=a[i];
		while(asd>0){
			int x=asd%10;
			asd/=10;
			if(x==7){
				ans++;
				break;
			}
		}
	}
	cout<<ans;
	return 0;
} 
