#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;

//https://www.acmicpc.net/problem/2839

#define SMALL 3
#define LARGE 5

int main()
{
	int N = 11;
	//cin >> N;

	//if (N % LARGE && N % SMALL != 0)
	//{
	//	cout << -1 << "\n";
	//	return -1;
	//}

	int o, sam;

	o = N / LARGE;

	sam = (N % LARGE) / SMALL;

	int res = o + sam;

	cout << res << "\n";

	
}