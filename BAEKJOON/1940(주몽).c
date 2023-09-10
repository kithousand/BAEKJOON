#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>


//https://www.acmicpc.net/problem/1940

/*첫째 줄에는 재료의 개수 N(1 ≤ N ≤ 15, 000)이 주어진다.
두 번째 줄에는 갑옷을 만드는데 필요한 수 M(1 ≤ M ≤ 10, 000, 000) 주어진다.
그리고 마지막으로 셋째 줄에는 N개의 재료들이 가진 고유한 번호들이 공백을 사이에 두고 주어진다.
고유한 번호는 100, 000보다 작거나 같은 자연수이다.*/

//배열요소의 합을 구해서 m과 같은지 확인하는 문제

//예제입력 num, val, 배열요소들


// j 의 조건을 1로 초기화 했어서 중복된 값이 한번더 count를 증가시킴 
// 반복문의 조건식을 철저히 해야한다는것을 깨닫게됨


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
		for (int j = i+1;  j<num; j++)   // j 의 조건을 1로 초기화 했어서 중복된 값이 한번더 count를 증가시킴 
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