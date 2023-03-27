//
//  17608.c
//  BAEKJOON_C
//
//  Created by 최영미 on 3/27/23.
//

#include <stdio.h>
#include <stdlib.h>
int stack[100003];     //숫자를 넣을 배열 선언
int idx = -1;           //0부터 넣어야하므로 -1로 선언해준다.
void push(int value) {      //해당 값을 스택에 저장
    stack[++idx] = value;
}
int right() {
    return stack[idx];      //맨 위에 있는 값 리턴
}

int main(){
    int n,count=1;
    scanf("%d", &n);        //막대 개수 입력
    
    int* arr = (int*)malloc(sizeof(int) * n);   //개수만큼 배열 선언
    
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);       //순서대로 막대 높이 입력
        push(arr[i]);           //막대 높이 들을 다 스택에 넣어줌
    }
    
    
    
    for (int i = 0; i < n-1; i++) {
       if (right() < arr[i])
           count++;
    }
    
   printf("%d\n", count);
}
