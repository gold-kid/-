#include <bits/stdc++.h>
using namespace std;

int a[100];

void ph(){
	if(a[1] == 1)
		printf("h");
}

void pe(){
	if(a[2] == 2)
		printf("e");
}

void pl(){
	if(a[3] == 3)
		printf("l");
}

void pl2(){
	pl();
}

void p3(){
	printf("3");
	p3();
}

int main(){
	p3();
	return 0;
}
