#include <stdio.h>
#include <time.h>

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

char * getTimeAndDate(){
    time_t t = time(NULL);
    return ctime(&t);
}


int main() {
    // MODF: Modificar o programa para solicitar o nome do usuário e personalizar a saudação
	//printf("Ola, Estudante!\n");
    char nome[60];
    printf("Digite seu nome: ");
    scanf("%59s", nome);
    printf("Ola, %s! - %s\n",nome, getTimeAndDate());
    soma(5, 3);
    multiplica(5, 3);
    subtrai(5,3);
    return 0;
}
