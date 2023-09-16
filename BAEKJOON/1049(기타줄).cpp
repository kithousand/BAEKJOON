#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;

//https://www.acmicpc.net/problem/1049

int main()
{
	/*
	필요한 기타줄 N
	  브랜드 수 M
	  6개패키지 가격, 낱개가격
	*/

	int N, M;
	cin >> N >> M;

	vector<vector<int>> price(M, vector<int>(2));

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> price[i][j];
		}
	}


	int min_pakPrice = price[0][0]; // 첫 번째 브랜드의 패키지 가격으로 초기화
	int min_natPrice = price[0][1];  // 첫 번째 브랜드의 낱개 가격으로 초기화

	for (int i = 1; i < M; i++) 
	{
		min_pakPrice = min(min_pakPrice, price[i][0]);
		min_natPrice = min(min_natPrice, price[i][1]);
	}

	
	int total;
	
	//낱개로만 구매해야하는경우
	if (N < 6)
	{
		total = min_natPrice * N;
		cout << total << "\n";
	}

	//패키지를 무조건 포함해야하는경우
	else
	{
		if (N % 6 != 0)
		{
			min_natPrice = min_natPrice * (N % 6);
			if (min_pakPrice <= min_natPrice)
			{
				min_pakPrice = min_pakPrice * (N / 6 + 1);
				total = min_pakPrice;
			}
			else 
			{
				min_pakPrice = min_pakPrice * (N / 6);
				total = min_pakPrice + min_natPrice;
			}
			cout << total << "\n";
		}
		else
		{
			total = min_pakPrice * (N / 6);
			cout << total << "\n";
		}
	}

	return 0;
}