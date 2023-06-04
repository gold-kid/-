#include <bits/stdc++.h>
using namespace std;

const int N=1009;
int a[N];

int main(){
	set<int> s;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s.insert(a[i]);
	}
	cout<<s.size()<<endl;
	set<int>::iterator it;
	for(it=s.begin();it!=s.end();it++)
		cout<<*it<<" ";
	return 0;
}
