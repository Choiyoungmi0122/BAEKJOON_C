//
//  10773.c
//  BAEKJOON_C
//
//  Created by 최영미 on 2/11/23.
//

#include <stdio.h>
int sum, num[100000], count,i;
int main(){
    int k;
    scanf("%d", &k);
    
    while(count !=k){
        scanf("%d", &num[i]);
        
        if(num[i]!=0)
            sum = sum + num[i];
        else{
            sum = sum - num[i-1];
            i=i-2;
        }
        count++;
        i++;;
    }
    
    printf("%d\n", sum);
}
//    int k=0;
//    int s=0;
//    scanf("%d", &k);
//
//    int l = -1,sum=0;
//    int n[k];
    
//    for(int i=0;i<k;i++){
//        scanf("%d", &s);
//
//        if(s==0){
//            l=i-l;
//            if(n[l]==0){
//                l++;
//            }
//            n[l]=0;
//        }
//        else{
//            n[i]=s;
//            l++;
//        }
//    }
    //선배의 작품
//    for(int i=0; i<k;i++){
//
//        scanf("%d",&s);
//        if(s == 0){
//
//            if(l == -1){
//                n[i]=0;
//            }
//
//            else{
//                n[l] = 0;
//                n[i] = 0;
//                l= l - 1;
//            }
//        }
//        else{
//                n[i]=0;
//                l=l+1;
//                n[l]=s;
//        }
//
//    }
//    for(int i=0; i<k;i++){
//        sum = sum + n[i];
//    }
//
//    printf("%d\n", sum);
    

