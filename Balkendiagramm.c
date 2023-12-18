/*------------------------------------------------------------------------------------------------*
 *     -> Code-language:  [ C ]             HTL-Leonding                   Class: 3ACIF           *
 *------------------------------------------------------------------------------------------------*
 *     ->            by:  Jan Ritt                                          Year: 2023/2024       *
 *------------------------------------------------------------------------------------------------*
 *     Description:   IN:  Länge des Balkens (Anzahl des "="-Zeichens)
 *                         Mittels while-Scheife sollen solange Werte eingelesen und ein Balken
 *                         gezeichnet werden, bis der Wert 0 eingegeben wird.
 *-----------------------------------------------------------------------------------------------*/

/*Bsp-Ausgabe:
8: ========
3: ===
6: ======
0: (Ende)
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
  int laengeBalken;
  int i;     // zaehler
  int index; // balken Nr

  printf("\n Balkenzeichner ");
  printf("\n================");
  printf("\n Geben Sie die Laengen der Balken ein.\n (0 zum Beenden) \n");

  while (laengeBalken != 0)
  {
    scanf(" %i:", &laengeBalken);
    // printf("");
    for (i = 0; i < laengeBalken; i++)
    {
      printf("=");
    }
    printf("\n");
  }
  if (laengeBalken==0)
  {
    printf("(Ende)\n");
  }

  return 0;
}