#include <bits/stdc++.h>
using namespace std;

struct node{
	int v;
	node *next;
} *h1, *t1, *h2, *t2, a[100001], b[100001];
int n, m;

node *Merge(node *h1, node *h2);

int main(){
	scanf("%d%d", &n, &m);
	h1 = t1 = NULL;
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i].v);
		if(h1 == NULL)
			h1 = t1 = &a[i];
		else{
			t1->next = &a[i];
			t1 = &a[i];
		}
	}
	h2 = t2 = NULL;
	for(int i = 1; i <= m; i++){
		scanf("%d", &b[i].v);
		if(h2 == NULL)
			h2 = t2 = &b[i];
		else{
			t2->next = &b[i];
			t2 = &b[i];
		}
	}
	node *h3 = Merge(h1, h2);
	for(node *p = h3; p; p = p->next)
		printf("%d ", p->v);
	return 0;
}

node *Merge(node *h1, node *h2){
	node *h3 = NULL, *t3 = NULL;
	while(h1 && h2){
		if(h1->v < h2->v){
			if(h3 == NULL)
				h3 = t3 = h1; 
			else{	
				t3->next = h1;
				t3 = h1;
			}
			node *x = h1;
			h1 = h1->next;
			x->next = NULL;
		} else{
			if(h3 == NULL)
				h3 = t3 = h2;
			else{
				t3->next = h2;
				t3 = h2;
			}
			node *x = h2;
			h2 = h2->next;
			x->next = NULL;
		}
	}
	while(h1){
		t3->next = h1;
		t3 = h1;
		node *x = h1;
		h1 = h1->next;
		x->next = NULL;
	}
	while(h2){
		t3->next = h2;
		t3 = h2;
		node *x = h2;
		h2 = h2->next;
		x->next = NULL;
	}
	return h3;
}
