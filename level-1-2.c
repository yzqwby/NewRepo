#include<stdio.h>
#include<string.h>
int main(void) {
	char Date[100] = { '\0' };
	char Floor[100] = { '\0' };
	char f1[7] = { 'F','l','o','o','r','1','\0' };
	char f2[7] = { 'F','l','o','o','r','2','\0' };
	char f3[7] = { 'F','l','o','o','r','3','\0' };
	char f4[7] = { 'F','l','o','o','r','4','\0' };
	char f5[7] = { 'F','l','o','o','r','5','\0' };
	char M[7] = { 'M','o','n','d','a','y','\0' };
	char TU[8] = { 'T','u','s','e','d','a','y','\0' };
	char W[10] = { 'W','e','d','n','e','s','d','a','y','\0' };
	char TH[9] = { 'T','h','u','r','s','d','a','y','\0' };
	char F[7] = { 'F','r','i','d','a','y','\0' };
	char SA[9] = { 'S','a','t','u','r','d','a','y','\0' };
	char SU[7] = { 'S','u','n','d','a','y','\0' };
	char Seat1[5] = { '0','0','0','0','\0' };
	char Seat2[5] = { '0','0','0','0','\0' };
	char Seat3[5] = { '0','0','0','0','\0' };
	char Seat4[5] = { '0','0','0','0','\0' };
	char Seat1x[6] = { 'S','e','a','t','1','\0' };
	char Seat2x[6] = { 'S','e','a','t','2','\0' };
	char Seat3x[6] = { 'S','e','a','t','3','\0' };
	char Seat4x[6] = { 'S','e','a','t','4','\0' };
	char Seat5x[6] = { 'S','e','a','t','5','\0' };
	char Rn[12] = { 'R','e','s','e','r','v','a','t','i','o','n','\0' };
	int d = 0;
	while (d == 0) {
		scanf_s("%99s %99s", Date, (unsigned)sizeof(Date), Floor, (unsigned)sizeof(Floor));
		int m = strcmp(Date, M);
		int tu = strcmp(Date, TU);
		int w = strcmp(Date, W);
		int th = strcmp(Date, TH);
		int f = strcmp(Date, F);
		int sa = strcmp(Date, SA);
		int su = strcmp(Date, SU);
		int F1 = strcmp(Floor, f1);
		int F2 = strcmp(Floor, f2);
		int F3 = strcmp(Floor, f3);
		int F4 = strcmp(Floor, f4);
		int F5 = strcmp(Floor, f5);
		int mult1 = m * tu * w * tu * f * sa * su;
		int mult2 = F1 * F2 * F3 * F4 * F5;

		if (mult1 == 0 && mult2 == 0) {
			printf("%s\n", Seat1);
			printf("%s\n", Seat2);
			printf("%s\n", Seat3);
			printf("%s\n", Seat4);
			d = 1;
			break;
		}
		else {
			printf("Please enter the right date and the floor.\n");
		}
	}
	//预约环节
	char R[8] = { 'R','e','s','e','r','v','e','\0' };
	char r[100] = { '\0' };
	char s[100] = { '\0' };
	int ord = 0;
	char Floorx[100] = { '\0' };
	int c = 0;
	while (c == 0) {
		scanf_s("%99s %99s %99s %99s %d", r, (unsigned)sizeof(r), Date,
			(unsigned)sizeof(Date), Floorx, (unsigned)sizeof(Floorx), s, (unsigned)sizeof(s), &ord);
		int rR = strcmp(r, R);

		if (rR != 0) {
			printf("Error!Please reserve again!\n");
		}
		else {
			int s1 = strcmp(s, Seat1x);
			int s2 = strcmp(s, Seat2x);
			int s3 = strcmp(s, Seat3x);
			int s4 = strcmp(s, Seat4x);
			int yzh = ord - 1;
			if (s1 == 0) {
				c = 1;
				Seat1[yzh] = '1';
			}
			else if (s2 == 0) {
				c = 1;
				Seat2[yzh] = '1';
			}
			else if (s3 == 0) {
				c = 1;
				Seat3[yzh] = '1';
			}
			else if (s4 == 0) {
				c = 1;
				Seat4[yzh] = '1';
			}
			else {
				printf("Error!Please reserve the right seat!\n");
			}
		}
	}
	//查询预约结果
	printf("OK!\n");

	int q = 0;
	while (q == 0) {
		scanf_s("%99s %99s", Date, (unsigned)sizeof(Date), Floor, (unsigned)sizeof(Floor));
		int Ff = strcmp(Floorx, Floor);
		if (Ff == 0) {
			printf("%s\n", Seat1);
			printf("%s\n", Seat2);
			printf("%s\n", Seat3);
			printf("%s\n", Seat4);
			q = 1;
		}
		else {
			printf("error!You haven't reserved in this floor!\n");
		}
	}
	char rN[100] = { '\0' };
	scanf_s("%99s", rN, (unsigned)sizeof(rN));
	int rn = strcmp(rN, Rn);
	if (rn == 0)
		printf("%s %s %s %d\n", Date, Floorx, s, ord);
	return 0;
}