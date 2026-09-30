#include <stdio.h>

int main() {
    int max_semilla = -1;
    int mejor_n = 1;


    for (int i = 1; i <= 10000; i++) {
        long long num = i; 
        int pasos = 0;

        
        while (num != 1) {
            if (num % 2 == 0) {
                num = num / 2;
            } else {
                num = num * 3 + 1;
            }
            pasos++;
        }

        
        if (pasos > max_semilla) {
            max_semilla = pasos;
            mejor_n = i;
        }
    }

 
    printf("Mayor semilla en [1, 10000]: n = %d, semilla = %d\n", mejor_n, max_semilla);

    return 0;
}