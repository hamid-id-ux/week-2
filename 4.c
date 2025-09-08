#include <stdio.h>
int main() {
    int n;
    int sum=0;
    printf("donner le size de tableau: "); 
    scanf("%d", &n);
int tab[n];
printf("eliments: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
int max=tab[0];
    for(int i = 0; i < n; i++) {
        if(max<tab[i]){
            max=tab[i];
        }

}
    printf("le max est %d ",max);
    return 0;
}
