//
//  18111.c
//  BAEKJOON_C
//
//  Created by 최영미 on 2/21/23.
//

#include <stdio.h>
#include <limits.h>
int main(){
    int n,m,b,max=0,min=256,time=0,min_time=INT_MAX,blok=256;
    int second=0;
    scanf("%d %d %d", &n, &m, &b);      //블록개수
    
    int arr[n][m];
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &arr[i][j]);
            if(max<arr[i][j])
                max = arr[i][j];
            else if(min>arr[i][j])
                min=arr[i][j];
        }
    }
    
    for(int i=max;i>=min;i--){
        int inven=b;
        time = 0;
        for(int j=0;j<n;i++){
            for(int k=0;k<m;k++){
                int di = arr[j][k] - i;
                
                if(di<0){
                    time = time - di;
                    b = b+ di;
                }
                else if(di>0){
                    time = time + di * 2;
                    b = b + di;
                }
            }
        }
        //b<0 불가능 경우
        if(b>= 0){
            if(time < min_time){
                min_time = time;
                blok = i;
            }
        }
    }
    
    printf("%d %d\n", second, arr[0][0]);
}
