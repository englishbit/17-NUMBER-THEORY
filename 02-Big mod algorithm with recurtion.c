#include<stdio.h>
long long bigmod(long long base,long long power,long long mod){
        if(power==0){
            return 1;
        }

         if(power%2==1){
            long long a=base%mod;
            long long b=bigmod(base,power-1,mod)%mod;
            return (a*b)%mod;
        }else{
            long long a=bigmod(base,power/2,mod)%mod;
            return (a*a)%mod;
        }
        
}
int main(){
long long base,power,mod;
scanf("%lld %lld %lld",&base,&power,&mod);

if(base<0){
    printf("Invalid input\n");
    return -1;
}
if(power<0){
    printf("Invalid input\n");
    return -1;
}
if(mod<=0){
    printf("Invalid input\n");
    return -1;
}

printf("%lld\n",bigmod(base,power,mod));
  

    return 0;
}