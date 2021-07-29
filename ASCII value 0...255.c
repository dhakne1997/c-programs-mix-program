/* Write a program to print all the ASCII values and their equivalent characters
 using a while loop. 
The ASCII values vary from 0 to 255 */

#include<stdio.h>  
  
int main()  
{  
    int count;  
  
    for(count = 0; count <= 255; count++)  
    {  
        printf("ASCII value of %c is %d\n", count, count);  
    }  
  
    return 0;  
}  