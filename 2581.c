//
//  2581.c
//  BAEKJOON_C
//
//  Created by 최영미 on 3/10/23.
//

#include <stdio.h>
int main(){
    int M,N;
    int min=0,sum=0;
    
    scanf("%d %d", &N, &M);
    
    for(int i=N;i<=M;i++){
        
        if(i==2){   //2는 따로 해야함
            sum = sum + i;
            min = i;        //2가 제일 작은 소수임
        }
        
        for(int j=2;j<i;j++){
            
            if(i%j==0)  //소수가 아니면 바로 멈춤
                break;
            
            else if(j==i-1){    //나누어 떨어지지 않으면서
                sum = sum + i;
                if(min==0)  //처음 나오는 소수
                    min=i;
            }
        }
    }
    
    if(min!=0)  //소수가 안나오면 위에서 다 break 걸리기 때문에
        printf("%d\n%d\n", sum, min);
    else
        printf("-1\n");
    
}
//소수인가 아닌가를 먼저 판별해야함
//소수 = 2 ~ (자기자신-1) 나누어떨어지지 않는 즉, != 0
//소수이면 sum +, min>i 크기비교로 최소값 탐색
//소수가 아니면 continue
//소수가 하나도 없다면 (sum == 0) 이면 -1 출력
