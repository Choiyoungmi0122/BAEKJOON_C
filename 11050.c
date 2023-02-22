//
//  11050.c
//  BAEKJOON_C
//
//  Created by 최영미 on 2/22/23.
//

#include <stdio.h>
int factorial(int num){
    int result =1;
    for(int i =1;i<=num;i++)
        result = result *i;
    return result;
}
int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    
    int A = factorial(n);
    int B = factorial(k);
    int C = factorial(n-k);
    
    int result = A/(B*C);
    printf("%d\n", result);
    
}
