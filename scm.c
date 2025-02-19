#include <stdio.h>

void soma(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

// MODF Luan: Remover função multiplica
/*void multiplica(int a, int b) {
    printf("%d x %d = %d\n", a, b, a * b);
}*/

void subtrai(int a, int b){
    if(a-b >= 0)
        printf("%d - %d = %d\n", a, b, a-b);
}

int main() {
    printf("Olá, Estudante!\n");
    soma(5, 3);
    multiplica(5, 3);
    subtrai(5,3);
    return 0;
}
