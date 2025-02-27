// 12S24051 - Geralda Natali Gultom
// 12S24018 - Kelvin Yohanes Putra

#include <stdio.h>
#include <string.h>
int main(int _argv, char **_argc) {
  char pesan[21];

  fgets(pesan, sizeof(pesan), stdin);
  
  pesan[strcspn(pesan, "\n")] = '\0';
  
  for (int i = 0; i < strlen(pesan); i++) {
      printf("%03d", pesan[i]);
  }
  
  printf("013");
  
  return 0;
}