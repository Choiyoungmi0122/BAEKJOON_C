//
//  10870.c
//  BAEKJOON_C
//
//  Created by 최영미 on 2/9/23.
//

#include <stdio.h>

int point, num[21],count;

int main(){
    int n;  //20이하의 양의 정수 or 0
    scanf("%d", &n);
    
    num[0] = 0;
    num[1] = 1;
    
    if(n==0){
        point = 0;
    }
    else if (n==1){
        point = 1;
    }
    
    else if (n>=2){
        for(count =2;count<=n;count++){
            num[count] = num[count-1] + num[count-2];
            point = count;
        }
    }
    
    printf("%d\n", num[point]);
}
