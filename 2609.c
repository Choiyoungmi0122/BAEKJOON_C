//
//  2609.c
//  BAEKJOON_C
//
//  Created by 최영미 on 3/3/23.
//

#include <stdio.h>
int main(){
    int a, b, min=0, measure=0, drainage=0;
    scanf("%d %d", &a, &b);
    
    min = a<b?a:b;
    for(int i=1;i<=min;i++){
        if(a % i == 0 && b % i == 0)
            measure = i;
    }
    
    for(int i=min;i<=a*b;i++){
        if(i%a == 0 && i%b==0){
            drainage = i;
            break;
        }
    }
    
    printf("%d\n%d\n", measure, drainage);
}
