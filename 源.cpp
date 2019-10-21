#include <stdio.h>
int main()
{
	int s;//用于数据交换。
	int F1, F2;
	long int  i, n;
	F1 = F2 = 1;
	scanf("%ld", &n);
	for (i = 1; i < n; i++)//形成一个循环。
	{
		s = F2;
		F2 = (F1 + F2) % 10007;
		F1 = s;//随着i循环，F1，F2也跟着循环。
	}
	printf("%d", F1);
	return 0;
}