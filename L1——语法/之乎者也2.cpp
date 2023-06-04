#include <bits/stdc++.h>
using namespace std;

char s[110];
int a[110],r[210];
int l,la,x;

int main(){
	for(int k=1;k<=4;k++){
		if(k==1 || k==4)
			x=3;
		else if(k==2)
			x=5;
		else
			x=8;
		scanf("%s",s+1);
		la=strlen(s+1);
		memset(a,0,sizeof(a));
		for(int i=1;i<=la;i++)
			a[i]=s[la-i+1]-'0';
		for(int i=1;i<=la;i++)
			r[i]+=a[i]*x;
		if(la>l)
			l=la;
	}
	for(int i=1;i<=l;i++){
		r[i+1]+=r[i]/10;
		r[i]%=10;
	}
	while(r[l+1]>0){
		l++;
		r[l+1]+=r[l]/10;
		r[l]%=10;
	}
	for(int i=l;i>=1;i--)
		cout<<r[i];
	return 0;
}
