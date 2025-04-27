#include <stdbool.h>
#include <stdio.h>
#include "parsexec.h"

static char input[100] = "look around";

static bool getInput(void) {
    printf("\n--> ");
    return fgets(input, sizeof input, stdin) != NULL;
}

int main(void) {
    printf("Welcome to Litle Cave Adventure.\n");
    while (parseAndExecute(input) && getInput());
    printf("\nBye!\n");
    return 0;
}
