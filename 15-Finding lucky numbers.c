#include<stdio.h>
int main(){

    //logic for taking input
    int n;
    scanf("%d",&n);

    //logic for special case
    if(n<1){
        printf("Invalid input\n");
        return 1;
    }

    
    int array[n+1];


    //logic for filling the array 
    for(int i=1;i<=n;i++){
        array[i]=0;    
    }

    //logic for finding the lucky numbers
    for(int i=1;i<=n;i++){
        if(array[i]==0){
            
            for(int j=i*2;j<=n;j+=i){
            array[j]=1;
        }
    }
        
    }

    //logic for output
    for(int i=1;i<=n;i++){
        if(array[i]==0){
            printf("%d ",i);
        }
    }

    printf("\n");




    return 0;
}
