//
//  UnionFind.c
//  BAEKJOON_C
//
//  Created by 최영미 on 5/3/23.
//
#include <stdio.h>
#define MAX_N 100000 // 자기자신을 대표 원소로 갖는 초기 상태를 설정하기 위해 선언

int parent[MAX_N + 1];
void initialize(int n) {// 초기화 함수
    for (int i = 1; i <= n; i++) {
        parent[i] = i; // 자기 자신을 대표 원소로 설정
    }
}
int find(int x) {// 찾기 함수

    if (parent[x] == x) { // x가 대표 원소인 경우
        return x;
    } else {
        return parent[x] = find(parent[x]); // 경로 압축 기법 적용
    }
}
void union_(int x, int y) {// 합치기 함수
    int rootX = find(x);
    int rootY = find(y);
    if (rootX != rootY) { // 두 원소가 속한 집합이 다른 경우
        parent[rootX] = rootY; // rootX의 부모를 rootY로 변경
    }
}
int main() {
    int n = 5; // 5개의 원소가 있다고 가정
    initialize(n); // Disjoint-Set 자료구조 초기화

    union_(1, 2); // 1과 2를 합치기
    union_(3, 4); // 3과 4를 합치기

    if (find(1) == find(4)) { // 1과 4가 같은 집합에 속해 있는지 확인
        printf("1과 4는 같은 집합에 속해 있습니다.\n");
    } else {
        printf("1과 4는 같은 집합에 속해 있지 않습니다.\n");
    }
}
