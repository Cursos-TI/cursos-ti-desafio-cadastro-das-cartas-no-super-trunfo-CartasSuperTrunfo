#include <stdio.h>
int main() {

    int a = 5;
    int b = 10;
    int c = 1;

    // a > 0 = Verdadeiro
    // b < 0 = Verdadeiro
    // Verdadeiro && Verdadeiro => Verdadeiro
    // Verdadeiro || c == 0
    // Verdadeiro || Falso => Verdadeiro

    
    if (a > 0 && b < 0 || c == 0) {
        print(" A condição é verdadeira\n");
    } else {
        printf("A condição é falsa\n");

}