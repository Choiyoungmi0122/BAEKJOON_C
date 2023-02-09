#include <stdio.h>

int main(int argc, const char * argv[]) {
    int A, B, C;
    scanf("%d %d", &A, &B);
    scanf("%d", &C);
    
    B=B+C;
    
    while(B>=60){
        if(B>=60){
            A=A+1;
            B=B-60;
        }
        
        if(A>=24){
            A=A-24;
        }
    }
    
    printf("%d %d\n", A, B);
}
