//
//  1316.c
//  BAEKJOON_C
//
//  Created by 최영미 on 3/3/23.
//

#include <stdio.h>
#include <string.h>
int main(){
    int N;
    char str[101];
    scanf("%d", &N);    //입력
    
    int count = N;
    for(int i=0;i<N;i++)
    {
        char first ='0';
        int al[26]={0, };
        scanf("%s", str);
        for(int j=0;str[j]!='\0';j++){
            if (first != str[j]){
                first = str[j];
                al[str[j]-'a'] = al[str[j]-'a'] + 1;
            }

            if (al[str[j] - 'a'] == 2){
                count = count - 1;
                break;
            }
        }
    }
    printf("%d\n", count);
}
