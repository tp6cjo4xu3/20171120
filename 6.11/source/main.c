#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int main(void)
{
	int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	int pass = 1;
	int b = 1, n, m = 0;
	size_t i, j;
	int hold;

	puts("Data items in original order");

	for (i = 0; i < SIZE; ++i)
	{
		printf("%3d", a[i]);
	}
	printf("\n以下是流程:			執行下一個程式需要的次數  此程式判斷的次數\n");

	while (pass != m)
	{
		for (j = 0; j < SIZE; ++j)
		{
			printf("%3d", a[j]);
		}
		n = 0;
		m = 0;
		for (i = 0; i < SIZE - b; ++i)
		{

			n += 1;
			if (a[i]>a[i + 1])
			{
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
				m += 1;
			}
		}
		printf("%15d", m);
		printf("%18d\n", n);
		pass++;
		b += 1;
		if (m == 0)
		{
			pass = m;
		}





	}
	puts("\n Data items in ascending order");

	for (i = 0; i < SIZE; ++i)
	{
		printf("%3d", a[i]);
	}

	puts("");

	system("pause");

}