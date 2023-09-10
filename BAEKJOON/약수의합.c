#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//https://school.programmers.co.kr/learn/courses/30/lessons/12928?language=c

//약수구하고 약수를 모두 더하는 프로그램 작성


int solution(int n);

int main() {
 

    int a = solution(4);

    printf("%d\n", a);

    return 0;
}


int solution(int n) {
    int answer = 0;
    int* array;
    array = (int*)malloc(sizeof(int) * 100);

    int sqrt_num = sqrt(n);
    int index = 0;

    for (int i = 1; i <= sqrt_num; i++)
    {   
        
        if (n % i == 0)
        {
            array[index] = i;
            index++;
            int divisor = n / i;
            if (divisor != i)
            {
                array[index]=divisor;
                index++;
            }
        }
   
    }

    for (int i = 0; i < index; i++)
    {
        answer += array[i];
    }

    free(array);

    return answer;
}