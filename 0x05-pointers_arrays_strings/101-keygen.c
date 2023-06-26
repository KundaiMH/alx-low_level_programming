#include "main.h"

void generatePassword(char *password, int length)
{
    // Define the set of valid characters for the password
    const char validCharacters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    int i;
    for (i = 0; i < length; i++) {
        int index = rand() % (sizeof(validCharacters) - 1); // Generate random index within validCharacters length
        password[i] = validCharacters[index]; // Assign random character to password
    }
    password[length] = '\0'; // Add null terminator to the end of the password
}
