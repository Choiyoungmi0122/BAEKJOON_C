//
//  1157.c
//  BAEKJOON_C
//
//  Created by 최영미 on 2/22/23.
//

#include <stdio.h>
int fun(int al[], int max){
    int count =0;
    for(int i=0;i<26;i++){
        if(al[i] == max)
            count++;
    }
    return count;
}
int main(){
    char str[1000000]={0,};
    int al[26]={0, },max=0,a=0, result=0;
    
    scanf("%s", str);
    
    for(int i =0;str[i]!='\0';i++){
        if( str[i] < 91)     //대문자
            al[str[i] -65]++;
        if( str[i] > 92){//소문자
            al[str[i]-97]++;
        }
    }
    
    for(int i =0;i<26;i++){
        if(max < al[i]){
            a = i;  //al의 알파벳 위치
            max = al[i];    //알파벳 개수
        }
    }
    
    result = fun(al,max);
    
    if(result == 1)
        printf("%c\n", a+65);
    else
        printf("?\n");
    
}
