// sonsuz döngü çalışması

#include <stdio.h>  

int main() {
    int counter = 0;
    for (int i =0; i < 10; i++) {  // sonsuz döngü
        printf("i'nin değeri: %d\n", i);

            if (counter == 20){
                break;
            }
        counter++;
            if (i == 5)
            {
                i = 0;
            }
        
    }
    return 0;
}