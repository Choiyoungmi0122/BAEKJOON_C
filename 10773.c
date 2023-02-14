//
//  10773.c
//  BAEKJOON_C
//
//  Created by 최영미 on 2/11/23.
//

#include <stdio.h>
int main(){
    int num[10000]={0,},k,n,count,sum=0;

    scanf("%d", &k);
    
    
    
    for(int i =0;i<k;i++){
        scanf("%d", &n);
            
        if(n==0){
            count=i-1;
            while(num[count]==0)
                count--;
            
            num[count]=0;
            
        }
        else
            num[i]=n;
    }
        
    for(int i =0;i<k;i++){
        sum = sum + num[i];
    }
    
    
//    for(int count =0;count<k;count++){
//        scanf("%d", &num[count]);
//
//        if(num[count]!=0)
//            sum = sum + num[count];
//        else{
//            sum = sum - num[i-1];
//            i=i-2;
//        }
//        i++;
//    }
  
    
    printf("%d\n", sum);
}
