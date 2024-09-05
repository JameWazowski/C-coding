#include <stdio.h>

void writeInFile(char login[25], char password[25]) {
    FILE *pF = fopen("Credentials.txt", "w");

    fprintf(pF, "Login - %s\nPassword - %s", login, password);

    fclose(pF);
}

int main() {

    char login[25];
    char password[25];

    printf("SIGN UP!!!\n");
    
    printf("Login: ");
    scanf("%s", &login);

    printf("Password: ");
    scanf("%s", &password);

    writeInFile(login, password);

    return 0;
}