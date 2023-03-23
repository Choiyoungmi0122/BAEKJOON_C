//
//  17952.c
//  BAEKJOON_C
//
//  Created by 최영미 on 3/22/23.
//


//stack 으로 
#include <stdio.h>
int main(){
    int n;
    int a,A[100001],T[100001], score=0,i=0;
    scanf("%d", &n);
    
    while(n!=0){
        scanf("%d", &a);
        if(a==1){
            scanf("%d %d", &A[i], &T[i]);
            T[i]--;
            printf("time : %d  ", T[i]);
            if(T[i]==0)
                score = score + A[i];
            i++;
            n--;
            T[i]--;
        }
        else{
            T[i]--;
            if(T[i]==0)
                score = score + A[i];
            n--;
        }
    }
    
    
    printf("%d", score);
}
