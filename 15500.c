//
//  15500.c
//  BAEKJOON_C
//
//  Created by 최영미 on 3/22/23.
//

//스택으로 각 원반을 입력받고
//그 판만큼의 배열로 봉을 만들어서 제일 큰숫자가 밑에 들어간 원반을 기준으로 만들어가려고 했지만 뭔가 막막하고 잘 안풀림 이 로직이 맞는건지 아님 틀려서 못짜는건지 머리가 안돌아감...
#include <stdio.h>
#define SIZE 10
int stack[SIZE];
int top=-1;     //가장 위의 원소를 가리킬 top 변수

int isFull(){
    if(top >= SIZE -1)  // stack의 인덱스 0부터 시작
        return 1;
    
    return 0;
}
int isEmpty(){
    if(top == -1)
        return 1;
    
    return 0;
}
 
void push(int data){
    if(!isFull()){
        top++;
        stack[top] = data;
    }
}
 
int pop(){
    if(!isEmpty()){
        return stack[top--];
    }
    return 0;
}

void printStack(){
    int i;
    for(i=0; i<=top; i++){
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main(){
    int N, k;
    scanf("%d", &N);
    int result[1000];
    for(int i=0;i<N;i++){
        scanf("%d", &k);
        push(k);
    }
    int i=1;
    result[0] = stack[0];
    pop();
    printf("%d %d\n", i, i+1);
    while(1){
       
    }
}
