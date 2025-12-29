// Checks whether two given numbers exist inside a fixed array of integers.
#include <stdio.h>

int var_mi(int a, int b) {
    int c[30]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    // a, b array içerisinde var mı?
    for (int i = 0; i < 20; i++) {
        if (c[i] == a || c[i] == b) {
            return 1; // var
        }
    }
    return 0; // yok
}



int main() {
    int a = 10;
    int b = 5;
    if (var_mi(a, b)) {
        printf("degerler arrayde var\n");
    } else {
        printf("degerler arrayde yok\n");
    }
    return 0;
    
}
