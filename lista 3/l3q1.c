#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15
#define MAX 21

int main() {
  float nums[TAM];

  srand(time(NULL));
  for (char i = 0; i<TAM; i++) {
    nums[i] = ( (float) (rand() % MAX) / MAX) * 100 - rand() % MAX;
  }
  
  for (char i = 0; i<TAM; i++) {
    printf("%.2f\n", nums[i]);
  }
  printf("\n");

  float maior, menor;

  for (char i = 0; i < TAM; i++) {
    if(i == 0) {
      maior = menor = nums[i];
    } else {
      printf("1 - num: %.1f, maior: %.1f, menor: %.1f\n", nums[i], maior, menor);
      if (nums[i] < menor) {
        menor = nums[i];
      } 
      if (nums[i] > maior) {
        maior = nums[i];
      }
      printf("2 - num: %.1f, maior: %.1f, menor: %.1f\n\n", nums[i], maior, menor);
    }
  }

  float soma = maior + menor;
  printf("A soma do maior (%.1f) com o menor (%.1f) é %.1f\n", maior, menor, soma);


  return 0;
}