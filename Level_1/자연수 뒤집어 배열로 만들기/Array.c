#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    int* answer = (int*)malloc(sizeof(int)*11);
    int index = 0;
    while(n){
        answer[index++] = (int)(n % 10);
        n /= 10;
    }
    return answer;
}
