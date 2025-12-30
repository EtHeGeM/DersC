#include <stdio.h>
#include <string>
using namespace std;
void modifyStr(string &str) {
  str += " World!";
}

int main() {
  string greeting = "Hello";
  modifyStr(greeting);
  printf("%s\n", greeting.c_str());
  return 0;
}