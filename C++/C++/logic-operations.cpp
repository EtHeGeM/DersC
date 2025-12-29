// logic operations

#include <cstdio>
#include <string>
int main() {
    bool insan_mi = 0;
    bool cinsiyet = 1; // 0 = kadın, 1 = erkek
    
    
if (insan_mi) {
        if (cinsiyet) {
            printf("insan ve erkek.\n");
        } 
        else {
            printf("insan ve kadın.\n");
        }
    } 
else 
    if (cinsiyet)
        printf("insan değil ve erkek.\n");
    else {
        printf("insan değil ve kadın.\n");
    }

   
    return 0;
}