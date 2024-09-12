#include <stdio.h>
#include <string.h>

int main() {
    char tracks[][80] = {
        "I left my heart in Harvard Med School",
        "Newark, Newark - a wonderful town",
        "Dancing with a Dork",
        "From here to maternity",
        "The girl from Iwo Jima"
    };

    printf("List of songs:\n");
    for (int i = 0; i < 5; i++) {
        printf("%i. %s\n", i+1, tracks[i]);
    }

    printf("\nAddresses of songs:\n");
    for (int i = 0; i < 5; i++) {
        printf("Song number %i is allocated at %p\n", i+1, &tracks[i]);
    }

    char suggestion[20];
    printf("Please enter the word from song name: ");
    // fgets(suggestion, sizeof(suggestion), stdin);
    scanf("%19s", suggestion);
    
    for (int i = 0; i < 5; i++) {
        if (strstr(tracks[i], suggestion)) {
            printf("Song number %i have word \"%s\" - %s\n", i+1, suggestion, tracks[i]);
        }
    }

    return 0;
}