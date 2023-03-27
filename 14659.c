//
//  14659.c
//  BAEKJOON_C
//
//  Created by 최영미 on 3/28/23.
//

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d", &n);            //봉우리 개수 입력
    int* arr = (int*)malloc(sizeof(int) * n);   //개수만큼 봉우리 배열 선언
    int* cnt = (int*)malloc(sizeof(int) * n);   //봉우리 개수만큼 카운트할 배열 선언
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
    
    for(int i=0;i<n;i++){
        cnt[i] =0;          //지역변수에 선언해서 쓰레기값 있을 수 있으니 개수세기 전에 0으로 초기화
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j])       //처음부터 비교 시작
                cnt[i]++;
            else            //크지 않다면 바로 멈추고 다음 비교할 것으로 넘어감
                break;
        }
    }
    
    int max = cnt[0];           //max값에 앞에 넣은 카운트 0번째 넣어줌
    for(int i=1;i<n;i++){           //1번째 인덱스부터 비교해서 최대값 찾음
        if(max < cnt[i])
            max = cnt[i];
    }
    
    printf("%d\n", max);
}
