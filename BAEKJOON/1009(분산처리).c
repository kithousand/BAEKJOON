#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>

/*
	������ũ : https://www.acmicpc.net/problem/1009
*/

// pow�Լ��� ������������ �ƴϿ���..
// ���ڽſ��� �����������ݰ����ִ�..
// �������ؾ���..

int main()
{
	int num = 0;
	
	scanf("%d", &num);

	
	for (int i = 0; i < num; i++)
	{
		int a, b;
		
		scanf("%d %d", &a, &b);
		
		int result = a;
		
		for (int j = 1; j < b ; j++)
		{
			result = (result * a) % 10;
		}

		if(result % 10 == 0)
		{
			printf("%d\n", 10);
		}
		else
		{
			printf("%d\n", result % 10);
		}
	}
	
	return 0;
}