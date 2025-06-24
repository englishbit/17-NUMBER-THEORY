#include<stdio.h>

//logic for gcd
int gcd(int a,int b){
    if(b==0)return a;

    return gcd(b,a%b);
}

//logic for lcm
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}


int main(){
    //logic for taking input
    int a,b;
    scanf("%d %d",&a,&b);

    //logic for output
    printf("The lcm of two numbers is %d\n",lcm(a,b));


    return 0;
}