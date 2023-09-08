#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	//N = �迭 ����� ����, M = ����� Ƚ��

	
	
		int n, m;
		
		
		scanf("%d %d", &n, &m);
		
		int* array;
		int* result;
		array = (int*)malloc(sizeof(int) * n * n);
		result = (int*)malloc(sizeof(int) * m);

		if (array == NULL || result == NULL) {
			// �޸� �Ҵ� ���и� ó���մϴ�.
			printf("�޸� �Ҵ� ����\n");
			return 1; // ���� �ڵ�� ���α׷� ����
		}
		
		int height = n;
		
		//1�����迭�� �Է¹ޱ�
		for (int i = 0; i < n*n; i++)
		{
			scanf("%d", &array[i]);
		}


		//�����չ迭 ����
		int* prefixSum;
		prefixSum = (int*)malloc(sizeof(int) * (n * n + 1));

		if (prefixSum == NULL) {
			// �޸� �Ҵ� ���и� ó���մϴ�.
			printf("�޸� �Ҵ� ����\n");
			
			return 1; // ���� �ڵ�� ���α׷� ����
			prefixSum[0] = 0;
		}

		for (int i = 1; i <= n * n; i++)
		{
			prefixSum[i] = prefixSum[i - 1] + array[i - 1];
		}
		printf("%d", sizeof(prefixSum));




		//�����չ迭�� ���� ���
		for (int i = 0; i < m; i++)
		{
			int clac = 0;
			int x1, x2, y1, y2;
			int index_1 = 0;
			int index_2 = 0;
			scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

			//�ε������� ��ǥ������ ����
			index_1 = (x1-1 * height) + (y1-1);
			index_2 = (x2 * height) + (y2-1);

			result[i] = prefixSum[index_2] - prefixSum[index_1 - 1];
		}

		for (int i = 0; i < m; i++)
		{
			printf("%d\n", result[i]);
		}

		free(prefixSum);
		free(array);
		free(result);
		


	return 0;
}