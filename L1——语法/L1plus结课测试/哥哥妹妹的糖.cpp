#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	if(n<=m){
		cout<<"peace";
		return 0;
	}
	else{
		int asd=n/2;
		n-=asd;
		m+=asd;
		if(n<=m){
			cout<<"happy";
			return 0;
		}
		else{
			cout<<"sad";
			return 0;
		}
	}
	return 0;
}
