#include<stdio.h>
#include<math.h>

int main(){

    int num;
    scanf("%d",&num);
    if(num<2){
        printf("Invalid input\n");
        return 0;
    }

    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            while(num%i==0){
                num=num/i;
                printf("%d ",i);
            }
            
        }
    }
    if(num>1){printf("%d\n",num);}



    return 0;
}