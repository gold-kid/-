#include <bits/stdc++.h>
using namespace std;

char s[300];
int a[300], b[300], c[700];
int la, lb, lc;

int main(){
	scanf("%s", s + 1);
	la = strlen(s + 1);
	for(int i = 1; i <= la; i++)
		a[i] = s[la - i + 1] - '0';
	for(int i = 1; i <= la; i++)
		c[i] = s[i] - '0';
	for(int i = la + 1; i <= la * 2 + 1; i++)
		c[i] = a[i - la];
	la *= 2;
	for(int i = 1;i <= la;i++)
		a[i] = c[i];
	scanf("%s", s + 1);
	lb = strlen(s + 1);
	for(int i = 1; i <= lb; i++)
		b[i] = s[lb - i + 1] - '0';
	for(int i = 1; i <= lb; i++)
		c[i] = s[i] - '0';
	for(int i = lb + 1; i <= lb * 2 + 1; i++)
		c[i] = b[i - lb];
	lb *= 2;
	for(int i = 1; i <= lb; i++)
		b[i] = c[i];
	lc = la + lb;
	memset(c, 0, sizeof(c));
	for(int i = 1; i <= la; i++)
		for(int j = 1; j <= lb; j++)
			c[i + j - 1] += a[i] * b[j];
	for(int i = 1; i <= lc; i++){
		c[i + 1] += c[i] / 10;
		c[i] %= 10;
	}
	while(c[lc] == 0 && lc > 1)
		lc--;
	for(int i = lc; i >= 1;i--)
		printf("%d", c[i]);
	return 0;
}
