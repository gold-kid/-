#include <bits/stdc++.h>
using namespace std;

int n, k, a[100009];

int main(){
	scanf("%d%d", &n, &k);
	for(int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for(int i = 1; i <= n; i++)
		for(int j = i + 1; j <= n; j++)
			if(a[i] + a[j] == k){
				printf("Yes");
				return 0;
			}
	printf("No");
	return 0;
}


