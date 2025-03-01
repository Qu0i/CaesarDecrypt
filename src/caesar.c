#include "caesar.h"
#include <stdio.h>
#include <stdlib.h>

char *decryptCaesar(const char *text, int shift) {
    int len = 0;
    while(text[len] != '\0') {
        len++;
    }

    char *decrypted = malloc(len + 1);
    if (decrypted == NULL) {
        return NULL;
    }

    for(int i = 0; i < len; i++) {
        char c = text[i];

        if (c >= 'a' && c <= 'z') {
            decrypted[i] = (c - 'a' - shift + 26) % 26 + 'a'; 
        }
        else if (c >= 'A' && c <= 'Z') {
            decrypted[i] = (c - 'A' - shift + 26) % 26 + 'A';
        }
        else {
            decrypted[i] = c;  
        }
    } 

    decrypted[len] = '\0';
    return decrypted;
}

