//
//  1918.c
//  BAEKJOON_C
//
//  Created by 최영미 on 3/22/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char stack[100];
int idx = -1;
void push(char value) {     //입력한 연산자를 스택에 넣는 함수
    stack[++idx] = value;
}
char pop() {        //제거하는 함수
    if (idx < 0) return -1;     //인덱스가 해당 없으면 거짓임
    else return stack[idx--];   //아니라면 인덱스 크기 없애고 리턴 idx의 위치에 있는 값은 없어짐
}
int is_empty() {    //비어있는지 확인하는 함수
    if (idx == -1) return 1;    //인덱스가 틀릴경우
    else return 0;      //인덱스로 확인
}
char peek() {       //가장 위에 있는 항목 리턴
    if (is_empty()) return 0;       //비어있는지 먼저확인을 해주어야함
    else return stack[idx];         //비어있지 않다면 해당 인덱스(맨위)를 리턴
}
int prec(char op) {     //연산자에 우선순위가 존재하는데 이 함수로 우선순위 지정
    if (op == '(') return -1;           //(는 바로 push를 하기 때문에 우선순위에 영향받지않음
    else if (op == '+' || op == '-') return 0;      //+와 -는 *나 /보다 우선순위가 낮음
    else return 1;      //그외 )는 아예 스택에 들어가지 않고 * / 밖에 없으므로 리턴해줌
}
main() {
    char str[101];
    scanf("%s", str);   //연산자 존재하기 때문에 string으로 받아야함
    for (int i = 0; i < strlen(str); i++) { //문자열 입력한 크기만큼 돌아감
        if (str[i] >= 'A' && str[i] <= 'Z') {   //연산자가 아니기 때문에 바로 출력
            printf("%c", str[i]);
        }
        else if (str[i] == '(') {
            push(str[i]);       //(괄호면 그냥 바로 넣는다.
        }
        else if (str[i] == ')') {
            while (peek() != '(') {     //가장 위에있는게 ( 아니면
                printf("%c", pop());        //바로 pop출력  -> 괄호안에 걸 먼저 계산해야하므로
            }
            pop();      //출력한 연산자는 pop을 통해 제거해줌
        }
        //else = 위에 다 해당하지 않는 즉, 괄호가 아니고, 피연산자아닌 그냥 연산자인 경우
        else {//(while)비어있지도 않고, 맨위에있는게 우선순위가 더 크다면
            while (!is_empty() && prec(peek()) >= prec(str[i])) {
                printf("%c", pop());        //맨위에 있는 거 출력
            }
            push(str[i]);       //연산자 바로 스택에 push
        }
    }
    while (!is_empty()) {
        printf("%c", pop());    //빌때까지 계속 FILO로 출력
    }
}
