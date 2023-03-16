//
//  2960.c
//  BAEKJOON_C
//
//  Created by 최영미 on 3/16/23.
//

#include <stdio.h>
int main(){
    int N, K, num[1000]={0,}, count=0;
    scanf("%d %d", &N, &K);
    
    for(int i = 2;i<=N;i++)     //2~N 값 넣기 2번째 인덱스에서 부터 순서대로 채움
        num[i] = i;
   
    for(int c = 2;c<=N;c++){
        if(num[c] != 0){
            num[c] =0;
            count++;
            if(count==K){
                printf("%d\n", c);
                break;
            }
            
            
            for(int j=2;j<=N/c;j++){
                if(num[c*j]!=0){
                    num[c*j]=0;
                    count++;
                    if(count==K){
                        printf("%d\n", c*j);
                        break;
                    }
                }
            }
            if(count==K)
                break;
            
        }
    }
    
}
