#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;

//https://www.acmicpc.net/problem/1049

int main()
{
	/*
	�ʿ��� ��Ÿ�� N
	  �귣�� �� M
	  6����Ű�� ����, ��������
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


	int min_pakPrice = price[0][0]; // ù ��° �귣���� ��Ű�� �������� �ʱ�ȭ
	int min_natPrice = price[0][1];  // ù ��° �귣���� ���� �������� �ʱ�ȭ

	for (int i = 1; i < M; i++) 
	{
		min_pakPrice = min(min_pakPrice, price[i][0]);
		min_natPrice = min(min_natPrice, price[i][1]);
	}

	
	int total;
	
	//�����θ� �����ؾ��ϴ°��
	if (N < 6)
	{
		total = min_natPrice * N;
		cout << total << "\n";
	}

	//��Ű���� ������ �����ؾ��ϴ°��
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