//
//  1157.c
//  BAEKJOON_C
//
//  Created by 최영미 on 2/22/23.
//

#include <stdio.h>
int fun(int nums[], int a,int max){
    for(int i=0;i<26;i=i+2){
        if(nums[i] != nums[i+1])
            return nums[i];
    }
    return 0;
}
int main(){
    char str[1000000]={0,};
    int al[26]={0, },count =0,max=0,a=0;
  
    scanf("%s", str);

    for(int i =0;str[i]!='\0';i++){
        if( str[i] < 91)     //대문자
            al[str[i] -65]++;
        if( str[i] > 92){//소문자
            al[str[i]-97]++;
        }
    }
    for(int i =0;i<26;i++){
        printf("%d ", al[i]);
        if(max < al[i]){
            a = i;
            max = al[i];
        }
    }
    
    printf("\n");
    printf("%c\n", a+65);
    
    
}
