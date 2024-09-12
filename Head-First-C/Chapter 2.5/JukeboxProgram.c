#include <stdio.h>
#include <string.h>

void find_track(char song_list[][80], char search_for[]) {
    for (int i = 0; i < 5; i++) {
        if(strstr(song_list[i], search_for))
            printf("Track %i: %s\n", i+1, song_list[i]);
    }
}

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
    printf("\nPlease enter the word from song name: ");
    scanf("%19s", suggestion);

    printf("\nOutput: \n");
    for (int i = 0; i < 5; i++) {
        if (strstr(tracks[i], suggestion)) {
            printf("Song number %i have word \"%s\" - %s\n", i+1, suggestion, tracks[i]);
        }
    }

    printf("\nOutput with separate function:\n");
    find_track(tracks, suggestion);

    return 0;
}