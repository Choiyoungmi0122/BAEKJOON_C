//
//  10773.c
//  BAEKJOON_C
//
//  Created by 최영미 on 2/11/23.
//

int sum, num[10000],i;
#include <stdio.h>
int main(){
    int k;
    scanf("%d", &k);
    
    for(int count =0;count<k;count++){
        scanf("%d", &num[count]);
        
        if(num[count]!=0)
            sum = sum + num[count];
        else{
            sum = sum - num[i-1];
            i=i-2;
        }
        i++;
    }
  
    
    printf("%d\n", sum);
}
