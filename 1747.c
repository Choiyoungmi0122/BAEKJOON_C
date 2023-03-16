//
//  1747.c
//  BAEKJOON_C
//
//  Created by 최영미 on 3/16/23.
//


#include <stdio.h>


int main(void)
{
    int a[10000] = { 0 };    // 0 ~ 200
    int i, j;
    
    int N;
    scanf("%d", &N);
    
    for(i = 2; i <= ; i++) {    // 최대값의 제곱근까지 반복
        if(a[i] == 0) {        //i가 소수이면
            for(j = 2; i * j < SIZE; j++) {    // 자신을 제외한 i의 배수 제거
                a[i * j] = 1;
            }
        }
    }

    for(i = 2; i < SIZE; i++) {
        if(a[i] == 0) printf("%d\n", i);
    }

    return 0;
}
