#include <bits/stdc++.h>
using namespace std;

int n,x,ans=0,st=0;

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		if(x==1){
			if(st<0)
				st=1;
			else
				st++;
			ans+=st;
		}
		else{
			if(st>0)
				st=-1;
			else
				st--;
			ans+=st;
			if(ans<0)
				ans=0;
		}
	} 
	if(ans>=50)
		cout<<"Yes";
	else{
		for(int i=1;;i++){
			if(st<0)
				st=1;
			else
				st++;
			ans+=st;
			if(ans>=50){
				cout<<i;
				break;
			}
		}
	}
	return 0;
}
