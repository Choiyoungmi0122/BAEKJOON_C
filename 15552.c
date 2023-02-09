#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    int a,b;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }
}
