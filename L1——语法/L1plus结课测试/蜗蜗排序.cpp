#include <bits/stdc++.h>
using namespace std;

const int N=1009;
int a[N],b[N];

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		int asd=a[i];
		while(asd){
			b[i]+=asd%10;
			asd/=10;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(b[i]<b[j]){
				swap(a[i],a[j]);
				swap(b[i],b[j]);
			}
			else{
				if(b[i]>b[j])
					continue;
				else{
					if(a[i]<a[j]){
						swap(a[i],a[j]);
						swap(b[i],b[j]);
					}
					else
						continue;
				}
			}
		}
	}
	for(int i=1;i<=n;i++)
		cout<<a[i]<<" ";
	return 0;
}
