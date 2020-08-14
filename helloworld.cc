#include<stdio.h>
#include<math.h>

int main(){
    
    int A=2;
    int i=0;
    
    scanf("%d", &A);
    
    printf("Input num. is %d.",A);
    
    while(A<10000){
        A=A*2;
        if(A>10000){
            break;
        }
        i++;
        printf("%d回目    %d", i, A);
        
    }
    
}
