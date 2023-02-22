//
//  18111.c
//  BAEKJOON_C
//
//  Created by 최영미 on 2/21/23.
//

#include <stdio.h>

int main(){
    int n,m,b,max=0,min=257,max_co=0,min_co=0;
    int second=0;
    scanf("%d %d %d", &n, &m, &b);      //블록개수
    
    int arr[n][m];
    
    //입력받기
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            scanf("%d", &arr[i][j]);
    }
    
    //기준으로 할 블록개수 선정을 위한 최소블록높이와 최대높이, 각 카운터 선정
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] >= max)
                max=arr[i][j];
            if(arr[i][j] < min)
                min = arr[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(min == arr[i][j])
                min_co++;
            if(max == arr[i][j])
                max_co++;
        }
    }
    
    //블록개수 기준으로 선정 -> 인벤토리 충분할 경우 땅 높이가 높을 수록 좋음
    //+큰거를 없애는것보다 작은거를 추가하는게 더빠른경우 max_co > min_co    더 빨리 끝나니까 좋은거임 >=는 별로임
    //++인벤토리가 필요한거보다 적으면 3번째 예제 인경우 무조건 빼야함. -> min이랑 같게 만들어야 함 , 이후 인벤토리에 그만큼 추가
    //+++작은거 추가하는
    if(b>=(n*m)-max_co){    //충분할 경우
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(max_co >= min_co){
                    if(arr[i][j] != max){
                        arr[i][j] = max;
                        b = b - (max-arr[i][j]);
                        second = second + 1;    //인벤토리에 있는 블록 꺼낼 경우 1초 걸림
                    }
                }else{
                    if(arr[i][j] != min){
                        arr[i][j] = min;
                        b = b + (arr[i][j] - min);
                        second = second + 2;    //인벤토리에 있는 블록 꺼낼 경우 1초 걸림
                    }
                }
            }
        }
    }
    //+
    else if(max_co > min_co){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j] != min){
                    arr[i][j] = min;
                    b = b + (arr[i][j] - min);
                    second = second +2;     //좌표에 존재하는 블록 제거해 인벤토리에 넣으면 2초 걸림
                }
            }
        }
    }


    //++
    else if(b < (n*m)-max_co){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]!=min){
                    arr[i][j] = min;
                    b = b + (arr[i][j] - min);
                    second = second + 2;
                }
            }
        }
    }
    
    printf("%d %d\n", second, arr[0][0]);
}
