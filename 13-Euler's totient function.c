#include<stdio.h>
#include<math.h>

//logic for counting all coprime
void phi(int num){
    int ans=num;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            while(num%i==0){
                num=num/i;
            }
            ans*=(i-1);
            ans/=i;

        }
    }

    if(num>1){
        ans*=num-1;
        ans/=num;
    }

    printf("%d\n",ans);
}


int main(){
    int num;
    scanf("%d",&num);

    //logic for special case
    if(num<2){
        printf("Invalid input\n");
        return -1;
    }

    //logic for output
    phi(num);


    return 0;
}