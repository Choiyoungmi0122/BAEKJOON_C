//
//  1316.c
//  BAEKJOON_C
//
//  Created by 최영미 on 3/3/23.
//

#include <stdio.h>
#include <string.h>
int main(){
    int N;
    char str[101];
    scanf("%d", &N);    //입력
    
    int count = N;
    for(int i=0;i<N;i++)
    {
        char first ='0';    //0을 문자로 저장
        int al[26]={0, };   //각 알파벳을 인덱스 번호로 배열 생성
        scanf("%s", str);
        for(int j=0;str[j]!='\0';j++){
            //0과 다르면 일단 처음에는 무조건 다르기 때문에 시행
            if (first != str[j]){
                first = str[j];
                if(al[str[j]-'a'] != 0){
                    count--;    //개수에서 제외
                    break;
                }
                else
                    al[str[j]-'a'] = al[str[j]-'a'] + 1;
                //해당 알파벳 인덱스에 값 추가
            }
            else
                al[str[j]-'a'] = al[str[j]-'a'] + 1;
            
        }
    }
    printf("%d\n", count);
}
