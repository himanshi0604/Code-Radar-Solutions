#include<stdio.h> 
#include<string.h> 
int main() {
    char str[40];

    fgets(str, sizeof(str), stdin);

    // Calculate the size of the string
    int size = 0;
    int i = 0;
    while (str[i] != '\0') {
        size++;
        i++;
    }

    // Remove the newline character if fgets reads it
    if (str[size - 1] == '\n') {
        str[size - 1] = '\0';
        size--;  // Adjust size after removing the newline
    }

    // Reverse the string
    for (int k = 0, j = size - 1; k < j; k++, j--) {
        // Swap characters
        char temp = str[k];
        str[k] = str[j];
        str[j] = temp;
    }

    // Print the reversed string
    puts(str);

    return 0;
}
