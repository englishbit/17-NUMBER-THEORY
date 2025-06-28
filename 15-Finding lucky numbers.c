#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<1){
        printf("Invalid input\n");
        return 1;
    }

    int array[n+1];

    for(int i=1;i<=n;i++){
        array[i]=0;    
    }

    for(int i=1;i<=n;i++){
        if(array[i]==0){
            
            for(int j=i*2;j<=n;j+=i){
            array[j]=1;
        }
    }
        
    }

    for(int i=1;i<=n;i++){
        if(array[i]==0){
            printf("%d ",i);
        }
    }

    printf("\n");


















    return 0;
}