//
//  10828.c
//  BAEKJOON_C
//
//  Created by 최영미 on 2/14/23.
//

#include <stdio.h>
int main(){
    char *key[5] = {"push", "pop", "size", "empty", "top"};
    int k,n;
    char s1[6];
    scanf("%d", &k);
    
    for(int i=0;i<k;i++){
        scanf("%s", s1);
        if(s1 == key[0])
            scanf("%d", &n);
    }
    
    for(int i=0;i<k;i++){
        printf("%s", s1);
    }
}
