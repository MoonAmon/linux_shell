
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int soma = 0, n, count = 0;
    float md;

    do {
        printf("Digite números positivos: \n");
        scanf("%d", &n);
        if (n > 0) {
            soma += n;
            count++;
        }
    } while (n > 0);

    md = (float) soma / count;
    printf("média = %.2f\nsoma = %d\n", md, soma);

    return 0;
}