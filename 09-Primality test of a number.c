#include<stdio.h>
#include<math.h>
#include<stdbool.h>

//logic for finding the prime
bool prime(int val){
    if(val<2){
        return false;
    }

    if(val<=3){
        return true;
    }

    if(val%2==0){
        return false;
    }
    for(int i=3;i<=sqrt(val);i+=2){
        if(val%i==0){
            return false;
        }
    }

    return true;
}



int main(){
    int num;
    scanf("%d",&num);

    //logic for special case
    if(num==1){
        printf("Invalid input\n");
        return -1;
    }
    bool flag=prime(num);


    if(flag==true){
        printf("The number is prime\n");
    }else{
        printf("The number is not prime\n");
    }





    return 0;

}
