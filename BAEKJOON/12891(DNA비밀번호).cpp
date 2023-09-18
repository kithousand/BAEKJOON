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
	

	//처음내가짠코드
	//작은 모든 배열을 계속 확인하기때문에 
	//시간복잡도가 늘어난다
	//슬라이딩윈도우기법을 활용하여
	//전체 DNA 서열을 한 번만 스캔하면서 A, C, G, T의 누적 개수를 구합니다.이를 누적 배열로 저장합니다.
	//그런 다음, 부분 서열을 슬라이딩 윈도우 기법을 사용하여 이동하면서 해당 부분 서열 내의 A, C, G, T 개수를 빠르게 계산합니다.
	//각 부분 서열에 대해 A, C, G, T의 개수를 빠르게 계산할 수 있으므로, 주어진 A, C, G, T 값과 비교하여 만족하는 부분 서열을 찾습니다.
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
		//작은배열 돌면서
		for (int j = 0; j < P ; j++)
		{
			//작은배열 안에서 A,C,G,T,만족하는지 확인
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
		//다시 입력받값으로 초기화하기
		A = a;
		C = c;
		G = g;
		T = t;
	}
	std::cout << result << "\n";
	*/
}