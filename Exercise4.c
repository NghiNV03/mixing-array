#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

void output(char c[]) {
	int cnt[26] = {0};
	for(int i = 0; i < strlen(c); i++) {
		cnt[c[i] - 'a']++;
	}
	for(int i = 0; i < strlen(c); i++) {
		if(cnt[c[i]-'a'] != 0) {
			printf("%c %d\n", c[i], cnt[c[i] - 'a']);
			cnt[c[i] - 'a'] = 0;
		}
	}
}

int main() {
	char c[1005];
	fgets(c, 1005, stdin);
	output(c);
	return 0;
}
