#include<stdio.h>
int power(int base,int p,int m){
    int res=1;
    base=base%m;
    while(p){
        if(p%2==1){
            res=(res*base)%m;
        }else{
            base=(base*base)%m;
        }
        
        
        p=p/2;
    }

    return res;
}
int main(){
    int a,b,m;
    scanf("%d %d %d",&a,&b,&m);

    if(b==0){
        printf("Invalid input\n");
        return -1;
    }

    int x=power(b,m-2,m);
    printf("%d",(a*x)%m);

    return 0;
}