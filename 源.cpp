#include <stdio.h>
int main()
{
	int s;//�������ݽ�����
	int F1, F2;
	long int  i, n;
	F1 = F2 = 1;
	scanf("%ld", &n);
	for (i = 1; i < n; i++)//�γ�һ��ѭ����
	{
		s = F2;
		F2 = (F1 + F2) % 10007;
		F1 = s;//����iѭ����F1��F2Ҳ����ѭ����
	}
	printf("%d", F1);
	return 0;
}