//
//  23523.c
//  BAEKJOON_C
//
//  Created by 최영미 on 3/20/23.
//

#include <stdio.h>
#include <stdlib.h>
int main(){
    int N,M;
    int result=0;
    scanf("%d %d", &N, &M);     //책 개수와 더미를 입력
    
    for(int i=0;i<M;i++){
        int c;
        scanf("%d", &c);       //각 더미에 있을 책 개수
        int book[200001], test1=2000001;        //책숫자를 저장할 배열, 비교할 변수하나
        for(int j=0;j<c;j++){       //더미당 있을 책의 개수 만큼 반복해야함
            scanf("%d", &book[j]);      //위에서부터 넣는걸로함   c부터 0까지해도 괜찮을듯
            if(book[j]>test1){      //변수에 들어간 임의에 책 크기보다 book에 있는 숫자가 작으면 바로 불가능하기 때문에
                result = 1;
                break;
            }
            test1 = book[j];    //잘 나올 수 있다면 이제 비교할 변수를 다시 넣어서 계속 비교할 수 있게 한다.
        }
    }
    
    if(result == 0)
        printf("Yes");
    else
        printf("No");
    
    
    
}
