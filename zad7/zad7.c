#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int funkcja(const char *tekst)
{
  int dlugosc=strlen(tekst);
  printf("Dlugosc tego napisu to %d\n", dlugosc);
  return 0;
}

int main()
{
    const char *tekst="kupa dupa";
    printf("%s\n", tekst);

    funkcja(tekst);

  return 0;
}
