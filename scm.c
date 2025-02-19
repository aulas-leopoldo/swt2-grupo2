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

void divide(int a, int b) {
    if (b==0){
    printf("divisão não permitida\n");
    }
    else{
    printf("%d / %d = %d\n", a, b, a / b);
    }
}

char * getTimeAndDate(){
    time_t t = time(NULL);
    return ctime(&t);
}


int main() {
    printf("Ola, Estudante! - %s\n", getTimeAndDate());
    soma(5, 3);
 //   multiplica(5, 3);
    divide(9, 3);
    divide(5, 0);
    subtrai(5,3);
    return 0;
}
