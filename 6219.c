//
//  6219.c
//  BAEKJOON_C
//
//  Created by 최영미 on 3/16/23.
//
#include <stdio.h>
//
//int main(){
//    int A,B,D,count=0;
//    int num[4000001]={0,};
//    scanf("%d %d %d", &A, &B, &D);
//
//    for(int i=A;i<=B;i++){
//        if(i==2){   //2는 따로 해야함
//            num[i]=i;       //2가 제일 작은 소수임
//        }
//
//        for(int j=2;j<i;j++){
//            if(i%j==0)  //소수가 아니면 바로 멈춤
//                break;
//            else if(j==i-1){    //나누어 떨어지지 않으면서
//                num[i] = 1;
//            }
//        }
//    }
//
//
//    for(int i=A;i<=B;i++){
//        if(num[i]!=0){//소수인 경우에만 비교
//            if(i/10==D)
//                count++;
//            if(i%10==D)
//                count++;
//        }
//    }
//
//    printf("%d\n", count);
//
//    return 0;
//
//}

int a,b,d;
int PrimeNumber(int n)
{
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int f(int number)
{
    while(number>1){
       if(number % 10 == d) return 1;
       number=number/10;
    }
    return 0;
}

int main()
{
    int result=0;

    scanf("%d %d %d", &a, &b, &d);

    for(int i=a;i<=b; i++){

        if(f(i)){
            result += PrimeNumber(i);
        }
    }
    printf("%d", result);
}
