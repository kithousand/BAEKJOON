#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	int N;
	cin >> N;

	vector<int> vector(N, 0);
	
	for (int i = 0; i < vector.size(); i++)
	{
		cin >> vector[i];
	}

	sort(vector.begin(), vector.end());

	for (int i = 0; i < vector.size(); i++)
	{
		cout << vector[i] << "\n";
	}
	
	return 0;
}


