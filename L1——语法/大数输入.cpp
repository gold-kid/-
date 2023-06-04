#include <bits/stdc++.h>
using namespace std;

const int N=1009;
char s[N];
int a[N],la;

int main(){
	scanf("%s",s+1);
	la=strlen(s+1);
	for(int i=1;i<=la;i++)
		a[i]=s[i]-'0';
	a[la]++; 
	for(int i=1;i<=la;i++)
		cout<<a[i];
	return 0;
} 
