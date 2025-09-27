#include<stdio.h>
#include<string.h>
int main(void)
{
	char x[5] = { '\0' };
	char y[5] = { '2','0','0','2','\0' };
	char z[5] = { 'D','i','a','n','\0' };
	char w[5] = { 'q','u','i','t' ,'\0' };
	int q = 0;
	
	do {
		printf("«Î ‰»Î:");
		scanf_s("%99s", x, (unsigned)sizeof(x));
	    int result1 = strcmp(x, z);
	    int result2 = strcmp(x, w);

		if (result1 == 0) {
			printf("%s\n", y);
		}
		else if (result2 == 0) {
			q = 1;
			break;
		}
		else {
			printf("error\n");
		}
	} while (q==0);
	return 0;

}