#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;

//https://www.acmicpc.net/problem/1049

#define SET_COUNT 6

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

	int min_pakPrice = price[0][0]; 
	int min_natPrice = price[0][1];  

	for (int i = 1; i < M; i++)
	{
		min_pakPrice = min(min_pakPrice, price[i][0]);
		min_natPrice = min(min_natPrice, price[i][1]);
	}

	int set_total;
	int nat_total;
	int setnat_total;
	
	//세트로만 사는경우, 낱개로만 사는경우, 세트+낱개로사는경우
	
	//세트로만 사는경우
	if (N % SET_COUNT != 0)
	{
		set_total = min_pakPrice* (N / SET_COUNT + 1);
	}
	else 
	{
		set_total = min_pakPrice* (N / SET_COUNT);
	}
	
	//낱개로만 사는경우
	nat_total = min_natPrice * N;

	//세트+낱개로 사는경우
	setnat_total = (min_pakPrice * (N / SET_COUNT)) + (min_natPrice * (N % SET_COUNT));

	//3가지경우중에 제일 싼것을 출력하자!
	int total = min({ set_total, nat_total, setnat_total });

	cout << total << "\n";
	
	return 0;
}


//처음에 짰던 코드
//조건을 나누는 접근이 잘못되었다
//유연한 사고의 필요성을 깨달음
//항상 여러방면으로 생각해보자
/*
int total;


if (N < 6)
{
	total = min_natPrice * N;
	cout << total << "\n";
}

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
}*/