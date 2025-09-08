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
int min=tab[0];
    for(int i = 0; i < n; i++) {
        if(min>tab[i]){
            min=tab[i];
        }

}
    printf("le min est %d ",min);
    return 0;
}
