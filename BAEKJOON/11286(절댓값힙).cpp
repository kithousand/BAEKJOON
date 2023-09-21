#include <iostream>
#include <queue>
using namespace std;

//https://www.acmicpc.net/problem/11286

struct compare {
	bool operator()(int o1, int o2)
	{
		int first_abs = abs(o1);
		int second_abs = abs(o2);

		if (first_abs == second_abs)
		{
			return o1 > o2;
		}
		else
		{
			return first_abs > second_abs;
		}
	}
};



int main()
{
	priority_queue<int, vector<int>, compare> myQ;

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int request;
		cin >> request;

		if (request == 0)
		{
			if (myQ.empty())
			{
				cout << "\n";
			}
			else
			{
				cout << myQ.top() << "\n";
				myQ.pop();
			}
		}
		else
		{
			myQ.push(request);
		}
	}
}