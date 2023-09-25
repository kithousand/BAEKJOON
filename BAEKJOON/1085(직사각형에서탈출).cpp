#include <iostream>
#include <algorithm>
using namespace std;

//https://www.acmicpc.net/problem/1085


int main(void)
{
	int x, y, w, h;
	
	cin >> x >> y >> w >> h;

	h = h - y;
	w = w - x;

	int r = min({ h,w });
	int rr = min({ x,y });

	if (r > rr)
	{
		cout << rr << "\n";
	}
	else
	{
		cout << r << "\n";
	}
	
	return 0;
}