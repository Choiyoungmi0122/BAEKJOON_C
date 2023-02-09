#include <stdio.h>

int main(int argc, const char * argv[]) {
    int C, N;
    scanf("%d", &C);
    
    for(int i=0;i<C;i++){
        int score[1000] = {0}, sum=0,count=0;
        scanf("%d", &N);
        for(int j=0;j<N;j++){
            scanf("%d", &score[j]);
            sum += score[j];
        }
        
        sum = (double)sum / N;
        for(int j=0;j<N;j++){
            if(sum < score[j])
                count++;
        }
        
        printf("%.3f%%\n", (double)count*100/N);
    }
    
}
