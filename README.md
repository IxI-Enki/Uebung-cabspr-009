# Uebung-cabspr-009 -- Balkendiagramm

```c
#include <stdio.h>
#include <string.h>

int main(void)
{
  int userInput = 0;
  int laengeBalken = 0;
  int i = 0;     // zaehler

  printf("\n Balkenzeichner ");
  printf("\n================");
  printf("\n Geben Sie die Laengen der Balken ein.\n (0 zum Beenden) \n");

  scanf_s(" %d", &userInput);
  if (userInput != 0)
  {
    while (userInput != 0)
    {
      laengeBalken = userInput;
      // \x1b[1A  .... ANSI Escape code um 
      //                   in der Console eine Zeile höher zu springen
      printf("\x1b[1A %d : ", userInput);

      for (i = 0; i < laengeBalken; i++)
      {
        printf("=");
      }
      printf("\n");
      scanf_s(" %d", &userInput);
    }
  }
  if (userInput == 0)
  {
    printf("\x1b[1A %d : (Ende)", userInput);
  }
  return 0;
}

```
