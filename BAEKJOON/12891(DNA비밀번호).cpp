#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <string>
#include <time.h>
using namespace std;

//https://www.acmicpc.net/problem/1874


int main()
{
	int TIME = 0;


	int S, P, A, C, G, T;

	int a, c, g, t;
	int result = 0;

	cin >> S >> P;

	int num = S - P + 1;

	vector<char> DNA(S);

	for (int i = 0; i < S; i++)
	{
		cin >> DNA[i];
	}

	cin >> A >> C >> G >> T;
	a = A;
	c = C;
	g = G;
	t = T;

	for (int i = 0; i < num; i++)
	{
		//�����迭 ���鼭
		for (int j = 0; j < P ; j++)
		{
			//�����迭 �ȿ��� A,C,G,T,�����ϴ��� Ȯ��
			switch (DNA[i+j])
			{
			case 'A':
				A--;
				break;
			case 'C':
				C--;
				break;
			case 'G':
				G--;
				break;
			case 'T':
				T--;
				break;
			}
		}
		if (A <= 0 && C <= 0 && G <= 0 && T <= 0)
		{
			result++;
		}
		//�ٽ� �Է¹ް����� �ʱ�ȭ�ϱ�
		A = a;
		C = c;
		G = g;
		T = t;
	}
	std::cout << result << "\n";




}