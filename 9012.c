//
//  9012.c
//  BAEKJOON_C
//
//  Created by 최영미 on 3/2/23.
//

#include <stdio.h>
#include <string.h>

int fun(char str[], int size[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){\
        if(str[i] == '(')
            count++;
        else if(str[i] == ')'){
            count--;
            if(count<0){
                count = 50;
                break;
            }
        }
    }
    return count;
}
int main(){
    int N;
    scanf("%d", &N);
    
    char str[N];
    int result[N], size[N];
    
    for(int i=0;i<N;i++){
        scanf("%s", str);
        size[i]=0;
        size[i] = strlen(str);
        if(size[i] % 2 !=0)
            result[i]=55;
        else
            result[i] = fun(str, size);
    }
    
    for(int i=0;i<N;i++){
        if(result[i] == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
