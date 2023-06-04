#include <bits/stdc++.h>
using namespace std;

int jc(int x){
	int asd=1;
	for(int i=1;i<=x;i++)
		asd*=i;
	return asd;
} 

int main(){
	int x;
	cin>>x;
	while(x!=0){
		cout<<jc(x)<<" ";
		cin>>x;
	}
	return 0;
}
