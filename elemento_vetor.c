#include <stdio.h>
#include <math.h>

void main() {
  const n = 10; 
  int a[n], b[n]; 
  int i; 

  for (i=0; i<n; i++) {
    printf("Informe os elementos em ordem do vetor A: ", (i+1), n);
    scanf("%d", &a[i]);
  }

  for (i=0; i<n; i++) {
    b[i] = a[i] + i;
  }

  printf("\n\ni- a[i]   b[i] = a[i] + i\n");
  for (i=0; i<n; i++) {
    printf("%d- %4d   %4d\n", i, a[i], b[i]);
  }
}
