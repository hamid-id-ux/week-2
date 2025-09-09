#include<stdio.h>
int main(){

    int tab1[5];
    int tba2[5];
    int i,n;

    
    for(i=0;i<5;i++){
         printf("entrer le donner  de tableau : ");

        scanf("%d",&tab1[i]);
    }

    for( i=0;i<5;i++){
      tba2[i]=tab1[i];

    }
       printf("le tableau originale est ");
          for( i=0;i<5;i++){
           printf("\n%d",tab1[i]);
    }
    printf("\n le tableau copie est ");
    for( i=0;i<5;i++){
        printf("\n%d",tba2[i]);
    }
    return 0;
}
