#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;      //내가 입력할 수 (범위)
    scanf("%d", &n);
    int count=0;    //한수 갯수 저장
    
    int a[3]={0};      //한수 인지 검사하기전 각 수들을 나눠놓는
    
    if(n<100)
        count = n;
    else{
        count = count +99;
        for(int i = 100; i <= n ; i++){
            a[0] = i/100;
            a[1] = (i/10)%10;
            a[2] = i % 10;
            
            if(a[2]-a[1] == a[1]-a[0])
                count++;
            
            else
                continue;
        }
    }
        printf("%d\n", count);
    
}
