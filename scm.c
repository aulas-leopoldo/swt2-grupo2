#include <stdio.h>
#include <time.h>

void soma(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

void multiplica(int a, int b) {
    printf("%d x %d = %d\n", a, b, a * b);
}

char * getTimeAndDate(){
    time_t t = time(NULL);
    return ctime(&t);
}


int main() {
    printf("Ola, Estudante! - %s\n", getTimeAndDate());
    soma(5, 3);
    multiplica(5, 3);
    return 0;
}
