#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

void print_LowerCase(){
  char T[15]="Hello World!";
  for(int i=0 ; T[i] ; i++){
    if (T[i]>='A' && T[i]<='Z')
      cout << (char)(T[i]-'A'+'a');
    else 
      cout << T[i];
  }
}

int main() {
  print_LowerCase();
}

