//
//  10773.c
//  BAEKJOON_C
//
//  Created by 최영미 on 2/11/23.
//

int sum, num[10000], count,i;
#include <stdio.h>
int main(){
    int k;
    scanf("%d", &k);
    
    while(count !=k){
        scanf("%d", &num[i]);
        
        if(num[i]!=0)
            sum = sum + num[i];
        else{
            sum = sum - num[i-1];
            i=i-2;
        }
        count++;
        i++;;
    }
    
    printf("%d\n", sum);
}
