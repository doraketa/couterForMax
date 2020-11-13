#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>

struct Summa
{
	int summValues = 0;
	int summCount = 0;
	bool isParity;
};

int l(int* h)
{
	if (*h % 5 != 0)
		*h = *h - 50;
	return *h;
}

int sum(int x, int y)
{
	int g = x + y;
	if (g % 2 != 0)
		g = ((g + 1) / 2);
	l(&g);
	return g;
}

int main(void)
{
	Summa sSumm;
	
	FILE* fp;
	char str[130];
	int k = 0;

	if (fopen_s(&fp, "sss.txt", "r") != 0)
	{
		printf("salo\n");
		exit(1);
		
	}
	
	while (!feof(fp))
	{
		if (fgets(str, 126, fp))
		{
			printf("%s", str);
			// = sum(k, atoi(str));
			sSumm.summValues = sum(k, atoi(str));
		}
		sSumm.summCount += 1;

		sSumm.isParity = (sSumm.summValues % 2 == 0) ? true : false;
	}

	fclose(fp);

	printf("k:%i", sSumm.summValues);
	return 0;
}