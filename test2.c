#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[6] = { 'R','o','b','o','t','\0' };
	char b[4] = { 's','d','f','\0' };
	char c[4] = { 's', 'a', 'd', '\0' };
	char d[4] = { 'e','f','f','\0' };
	char x[100] = { '\0' };
	char e[3] = { 'R','L','\0' };
	char f[4] = { 'v','d','v','\0' };
	char g[6] = { 'd','f','d','s','v','\0' };
	char h[5] = { 'v','s','a','d','\0' };
	char quit[5] = { 'q','u','i','t','\0' };
	int y = 0;
	do {
		printf("please enter here:");
		scanf_s("%99s", x, (unsigned)sizeof(x));
		int i = strcmp(a, x);
		int j = strcmp(b, x);
		int k = strcmp(c, x);
		int l = strcmp(d, x);
		int m = strcmp(quit, x);
		if (i == 0) {
			printf("%s\n", e);
		}
		else if (j == 0) {
			printf("%s\n", f);
		}
		else if (k == 0) {
			printf("%s\n", g);
		}
		else if (l == 0) {
			printf("%s\n", h);
		}
		else if (m == 0) {
			y = 1;
			break;
		}
		else {
			printf("error\n");
		}
	}while(y==0);
	return 0;
}