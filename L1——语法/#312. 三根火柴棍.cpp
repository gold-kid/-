#include <bits/stdc++.h>
using namespace std;

int main(){
	int l1, l2, l3;
	scanf("%d%d%d", &l1, &l2, &l3);
	int ma = max(l1, max(l2, l3));
	int mi = min(l1, min(l2, l3));
	int ex = (l1 + l2 + l3) - ma - mi;
	if(mi <= (ma - ex) || ma >= (mi + ex))
		printf("0");
	else
		printf("1");
	return 0;
} 
