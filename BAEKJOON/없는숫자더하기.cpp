#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int cnt = 0;

    sort(numbers.begin(), numbers.end());

    // 0, 1, 2, 3, 4, 6, 7, 8
    int i = 0;
    while (cnt < 10)
    {
        if (numbers[i] == cnt)
        {
            i++;
            cnt++;
        }
        else
        {
            //cnt = 5 numbers[i] = 6 ÀÏ¶§,
            answer = answer + cnt;
            cnt++;
        }
    }

    return answer;
}