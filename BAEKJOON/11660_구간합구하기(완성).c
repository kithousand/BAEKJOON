#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
int main() 
{
	//문제 링크 : https://www.acmicpc.net/problem/11660
	

	///////////////////////////////////////////////
	/*int array[5] = {1,2,3,4,5};
	int prefixsum[5] = { 0, };

	int i = 2;
	int j = 4;
	

	//누적합배열만들기
	prefixsum[0] = array[0];
	for (int i = 1; i < 5; i++)
	{
		prefixsum[i] = array[i] + prefixsum[i-1];
	}


	//배열index는 0부터시작하지만 i,j는 1부터 시작한다
	int result;
	result = prefixsum[j - 1] - prefixsum[i - 2];*/
	
/////////////////////////////////////////////////////
	
	
	
	int n, m;
	scanf("%d %d", &n, &m);

	if (n <= 1024 && n >= 1 && m <= 100000 && m >= 1)
	{
		//input 배열 동적메모리 할당
		//행
		int** input_array = (int**)malloc(sizeof(int) * n);
		if (input_array == NULL)
		{
			printf("메모리 할당 오류\n");
			return 1;
		}

		//열
		for (int i = 0; i < n; i++)
		{
			input_array[i] = (int*)malloc(sizeof(int) * n);
			if (input_array[i] == NULL)
			{
				printf("메모리 할당 오류\n");
				return 1;
			}
		}

		//2차원배열에 입력받기
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				scanf("%d", &input_array[i][j]);
			}
		}

		//누적합배열 동적메모리 할당하고 만들기
		int** prefixSum = (int**)malloc(sizeof(int) * n);
		if (prefixSum == NULL)
		{
			printf("메모리 할당 오류\n");
			return 1;
		}

		for (int i = 0; i < n; i++)
		{
			prefixSum[i] = (int*)malloc(sizeof(int) * n);
			if (prefixSum[i] == NULL) {
				printf("메모리 할당 오류\n");
				return 1;
			}
		}

		for (int i = 0; i < n; i++)
		{
			prefixSum[i][0] = input_array[i][0];
			for (int j = 1; j < n; j++)
			{
				prefixSum[i][j] = input_array[i][j] + prefixSum[i][j - 1];
			}
		}

		
		//좌표값 입력받고 계산하기 
		for (int i = 0; i < m; i++)
		{
			int result = 0;
			int x1, x2, y1, y2;

			scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

			for (int i = x1; i <= x2; i++)
			{
				if (y1 == 1)
				{
					result += prefixSum[i - 1][y2 - 1];
				}
				else
				{
					result += prefixSum[i - 1][y2 - 1] - prefixSum[i - 1][y1 - 2];
				}
			}
			printf("%d\n", result);
		}
	}

	return 0;
	
	//동적 메모리 해제시 프로그램 끝날때 오류발생함 ㅠㅠ
	//for (int i = 0; i < n; i++)
	//{
	//	free(prefixSum[i]);
	//	free(input_array[i]);
	//}
	//free(prefixSum);
	//free(input_array);
	
	//return 0;
}

