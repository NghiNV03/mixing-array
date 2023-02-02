#include<stdio.h>

int main() {
	int d, y;
	input:
	scanf("%d %d", &d, &y);
	switch(d) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31 day");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30 day");
			break;
		case 2:
			if(y % 4 == 0) {
				printf("29 day");
			}
			else {
				printf("28 day");
			}
			break;
		default: 
			printf("Thang khong hop le\n");
			goto input;
	}
	return 0;
}
