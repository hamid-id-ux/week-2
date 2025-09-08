#include<stdio.h>
int main(){

    int n;
   
    printf("saisire le size de tableau : ");scanf("%d",&n);
     int tab[n];
    printf("saisre les donner de tableau ");
    for(int i=0;i<n-1;i++){

  scanf("%d",&tab[i]);
    }
    printf("les element entrer est : ");
     for(int i=0;i<n;i++){

    printf("%d ",tab[i]);
     }
      
       for (int i = 0; i < n; i++){
        for(int j=0;j<n;j++){
        if(tab[j]<tab[j+1]) {
        int max=tab[j];
        tab[j]=tab[j+1]; 
        tab[j+1]=max;
      }       
   }
   }

    
      for(int i=0;i<n;i++){

    printf("\n %d ",tab[i]);
    }
    return 0;
}
