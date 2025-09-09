#include<stdio.h>
int main(){

    int tab[]={ 1,2,3,4,5};
    int n,trouve =0;


    for(int i=0;i<5;i++){

        printf("%d ",tab[i]);
    }
    printf("\n entrer les element a trouver ");scanf("%d",&n);

      for(int i=0;i<5;i++){
        if(n==tab[i]){
                    printf("il ya cette ellement %d ",n);
                        trouve=1;
                             break;
        }
         }
      if(!trouve)
      printf("il ne setrouve pas dans le tableau ");







    return 0;
}
