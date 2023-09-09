#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>

/*
	문제링크 : https://www.acmicpc.net/problem/1009
*/

// pow함수로 접근을했지만 아니였다..
// 내자신에게 많은것을깨닫게해주는..
// 열심히해야지..

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