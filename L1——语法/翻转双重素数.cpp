#include <bits/stdc++.h>
using namespace std;

int fz(int x){
	int a[1009];
	int asd=0;
	memset(a,0,sizeof(a));
	int i=1;
	while(x){
		a[i]=x%10;
		x/=10;
		i++;
	}
	int sd=1;
	for(int j=i-1;j>=1;j--){
		asd+=a[j]*sd;
		sd*=10;
	}
	return asd;
}

int isprime1(int x){
	for(int i=2;i<=sqrt(x);i++)
		if(x%i==0)
			return 0;
	return 1;
} 

int isprime2(int x){
	int y=fz(x);
	if(isprime1(x)==1 && isprime1(y)==1)
		return 1;
	else
		return 0;
}

int main(){
	int n,ans=0;
	cin>>n;
	for(int i=2;i<=n;i++){
		if(isprime2(i)==1)
			cout<<i<<endl;
	}
	return 0;
}
