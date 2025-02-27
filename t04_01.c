// 12S24051 - Geralda Natali Gultom
// 12S24018 - Kelvin Yohanes Putra

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int _argv, char **_argc) {
  char pesan[61];
  scanf("%s", pesan);
  
  int panjang = strlen(pesan);
  for (int i = 0; i < panjang; i += 3) {
      char tigaAngka[4] = {pesan[i], pesan[i+1], pesan[i+2], '\0'};
      int kodeASCII = atoi(tigaAngka);
      printf("%c", kodeASCII);
  }
  printf("\n");
  return 0;
}