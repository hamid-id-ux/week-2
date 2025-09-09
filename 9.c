#include <stdio.h>

int main() {
    int tab[5] = {1, 2, 3, 4, 5};
    int t = 5;


    printf("tableau avant inversion : ");
    for (int i = 0; i < t; i++) {
        printf("%d ", tab[i]);
    }

    for (int i = 0; i < t / 2; i++) {
        int x = tab[i];
        tab[i] = tab[t - 1 - i];
        tab[t- 1 - i] = x;
    }


    printf("\ttableau après inversion : ");
    for (int i = 0; i < t; i++) {
        printf("%d ", tab[i]);
    }

    return 0;
}
