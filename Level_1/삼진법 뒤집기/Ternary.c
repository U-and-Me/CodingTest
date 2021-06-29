#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int arr[100] = {0, };
    int position = 99;
    int th = 1;
    
    while(n){
        arr[position--] = n % 3;
        n /= 3;
    }
    for(int i = position + 1; i < sizeof(arr) / sizeof(int); i++){
        answer += arr[i] * th;
        th *= 3;
    }
    return answer;
}
