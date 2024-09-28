#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int width;
    int height;
} rectangle;

int compare_scores(const void*, const void*);
int compare_scores_desc(const void*, const void*);
int compare_areas(const void*, const void*);
int compare_names(const void*, const void*);
int compare_areas_desc(const void*, const void*);
int compare_names_desc(const void*, const void*);

int main() {

    int scores[] = {543,323,32,554,11,3,112};
    int i;
    qsort(scores, 7, sizeof(int), compare_scores);
    puts("\nThese are the scores in order:");
    for (i = 0; i < 7; i++)
        printf("Score = %i\n", scores[i]);

    qsort(scores, 7, sizeof(int), compare_scores_desc);
    puts("\nThese are the scores in reversed order");
    for (i = 0; i < 7; i++)
        printf("Score = %i\n", scores[i]);

    char *names[] = {"Karen", "Mark", "Brett", "Molly"};
    qsort(names, 4, sizeof(char*), compare_names);
    puts("These are the names in order:");
    for (i = 0; i < 4; i++)
        printf("%s\n", names[i]);
    
    return 0;
}

int compare_scores(const void* score_a, const void* score_b) {
    int a = *(int*)score_a;
    int b = *(int*)score_b;
    return a - b;
}

int compare_scores_desc(const void* score_a, const void* score_b) {
    int a = *(int*)score_a;
    int b = *(int*)score_b;
    return b - a;
}

int compare_areas(const void* a, const void* b) {
    rectangle x = *(rectangle*)a;
    rectangle y = *(rectangle*)b;
    int square1 = x.width * x.height;
    int square2 = y.width * y.height;
    return square1 - square2;
}

int compare_names(const void* a, const void* b) {
    char** a_name = (char**)a;
    char** b_name = (char**)b;
    return strcmp(*a_name, *b_name);
}

int compare_areas_desc(const void* a, const void* b) {
    return compare_areas(b, a);
}

int compare_names_desc(const void* a, const void* b) {
    return compare_names(b, a);
}