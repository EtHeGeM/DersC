#include <stdio.h>
#include <string>
using namespace std;
int main(){

printf("Yaş bilgisi giriniz: ");
int yas;
scanf("%d", &yas);

if (!(yas < 18)) {
    printf("Reşitsiniz.\n");
} 
else 
{
    printf("Reşit değilsiniz.\n");
}
return 0;

}