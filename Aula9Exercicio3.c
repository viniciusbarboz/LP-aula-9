
#include <stdio.h>

void subtrai3(int *x) {
    *x = *x - 3;
    
}


int main() {
    
    int n;

    
    printf("Digite um numero: ");
    scanf("%d", &n);
    
  
    subtrai3(&n);
    
    
    printf("Resultado: %d\n", n);
    printf("Atual:%d",n);
    
    

    return 0;
}
