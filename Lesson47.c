#include<stdio.h>
#include<stdlib.h>

void input(int *n, int *m, int *a, int *b) {
	printf("Enter number elements of array a[]:\n");
	scanf("%d", &*n);
	printf("Enter number elements of array b[]:\n");
	scanf("%d", &*m);
	printf("Enter elements of array a[]:\n");
	for(int i = 0; i < *n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}	
	printf("Enter elements of array b[]:\n");
	for(int i = 0; i < *m; i++) {
		printf("b[%d] = ", i);
		scanf("%d", &b[i]);
	}
}

void arrage(int n, int m, int *a, int *b, int *c) {
	int i = 0;
	int j = 0;
	int cnt = 0;
	while(i < m && j < m) {
		if(a[i] <= b[j]) {
			c[cnt++] = a[i];
			i++; 
		}
		else {
			c[cnt++] = b[j++];
			j++;
		}
	}
	while(i < n) {
		c[cnt++] = a[i++];
	}
	while(j < m) {
		c[cnt++] = b[j++];
	}
}

void output(int n, int m, int *c) {
	printf("The array c after mixing a[] and b[]:\n");
	for(int i = 0; i < (n+m); i++) {
		printf("c[%d] = %d\n", i, c[i]);
	}
}

int main() {
	int n, m;
	int *a = (int*)malloc(n * sizeof(a));
	int *b = (int*)malloc(n * sizeof(b));
	int *c = (int*)malloc((n+m) * sizeof(c));
	
	input(&n, &m, a, b);
	arrage(n, m, a, b, c);
	output(n, m, c);
	
	free(a);
	free(b);
	free(c);
	return 0;
}
