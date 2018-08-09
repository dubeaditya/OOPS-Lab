#include <stdio.h>

int strend(char *s, char *t);

#define SIZE 16

int main() {
    char helloWorld[SIZE] = "Hello world!";
    char justWorld[SIZE] = "world!";

    if (strend(helloWorld, justWorld))
        printf("justWorld occurs at the end of helloWorld\n");
    else
        printf("justWorld DOES NOT occur at the end of helloWorld\n");
    return 0;
}

int strend(char *s, char *t) {
    while (*s++) {
        if (*t == *s) {
            while ((*s++ == *t++) && (*t != '\0')) ;
            if (*s == '\0' && *t == '\0')
                return 1;
            return 0;
        }
    }
    return 0;
}
