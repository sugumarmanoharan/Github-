#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char number[20];
    int i, valid = 1;

    printf("Enter phone number: ");
    scanf("%s", number);

    // Check length
    if (strlen(number) != 10) {
        valid = 0;
    }

    // Check all digits
    for (i = 0; i < strlen(number); i++) {
        if (!isdigit(number[i])) {
            valid = 0;
            break;
        }
    }

    // Check starting digit
    if (!(number[0] == '6' || number[0] == '7' || 
          number[0] == '8' || number[0] == '9')) {
        valid = 0;
    }

    // Output result
    if
