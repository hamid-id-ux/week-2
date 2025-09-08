#include <stdio.h>
int main() {
    int n;
    int tab[50];

    printf("donner les donner de tableau "); 
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("%d ", i);
        scanf("%d", &tab[i]);
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }

    return 0;
}
