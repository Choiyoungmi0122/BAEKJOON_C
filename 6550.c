//
//  6550.c
//  BAEKJOON_C
//
//  Created by 최영미 on 3/28/23.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define Size 100001

char stack[100003];     //숫자를 넣을 배열 선언
int idx = -1;           //0부터 넣어야하므로 -1로 선언해준다.

void push(char value) {      //해당 값을 스택에 저장
    stack[++idx] = value;
}
char pop() { //스택 맨위에 저장되어 잇는 값을 빼고 바로 밑의 값 리턴
    return stack[idx--];
}
int is_empty() {
    return (idx == -1);     //지금 현재 실행되고 있는 인덱스가 -1 즉, 스택이 비어있으면 0 리턴
}
char peek() {
    return stack[idx];      //맨 위에 있는 값 리턴
}
int main(){
    char s[Size], t[Size];
    int cnt=0;
    scanf("%s", s);
    scanf("%s", t);
    
    int ssize = strlen(s);
    int tsize = strlen(t);
    
    for(int i=0;i<ssize;i++){
        push(s[i]);
    }
    
    int j=tsize-1;
    while(!is_empty() && cnt<ssize){
        if(peek() == t[j]){
            pop();
            cnt++;
            j--;
        }
    
    }
    
    
    if(cnt==ssize)
        printf("Yes\n");
    else
        printf("No\n");

   
}
