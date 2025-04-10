
#include <stdio.h>

int subtrai3(int *x) {
    *x = *x - 3;
    return *x; 
}


int main() {
    
    int n;

    
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    printf("Numero recebido: %d\n", n);
    int re = subtrai3(&n);
    
    
    printf("Resultado: %d\n", re);
    printf("Atual:%d",n);
    
    

    return 0;
}