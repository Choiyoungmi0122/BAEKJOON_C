//
//  2805.c
//  BAEKJOON_C
//
//  Created by 최영미 on 2023/05/25.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int* tree = (int*)malloc(sizeof(int) * n); //나무 개수만큼 나무 높이 입력할 동적 할당
    
    for(int i=0;i<n;i++)
        scanf("%d", &tree[i]);  //나무 높이 입력

    // 이분 탐색을 위한 변수 설정
    long long left = 0;
    long long right = 2000000000;
    long long answer = 0;

    // 이분 탐색
    while (left <= right) {
        long long mid = (left + right) / 2;     //나무길이의 최소와 최대값을 넣어서 중간 값 구하기 위한 임의의 수임
        long long sum = 0;              // 자른 나무의 합을 저장하는

        // 자르고 남은 나무의 합 구하기
        for (int i = 0; i < n; i++) {
            if (tree[i] > mid) {        //중간보다 큰 즉 오른쪽에 있는 경우(이진트리 기준)
                sum += tree[i] - mid;       //해당 트리 높이에서 중간값을 빼주면서 계속 뺀값을 더해준다.
            }
        }

        // 자른 나무의 합이 목표치보다 크거나 같은 경우
        if (sum >= m) {
            // 높이의 최댓값을 갱신하고 더 높게 자르기
            if (mid > answer) {
                answer = mid;
            }
            left = mid + 1;     //여기서도 처음으로 돌아가서 반복
        }
        // 자른 나무의 합이 목표치보다 작은 경우
        else {
            // 높이를 낮춰서 자르기
            right = mid - 1;    //다시 while 처음으로 돌아가서 무한반복...
        }
    }

    printf("%lld\n", answer);

    free(tree);
    return 0;
}
