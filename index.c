#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a ; 
   
    scanf ("%d", &a);

    if (a % 2 == 0) {
        printf ("Genap");
    } else { printf ("Ganjil");
    }
    return 0;
}