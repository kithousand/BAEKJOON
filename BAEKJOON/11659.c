#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>


//�� n���� �־����� ��, k��° ������ h��° ������ ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.//

//ù° �ٿ� ���� ���� n�� ���� ���ؾ� �ϴ� Ƚ�� m�� �־�����. 
//��° �ٿ��� n���� ���� �־�����. 
//���� 1,000���� �۰ų� ���� �ڿ����̴�. 
//��° �ٺ��� m���� �ٿ��� ���� ���ؾ� �ϴ� ���� k�� h�� �־�����.
//�� m���� �ٿ� �Է����� �־��� k��° ������ h��° ������ ���� ����Ѵ�.



int main()
 {	
	//N = �迭 ����� ����, M = ����� Ƚ��
	
	//�������� �̿����� ���� ����
	if (0) {
		int n = 0;
		int m = 0;
		int k = 0;
		int h = 0;

		scanf("%d %d", &n, &m);

		if (1 <= n && n <= 100000 && 1 <= m && m <= 100000)
		{
			int* array;
			int* result;

			array = (int*)malloc(sizeof(int) * n);
			result = (int*)malloc(sizeof(int) * m);

			for (int i = 0; i < n; i++)
			{
				scanf("%d", &array[i]);
			}


			for (int i = 0; i < m; i++)
			{
				int calc = 0;
				scanf("%d %d", &k, &h);

				while (k <= h)
				{
					calc = calc + array[k - 1];
					k++;
				}
				result[i] = calc;
			}

			for (int i = 0; i < m; i++)
			{
				printf("%d\n", result[i]);
			}


			free(array);
			free(result);
		}
	}

	
	//�������� ����� ����
	if(1)
	{
		int n = 0;
		int m = 0;
		int k = 0;
		int h = 0;

		scanf("%d %d", &n, &m);

		if (1 <= n && n <= 100000 && 1 <= m && m <= 100000)
		{
			int* array;
			int* prefixSum;
			int* result;

			array = (int*)malloc(sizeof(int) * n);
			result = (int*)malloc(sizeof(int) * m);
			prefixSum = (int*)malloc(sizeof(int) * (n + 1));

			for (int i = 0; i < n; i++)
			{
				scanf("%d", &array[i]);
			}

			//������ �����
			//�������� ù��° ��Ҹ� 0���� ����� (prefixSum[0]=0)
			//array[5] = {5,4,3,2,1} �̶��
			//prefixSum[6] = {0,5,9,12,14,15}
			prefixSum[0] = 0;
			for (int i = 1; i <= n; i++)
			{
				prefixSum[i] = prefixSum[i - 1] + array[i - 1];
			}

			
			//�������� ���� ���
			//����Ѱ��� ���ʷ� result�� �ִ´�
			//k���� h������ ���� ���ϰ�����ϱ�
			//�������� h��°�� - �������� k-1��
			for (int i = 0; i < m; i++)
			{
				scanf("%d %d", &k, &h);
				result[i] = prefixSum[h] - prefixSum[k - 1];
			}

			for (int i = 0; i < m; i++)
			{
				printf("%d\n", result[i]);
			}


			free(array);
			free(result);
			free(prefixSum);
		}
	}
	return 0;
}