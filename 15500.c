//
//  15500.c
//  BAEKJOON_C
//
//  Created by 최영미 on 3/22/23.
//

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
