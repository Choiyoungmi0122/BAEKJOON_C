//
//  17298.c
//  BAEKJOON_C
//
//  Created by 최영미 on 3/22/23.
//

#include <stdio.h>
#include <stdlib.h>
int stack[1000000];
int idx = -1;
void push(int value) {
    stack[++idx] = value;
}
int pop() {
    return stack[idx--];
}
int is_empty() {
    return (idx == -1);
}
int peek() {
    return stack[idx];
}
main() {
    int n;
    scanf("%d", &n);
    int* arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        while (!is_empty() && arr[peek()] < arr[i]) {
            arr[pop()] = arr[i];
        }
        push(i);
    }
    while (!is_empty()) {
        arr[pop()] = -1;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
