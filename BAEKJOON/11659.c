#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>


//수 n개가 주어졌을 때, k번째 수부터 h번째 수까지 합을 구하는 프로그램을 작성하시오.//

//첫째 줄에 수의 개수 n과 합을 구해야 하는 횟수 m이 주어진다. 
//둘째 줄에는 n개의 수가 주어진다. 
//수는 1,000보다 작거나 같은 자연수이다. 
//셋째 줄부터 m개의 줄에는 합을 구해야 하는 구간 k와 h가 주어진다.
//총 m개의 줄에 입력으로 주어진 k번째 수부터 h번째 수까지 합을 출력한다.



int main()
 {	
	//N = 배열 요소의 개수, M = 계산할 횟수
	
	//누적합을 이용하지 않은 버전
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

	
	//누적합을 사용한 버전
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

			//누적합 만들기
			//누적합은 첫번째 요소를 0으로 만든다 (prefixSum[0]=0)
			//array[5] = {5,4,3,2,1} 이라면
			//prefixSum[6] = {0,5,9,12,14,15}
			prefixSum[0] = 0;
			for (int i = 1; i <= n; i++)
			{
				prefixSum[i] = prefixSum[i - 1] + array[i - 1];
			}

			
			//누적합을 통한 계산
			//계산한값을 차례로 result에 넣는다
			//k부터 h까지의 합을 구하고싶으니까
			//누적합의 h번째값 - 누적합의 k-1값
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