#include<stdio.h>
//logic for addition
long long modular_addition(long long num1,long long num2,long long mod){
    
    return ((num1%mod)+(num2%mod))%mod;
}

//logic for subtraction
long long modular_subtraction(long long num1,long long num2,long long mod){

    return (((num1%mod)-(num2%mod))+mod)%mod;
}

//logic for multiplication
long long modular_multiplication(long long num1,long long num2,long long mod){

    return ((num1%mod)*(num2%mod))%mod;
}

int main(){

    long long num1,num2,mod;

   scanf("%lld %lld %lld",&num1,&num2,&mod);
   
   //logic for special case
   if(mod<=0){
        printf("Invalid input\n");
        return -1;
   }

   //logic for printing output
   printf("%lld\n",modular_addition(num1,num2,mod)); 
   printf("%lld\n",modular_subtraction(num1,num2,mod));
   printf("%lld\n",modular_multiplication(num1,num2,mod)); 


    return 0;
}