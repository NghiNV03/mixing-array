#include<stdio.h>

int main() {
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	float max = -1e9-1;
	if(a >= max) {
		max = a;
	}
	if(b >= max) {
		max = b;
	}
	if(c >= max) {
		max = c;
	}
	printf("%.2f", max);
}
