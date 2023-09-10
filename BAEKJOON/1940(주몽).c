#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>


//https://www.acmicpc.net/problem/1940

/*ù° �ٿ��� ����� ���� N(1 �� N �� 15, 000)�� �־�����.
�� ��° �ٿ��� ������ ����µ� �ʿ��� �� M(1 �� M �� 10, 000, 000) �־�����.
�׸��� ���������� ��° �ٿ��� N���� ������ ���� ������ ��ȣ���� ������ ���̿� �ΰ� �־�����.
������ ��ȣ�� 100, 000���� �۰ų� ���� �ڿ����̴�.*/

//�迭����� ���� ���ؼ� m�� ������ Ȯ���ϴ� ����

//�����Է� num, val, �迭��ҵ�


// j �� ������ 1�� �ʱ�ȭ �߾ �ߺ��� ���� �ѹ��� count�� ������Ŵ 
// �ݺ����� ���ǽ��� ö���� �ؾ��Ѵٴ°��� ���ݰԵ�


int main()
{
	int num = 0;
	int val = 0;


	scanf("%d %d", &num,&val);

	int* array;
	array = (int*)malloc(sizeof(int) * num);

	
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &array[i]);
	}

	int count = 0;
   
	for (int i = 0; i < num-1; i++)
	{
		for (int j = i+1;  j<num; j++)   // j �� ������ 1�� �ʱ�ȭ �߾ �ߺ��� ���� �ѹ��� count�� ������Ŵ 
		{	
			if (array[i] + array[j] == val) //{2,7,4,1,5,3}
			{
				count++;
			}
			
		}	
	}

	free(array);

	printf("%d", count);
	
	return 0;
}