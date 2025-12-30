// sonsuz for dongusu

#include <stdio.h>
int main() {
    for (;;) { 
        printf("Bu bir sonsuz döngüdür.\n");
        
        // Döngüyü sonlandırmak için bir koşul ekleyebilirsiniz
        char c;
        printf("Döngüyü sonlandırmak ister misiniz? (e/h):\n");
        scanf(" %c", &c);
        
        if (c == 'e' || c == 'E') {
            break;
        }
    }
    return 0;
}