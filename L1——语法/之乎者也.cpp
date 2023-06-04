#include <bits/stdc++.h>
using namespace std;

const int N=1009;
char s[N];
int a[N],b[N],la,lb;

int c[N],d[N],e[N],f[N];
int lc,ld,le,lf;

int h[110],lh;

void init(int d){
	scanf("%s",s+1);
	la=strlen(s+1);
	for(int i=1;i<=la;i++)
		a[i]=s[la-i+1]-'0';
	lb=la;
	for(int i=1;i<=lb;i++){
		b[i]=a[i]*d+b[i];
		b[i+1]=b[i]/10;
		b[i]%=10; 
	}
	while(b[lb+1]>0){
		lb++;
		b[lb+1]=b[lb]/10;
		b[lb]%=10;
	}
}

int main(){
	init(3);
	lc=lb;
	for(int i=lc;i>=1;i--)
		c[i]=b[i];
	init(5);
	ld=lb;
	for(int i=ld;i>=1;i--)
		d[i]=b[i];
	init(8);
	le=lb;
	for(int i=le;i>=1;i--)
		e[i]=b[i];
	init(3);
	lf=lb;
	for(int i=lf;i>=1;i--)
		f[i]=b[i];
	
	for(int i=lc;i>=1;i--)
		cout<<c[i];
	cout<<endl;
	for(int i=ld;i>=1;i--)
		cout<<d[i];
	cout<<endl;
	for(int i=le;i>=1;i--)
		cout<<e[i];
	cout<<endl;
	for(int i=lf;i>=1;i--)
		cout<<f[i];
	return 0;
}



