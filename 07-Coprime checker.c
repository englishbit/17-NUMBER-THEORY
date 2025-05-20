#include<stdio.h>

//logic for gcd
int gcd(int a,int b){
    if(b==0)return a;

   return gcd(b,a%b);
}
int main(){
    int num1,num2;
    //logic for taking input
    scanf("%d %d",&num1,&num2);

    //logic for output
    if(gcd(num1,num2)==1)
    printf("Yes\n");
    else
    printf("No\n");


    return 0;
}