#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

//https://www.acmicpc.net/problem/1874


int main()
{

	
		int S, P, A, C, G, T;

		cin >> S >> P;
		vector<char> DNA(S);
		vector<int> countA(S + 1, 0);
		vector<int> countC(S + 1, 0);
		vector<int> countG(S + 1, 0);
		vector<int> countT(S + 1, 0);

		for (int i = 0; i < S; i++) {
			cin >> DNA[i];
			countA[i + 1] = countA[i] + (DNA[i] == 'A');
			countC[i + 1] = countC[i] + (DNA[i] == 'C');
			countG[i + 1] = countG[i] + (DNA[i] == 'G');
			countT[i + 1] = countT[i] + (DNA[i] == 'T');
		}

		cin >> A >> C >> G >> T;

		int result = 0;

		for (int i = 0; i < S - P + 1; i++) {
			int subA = countA[i + P] - countA[i];
			int subC = countC[i + P] - countC[i];
			int subG = countG[i + P] - countG[i];
			int subT = countT[i + P] - countT[i];

			if (subA >= A && subC >= C && subG >= G && subT >= T) {
				result++;
			}
		}

		cout << result << "\n";

		return 0;
	

	//ó������§�ڵ�
	//���� ��� �迭�� ��� Ȯ���ϱ⶧���� 
	//�ð����⵵�� �þ��
	//�����̵����������� Ȱ���Ͽ�
	//��ü DNA ������ �� ���� ��ĵ�ϸ鼭 A, C, G, T�� ���� ������ ���մϴ�.�̸� ���� �迭�� �����մϴ�.
	//�׷� ����, �κ� ������ �����̵� ������ ����� ����Ͽ� �̵��ϸ鼭 �ش� �κ� ���� ���� A, C, G, T ������ ������ ����մϴ�.
	//�� �κ� ������ ���� A, C, G, T�� ������ ������ ����� �� �����Ƿ�, �־��� A, C, G, T ���� ���Ͽ� �����ϴ� �κ� ������ ã���ϴ�.
	/*
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
	*/
}