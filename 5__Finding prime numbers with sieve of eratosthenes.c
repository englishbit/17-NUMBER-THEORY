#include<stdio.h>
#include<math.h>
//logic for sieve
void sieve(int val){
    int array[val+1];

    

    for(int i=0;i<=val;i++){
        array[i]=1;
    }
    
    array[0]=0;
    array[1]=0;


    for(int i=2;i<=sqrt(val);i++){

        if(array[i]==1){
            for(int j=i*i;j<=val;j+=i){
                array[j]=0;
            }
        }
        
    }

    for(int i=2;i<=val;i++){
        if(array[i]==1){
            printf("%d ",i);
        }
    }
    printf("\n");
}



int main(){
    int n;
    scanf("%d",&n);
    if(n<1){
        printf("Invalid input\n");
        return -1;
    }

 sieve(n);



    return 0;
}