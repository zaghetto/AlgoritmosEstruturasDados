#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10000
#define L 10

int main()
{
int i, numero;

int histograma[L] = {0,0,0,0,0,0,0,0,0,0};

srand(time(NULL));

for(i=0;i<N; i++){
    numero = rand()%10;
    histograma[numero]++;
}

for(i=0;i<L; i++){
    printf("%d | %d \n", i, histograma[i]);
}

return 0;

}
