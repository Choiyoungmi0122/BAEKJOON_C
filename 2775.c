//
//  2775.c
//  BAEKJOON_C
//
//  Created by 최영미 on 3/3/23.
//

#include <stdio.h>
int main(){
    int arr[15][15] = {0,};
    int N,a,b, result[15] = {0, };

    scanf("%d",&N);
    
    for(int i=1; i<15; i++)
      arr[0][i] = i;  //0층 i호 밀어주기
    
    
    for(int i=1; i<15; i++){      //층
      for(int j=1; j<15; j++){    //호
          arr[i][j] = arr[i-1][j] + arr[i][j-1]; //층 인원수 구하는 식
      }
    }
    
    for(int i=0;i<N;i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", arr[a][b]);
    }
        
    
        
    
}
