#include <stdio.h>
#include <string.h>

int main() {

    // // strlwr(string1);                 - Converts a string to lowercase
    // // strupr(string1);                 - Converts a string to uppercase
    // // strcat(string1, string2);        - Appends string2 to end of string1
    // // strncat(string1, string2, n);    - Appends n characters from string2 to string1
    // // strcpy(string1, string2);        - Copy string2 to string1
    // // strncpy(string1, string2, n);    - Copy n characters of string2 to string1

    char string1[] = "Jame";
    char string2[] = "Wazowski";
    int additional_symbols = 3;

    // printf("Normal case - %s (of string1)\n", string1);
    // printf("Lowercase - %s\n", strlwr(string1));
    // printf("Uppercase - %s\n", strupr(string1));

    // printf("(second string is %s)\n", string2);
    // printf("Appends string2 to end of string1 - %s\n", strcat(string1, string2));

    // char symbol;
    // printf("Please enter one symbol: ");
    // scanf("%c", &symbol);
    
    // printf("How namy symbols you wants to use in string function? ");
    // scanf("%d", &additional_symbols);

    // printf("Appends %d characters - %s\n", additional_symbols, strncat(string1, string2, additional_symbols));

    // printf("Copy - %s\n", strcpy(string1, string2));
    // printf("string1 now is %s\n", string1);

    // printf("strncpy(Jame, Wazowski, %d) - %s\n", additional_symbols, strncpy(string1, string2, additional_symbols));

    // // strset(string1, '?');             - sets all characters of a string to a given character
    // // strnset(string1, 'x', n);         - sets first n characters of a string to a given character
    // // strrev(string1);                  - reverses a string

    // printf("strset(Jame, %c) - %s\n", symbol, strset(string1, symbol));
    // printf("strnset(Jame, %c, %d) - %s\n", symbol, additional_symbols, strnset(string1, symbol, additional_symbols));
    // printf("strrev(Wazowski) - %s", strrev(string2));

    // int result = strlen(string1);
    // int result = strcmp(string1, string2);
    // int result = strncmp(string1, string2, additional_symbols);
    // int result = strcmpi(string1, string2);
    int result = strnicmp(string1, string2, 1);
    
    if (result == 0) {
        printf("These strings are the same");
    } else {
        printf("These strings are not the same");
    }

    printf("\n%d\n", result);

    return 0;
}