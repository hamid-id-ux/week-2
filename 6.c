#include <stdio.h>
int main() {
    int n;
    int mult=1;
    printf("donner les size de tableau: "); 
    scanf("%d", &n);
int tab[n];
printf("eliments: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
int fact=1;
    printf("donner le facteure de multiplication ");
    scanf("%d",&fact);

    for(int i = 0; i < n; i++) {
    mult=tab[i]*fact;
        printf("  \n %d*%d=%d ",fact,tab[i],mult);
       
}

    return 0;
}
