#include<stdio.h>

//logic for gcd
long long gcd(long long num1,long long num2){
    if(num2==0)
    return num1;
 
    return gcd(num2,num1%num2);
}
int main(){

    //logic for taking input
    long long num1,num2;
    scanf("%lld %lld",&num1,&num2);
    
    //logic for printing output
    printf("%lld\n",gcd(num1,num2));

    return 0;
}