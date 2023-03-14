//
//  2581.c
//  BAEKJOON_C
//
//  Created by 최영미 on 3/10/23.
//

#include <stdio.h>

int main(){
    int n,m, sum=0, mm[10000]={0, },count=0;;
    scanf("%d %d", &n, &m);
    
    int min = n>m?m:n;
    int max = n<m?m:n;
    
    for(int i=min;i<max;i++){
        sum = sum + i;
        for(int j=2;j<i;j++)
        {
            if(i%j ==0){
                sum = sum - i;
                break;
            }
        }
    }
    for(int i=min;i<=max;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){ //소수아닌거 개수 + 어떤 숫자가 소수인지
                mm[i]++;
            }
        }
    }
    
    
    for(int i =min;i<=max;i++){
        if(mm[i] != 0){
            printf("%d ", i+1);
            break;
        }
    }
    
    
    printf("\n%d\n", sum);

}

//소수인가 아닌가를 먼저 판별해야함
//소수 = 2 ~ (자기자신-1) 나누어떨어지지 않는 즉, != 0
//소수이면 sum +, min>i 크기비교로 최소값 탐색
//소수가 아니면 continue
//소수가 하나도 없다면 (sum == 0) 이면 -1 출력
