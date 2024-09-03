#include <stdio.h>
#include <string.h>

typedef struct {
    char name[25];
    char password[16];
    int id;
} User;

int main() {

    User user1 = {"Jame", "123456789", 12345};
    User user2 = {"Wazowski", "987654321", 93423};

    printf("User 1 - %s, %s, %d\n", user1.name, user1.password, user1.id);
    printf("User 2 - %s, %s, %d\n", user2.name, user2.password, user2.id);

    return 0;
}