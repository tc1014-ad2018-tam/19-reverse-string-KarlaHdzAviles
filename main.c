/*This program helps the user by putting the string entered and printing it in the reverse
 *
 * Author: Karla Alexandra Hernandez Aviles
 * Email: A01411843@itesm.mx
 * Date: 18/10/2018
 */

 //Libraries that the program use
#include <stdio.h>
#include <string.h>

int main() {
    //Declaration of variable.
    char str[100];       //str=string

    //In this part the program ask to the user for a string
    printf("Welcome user, this program will help you. Please enter a text:");
    fgets(str, sizeof(str), stdin);

    //In this part the program print in reverse
    printf("Your text in reverse order is:");

    // This part print every character in the string.
    for (int i = strlen(str); i > 0; i--) {
        printf("%c", str[i - 1]);
    }

    return 0;
}