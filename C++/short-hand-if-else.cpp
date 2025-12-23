#include <cmath>
#include <cstdio>
int main() {
    // short hand if else kullanımı
    int sayi = 0;
    const char* sayi_sekiz_mi = (sayi == 8) ? "Evet" : "Hayır";
    printf("Sayı sekiz mi? %s\n", sayi_sekiz_mi);
    return 0;
}
