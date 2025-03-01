#include <stdio.h>
#include <stdlib.h> 
#include <windows.h>

#include "caesar.h"

#define MAX_SIZE 100

int main() {
    printf("Welcome to Caesar decryptor!\n"); 

    char input[MAX_SIZE];  
    printf("Enter the text for decryption: "); 
    fgets(input, sizeof(input), stdin);

    int shift;
    printf("Enter shift: ");
    scanf("%d", &shift);
    getchar();  

    char *decrypted = decryptCaesar(input, shift);
    printf("Decrypted text: %s\n", decrypted);
    free(decrypted);

    printf("Press Enter to exit...");
    getchar();
    return 0;
}
