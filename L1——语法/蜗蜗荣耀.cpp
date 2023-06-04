#include <bits/stdc++.h>
using namespace std;

const int N=5009;
int a[N];

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int ans=0;
	int y=0;
	int s=0;
	for(int i=1;i<=n;i++){
		if(a[i]==1){
			y++;
			s=0;
			ans+=y;
		}
		else{
			s++;
			y=0;
			ans-=s;
			if(ans<0)
				ans=0;
		}
	}
	if(ans>=50){
		printf("Yes");
	}	
	else{
		int i=1;
		while(ans<50){
			ans=ans+y+i;
			i++;
		}
		printf("%d",i-1);
	}
	return 0;
}
