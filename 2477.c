//
//  2477.c
//  BAEKJOON_C
//
//  Created by 최영미 on 2/9/23.
//

int lo[7][2], len[5], ar1, ar2,a;

#include <stdio.h>
int main(){
    int k;  //1m^2 에서 자라는 참외 개수
    int east=1, west=2, south=3, north=4;
    scanf("%d", &k);
    
    for(int i =0;i<6;i++){
        scanf("%d %d", &lo[i][0], &lo[i][1]);
    }
    
    for(int i =0;i<7;i++){
        if(lo[i][0] == east)
            east = lo[i][1];
        else if(lo[i][0] == west)
            west = lo[i][1];
        else if(lo[i][0] == south)
            south = lo[i][1];
        else if(lo[i][0] == north)
            north = lo[i][1];
    }
    
        
            
    for(int i =1;i<=4;i++){
        for(int j=0;j<7;j++){
            if(i==lo[j][0])
                len[i] = len[i] + lo[j][1];
        }
    }

    
    if(east > west)
        east = east - west;
    else{
        a=east;
        east =  west - east;
        west = a;
    }
        
    if(south > north)
        south = south - north;
    else{
        a=south;
        south = north - south;
        north = a;
    }

    
    if(len[1] > len[3]){
        ar1 = east * len[3];
        ar2 = (len[1]-east) * (len[3]-south);
    }
    else{
        ar1 = (len[1]-east) * south;
        ar2 = (len[1]-west) * north;
    }
    
    printf("%d\n", (ar1+ar2)*k);
    
}
