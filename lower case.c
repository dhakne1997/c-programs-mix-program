/*Using conditional operators determine:
(1) Whether the character entered through the keyboard is a lower case alphabet or not.
(2) Whether a character entered through the keyboard is a special symbol or not.*/


#include<stdio.h>
int main()
{
char charac;


printf("Enter the character to be detected:");
scanf("%c", &charac);

((charac>=97) && (charac<=122))?(printf("\nLower Case")):(printf("\nNot a Lower Case character"));

/*For detection of Special Symbols*/

(((charac>=0) && (charac<=47)) || ((charac>=58) && (charac<=64))|| ((charac>=91) && (charac<=96))|| ((charac>=123) && (charac<=127)))? (printf("\nSpecial Symbol")):(printf("\nNot a Special Symbol"));

}


