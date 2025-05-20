#include<stdio.h>
int main(){

    int num;
    scanf("%d",&num);
    int rem;
    int rvrs_num=0;

    while(num!=0){
        rem=num%10;
        rvrs_num=rvrs_num*10+rem;
        num=num/10;
        

    }

    printf("%d",rvrs_num);


    return 0;
}
