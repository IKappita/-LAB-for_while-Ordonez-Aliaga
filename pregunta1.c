#include <stdio.h>
int main() {
    int n;
    printf("Ingrese n:");
    scanf("%d",&n);
    while (n>=10) {
        int aux=n;
        int suma=0;
        while (aux>0) {
            suma +=aux%10;
            aux/=10;
        }
        n=suma;
        printf("%d",n);
    }
    printf("\n");
    printf("raiz: %d\n",n);

    return 0;
}
