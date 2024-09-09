#include <stdio.h>

void fortune_cookie(char msg[], int size) {
    printf("Message reads: %s\n", msg);
    printf("The message string is stored at: %p\n", msg);
    
    // For output every single character <-- It will display only first word (8 symbols)
    for (int i = 0; i < size; i ++) {
        printf("The %i character (%c) is stored at %p\n", i+1, msg[i], &msg[i]);
    }
    
    printf("msg occupies %i bytes\n", sizeof(msg)); // Size of string is just the size of a pointer (that`s why is equals to 8)
    printf("msg pointer occupies %d bytes\n", sizeof(&msg)); // Pointer in 64-bit OS is equals to 8
}

int main() {

    char quote[] = "Cookies make you fat";
    fortune_cookie(quote, sizeof(quote));
    printf("\nWithout function\n");
    printf("The quote string is stored at: %p\n", quote);

    // For output every single character <-- It will display all words of a string
    for (int i = 0; i < sizeof(quote); i++) {
        printf("The %i character (%c) is stored at: %p\n", i+1, quote[i], &quote[i]); 
    }

    printf("quote occupies %d bytes\n", sizeof(quote)); 
    
    return 0;
}