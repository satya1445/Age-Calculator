#include <stdio.h>
int main()
{
	int d1, m1, y1, d2, m2, y2, r1, r2, r3;
	// clrscr();
	printf("=========================================================== \n");
	printf("                        Age Calculator                      \n");
	printf("=========================================================== \n");
	printf("Enter your Birthday Day - ");
	scanf("%d", &d1);
	printf("Enter your Birthday Month - ");
	scanf("%d", &m1);
	printf("Enter your Birthday Year - ");
	scanf("%d", &y1);

	printf("Enter your Current Day - ");
	scanf("%d", &d2);
	printf("Enter your Current Month - ");
	scanf("%d", &m2);
	printf("Enter your Current Year -");
	scanf("%d", &y2);

	if ((d1 > 31 || d1 < 1) || (d2 > 31 || d2 < 1) || (m1 < 1 || m1 > 12) || (m2 < 1 || m2 > 12) || (y1 < 0 || y2 < 0))
	{
		printf("Invalid Input!");
	}
	else
	{
		r3 = y2 - y1;
		if (d2 >= d1)
		{
			r1 = d2 - d1;
		}
		else
		{
			m2 = m2 - 1;
			d2 = d2 + 30;
			r1 = d2 - d1;
		}
		if (m2 >= m1)
		{
			r2 = m2 - m1;
		}
		else
		{
			r3 = r3 - 1;
			m2 = m2 + 12;
			r2 = m2 - m1;
		}
		printf("Your Age is %d day %d month %d year", r1, r2, r3);
	}
}