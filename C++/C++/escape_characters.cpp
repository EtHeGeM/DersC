// Concatenates two std::string values and prints the result.
#include <cstdio>
#include <string>
// escape  characters in strings
int main() {
    std::string str1 = "C++ Kursu\n------------\n\tKaçış Karakterleri:\n\t\' Tek Tırnak\n\t\" Çift Tırnak\n\t\\ Ters Eğik Çizgi\n\t\? Soru İşareti\n\t\a Uyarı Sesi\n\t\b Geri Silme\n\t\f Form Besleme\n\t\n Yeni Satır\n\t\r Satır Başı\n\t\t Sekme\n\t\v Dikey Sekme";
    printf("%s\n", str1.c_str());
    
    // \t sekme karakteri
    // \n alt satıra geçer
    // \\ ters eğik çizgi
    // \' tek tırnak
    // \" çift tırnak
    // \u Unicode karakteri
    // \r 

}