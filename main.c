#include <stdio.h>
int main() {
  fibonacci(1);
  return 0;
}
int fibonacci(int a){
  int aux, i;
  int ant1 = 0;
  int ant2 = 1;

  for(i=0 ; i<a ; i=i+1){
    aux = ant1 + ant2;
    ant2 = ant1;
    ant1 = aux;
    printf("%i\n", ant2);
  }
  printf("\n%i\n", ant1);
}
