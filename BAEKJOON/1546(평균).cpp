#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;

//https://www.acmicpc.net/problem/1049


//���� �� ���񰳼� = N


int main()
{
	
	int N;
	float M;
	float res = 0.0;
	cin >> N;
	vector<float> vector(N, 0);

	//���躻 �����߿� �ִ밪 = M

	for (int i = 0; i < N; i++)
	{
		cin >> vector[i];

	}

	M = *max_element(vector.begin(), vector.end());


	for (int i = 0; i < N; i++)
	{
		vector[i] = vector[i] / M * 100;
	}

	for (int i = 0; i < N; i++)
	{
		res = res + vector[i];
	}
	res = res / N;

	cout << res << "\n";


	return 0;
}