#include <stdio.h>

int main() {
    
    // kullanıcıdan 5 adet sayı alıyoruz
    int numbers[15];

    for (int i = 0; i<5; i++) {
        printf("Sayi giriniz: ");
        scanf("%d", &numbers[i]);
        if (i == 4) {
        for (int i = 0; i<5; i++)
        {
            printf("Element %d: %d\n", i, numbers[i]);
        }
        }
    }
    

    return 0;
}