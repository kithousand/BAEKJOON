#include <iostream>
#include <queue>
using namespace std;

//https://www.acmicpc.net/problem/2164


int main()
{

	queue<int> myQueue;
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		myQueue.push(i);
	}
	while (myQueue.size() > 1)
	{
		myQueue.pop();
		myQueue.push(myQueue.front());
		myQueue.pop();
	}
	cout << myQueue.front();
}