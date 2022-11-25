#include <stdio.h>
int main() {
    int bilangan1, bilangan2, bilangan3;
    printf("Masukan Bilangan 1:\t");
    scanf("%d", & bilangan1);
    printf("Masukan Bilangan 2:\t");
    scanf("%d", & bilangan2);
    printf("Masukan Bilangan 3:\t");
    scanf("%d", & bilangan3);
    if (bilangan1 < bilangan2 && bilangan1 < bilangan3) {
        printf("Bilangan 1 Terkecil");
    } else if (bilangan2 < bilangan1 && bilangan2 < bilangan3) {
        printf("Bilangan 2 Terkecil");
    } else {
        printf("Bilangan 3 Terkecil");
    }
    return 0;
}