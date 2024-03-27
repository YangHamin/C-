#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;

    for(int i=0; i<=n; i++){
        if ((n-i)%2==0){
        answer = answer +(n-i);
        }
        else 
            continue;
    }
    return answer;
}