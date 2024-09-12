#include <stdio.h>
#include <string.h>

char tracks[][80] = {
    "I left my heart in Harvard Med School",
    "Newark, Newark - a wonderful town",
    "Dancing with a Dork",
    "From here to maternity",
    "The girl from Iwo Jima"
};

void print_song_list();
void print_song_addresses();
void find_track(char[]);

int main() {
    char search_for[80];

    print_song_list();
    print_song_addresses();

    printf("\nSearch for: ");
    scanf("%79s", &search_for);
    
    find_track(search_for);

    return 0;
}

void print_song_list() {
    printf("\nList of songs: \n");
    for (int i = 0; i < 5; i++) 
        printf("%i. %s\n", i+1, tracks[i]);
}

void print_song_addresses() {
    printf("\nSong addresses\n");
    for (int i = 0; i < 5; i++) 
        printf("Address of %i track is %p\n", i+1, &tracks[i]);
}

void find_track(char search_for[]) {
    printf("\nResults:\n");
    for (int i = 0; i < 5; i++) {
        if(strstr(tracks[i], search_for))
            printf("Track %i: %s\n", i+1, tracks[i]);
    }
}