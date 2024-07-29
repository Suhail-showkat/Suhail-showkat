#include <stdio.h>
int main() {
   char line[15000];
   
   printf("Enter a string: ");
   //fgets is used to safely read a line of input,spaces, and handles buffer overflow by specifying the size of the array
   fgets(line, sizeof(line), stdin); // take input
//line is where the input will be stored.
//sizeof(line) is the maximum amount of input to read.
//stdin tell's the computer to take input from the keyboard

   for (int i = 0, j; line[i] != '\0'; ++i) {

      // enter the loop if the character is not an alphabet
      // and not the null character
      while (!(line[i] >= 'a' && line[i] <= 'z') && !(line[i] >= 'A' && line[i] <= 'Z') && !(line[i] == '\0')) {
         for (j = i; line[j] != '\0'; ++j) {

            // if jth element of line is not an alphabet,
            // assign the value of (j+1)th element to the jth element
            line[j] = line[j + 1];
         }
         line[j] = '\0';
      }
   }
   printf("Output String: ");
   puts(line);
   return 0;
}

