#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  float varVir = 0;
  
  printf("\n");
  printf("Entrez le numero du fichier a analyser\n");
  scanf("%f", &varVir);
  
  if(varVir >= 1000)
  {
    printf("Alerte ! UN LOGICIEL MALVEILLANT A ETE DETECTE !\n");
  }
  else if(varVir >= 700)
  {
    printf("Alerte ! Logiciel potentiellement malveillant detecte !\n");
  }
  else
  {
    printf("Aucun logiciel malveillant detecte");
  }
}
