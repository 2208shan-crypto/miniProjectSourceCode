#include <stdio.h>

struct clientData {
    unsigned int acctNum;
    char lastName[15];
    char firstName[10];
    char pin[5];
    double balance;
};

int main() {
    FILE *fPtr;
    struct clientData blankClient = {0, "", "", "0000", 0.0};

    if ((fPtr = fopen("clients.dat", "wb")) == NULL) {
        puts("File could not be opened.");
        return 1;
    }

    for (int i = 1; i <= 100; ++i) {
        fwrite(&blankClient, sizeof(struct clientData), 1, fPtr);
    }

    fclose(fPtr);
    puts("Database formatted successfully with 100 blank PIN records.");
    return 0;
}
