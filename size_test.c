#include <stdio.h>
struct clientData {
    unsigned int acctNum;
    char lastName[15];
    char firstName[10];
    double balance;
};

int main() {
    printf("Sizeof struct: %zu\n", sizeof(struct clientData));
    return 0;
}
