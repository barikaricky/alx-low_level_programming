#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: source address
 * @to: target address.
 */
void set_string(char **s, char *to) {
    // Check if s is not NULL, and if it is, free the memory
    if (*s != NULL) {
        free(*s);
    }

    // Allocate memory for the new string and copy 'to' into it
    *s = (char *)malloc(strlen(to) + 1); // +1 for the null terminator
    if (*s != NULL) {
        strcpy(*s, to);
    } else {
        // Handle memory allocation failure here if needed
    }
}

int main() {
    char *str = NULL;
    char newStr[] = "Hello, World!";
    
    set_string(&str, newStr);
    
    // Print the updated string
    if (str != NULL) {
        printf("Updated String: %s\n", str);
        free(str); // Don't forget to free the memory when done
    }
    
    return 0;
}
