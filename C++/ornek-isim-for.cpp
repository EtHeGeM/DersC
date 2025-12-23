#include <cstdio>
#include <cstring>

int main() {
    std::printf("İsim bilgisi giriniz: ");
    char isim[256] = {0};

    // Read the full line (up to 255 chars) using scanf
    if (std::scanf(" %255[^\n]", isim) != 1) {
        std::printf("Geçerli bir isim girilmedi.\n");
        return 1;
    }

    std::size_t uzunluk = std::strlen(isim);
    for (std::size_t i = 0; i < uzunluk; i++) {
        std::printf("Karakter %zu: %c\n", i + 1, isim[i]);
    }

    return 0;
}
