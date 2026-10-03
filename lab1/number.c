#include <stdio.h>
 
int main() {
    int number;                      // declare an integer variable
 
    printf("Enter a number: ");
    scanf("%d", &number);            // read from keyboard (stdin)
 
    printf("You entered: %d\n", number);
    return 0;
}
