#include <stdio.h>
int main() {
    int n;
    int sum=0;
    printf("donner les donner de tableau: "); 
    scanf("%d", &n);
int tab[n];
printf("eliments: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    for(int i = 0; i < n; i++) {
    sum+=tab[i];
}
    printf("la somme est %d ",sum);
    return 0;
}
