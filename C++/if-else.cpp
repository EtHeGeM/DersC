#include <cmath>
#include <cstdio>
int main() {
    // timer belirli bir süreye ulaştığında bir alarm verir
    for (int timer = 0; timer <= 100; ++timer) {
        if (timer == 0) {
            printf("Timer başlıyor...\n");
        } else if (timer % 10 == 0) {
            printf("Timer: %d saniye\n", timer);
        } else if (timer == 100) {
            printf("Timer tamamlandı!\n");
        }
    }
    return 0;
}
