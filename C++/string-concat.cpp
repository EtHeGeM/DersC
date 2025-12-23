// Concatenates two std::string values and prints the result.
#include <cstdio>
#include <string>

int main() {
    // ilk string değeri
    std::string str1 = "c++ Dersine";
    std::string str2 = "hoşgeldiniz.";
    std::string result = str1 + " " + str2;
    printf("%s\n", result.c_str());
        // append metodu
    std::string str3 = "Eren ";
    std::string str4 = "Çelik";
    std::string fullName = str3.append(str4);
    printf("%s\n", fullName.c_str());

            //fullName = "Ahmet Yılmaz";
            //printf("%s\n", fullName.c_str());
            // c_str() fonksiyonu değiştirilmeye çalışıldığında bize hata verir.
    return 0;

    
}
