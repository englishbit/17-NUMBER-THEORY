#include<stdio.h>
int main(){

    long long base;
    long long expo;
    long long result=1;

    //logic for taking input;
    scanf("%lld %lld",&base,&expo);
    if(expo==0){
        printf("%lld\n",1);
        return 0;
    }
    if(expo<0){
        printf("Invalid input\n");
        return -1;
    }



    //logic for finding power
    while(expo){
        if(expo%2==1){
            result*=base;
            
            
        }
            
        base=base*base;
        expo=expo/2;
        
    }

    printf("%lld\n",result);



    return 0;

}

