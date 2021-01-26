#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  float varVir = 0;
  
  printf("Entrez le numero du fichier a analyser");
  scanf("%f", &varVir);
  
  if(varVir >= 1000)
  {
    printf("Alerte ! UN LOGICIEL MALVEILLANT A ETE DETECTE !");
  }
}
