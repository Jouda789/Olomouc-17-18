#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void print_first_letters(char *input)
{        
    // Check the argument validity.
    if(input == NULL) return;        
    // Get the length of the input string.
    int length = strlen(input);
    // Print the very first character, if it is a valid one.
    if(input[0] != ' ' && input[0] != '\0') printf("%c\n", input[0]);
    // Loop over the string, character by character.
    for(int i = 0; i < length; i++){      
        // Check if the current character is a whitespace.      
        if(input[i] == ' '){
            // If there is a next character, and it is NOT a whitespace, print it!
            if(i + 1 < length && input[i + 1] != ' '){
                printf("%c\n", input[i + 1]);
            }
        }
    }
}


int main()
{
  char *word = "could harold eat eight salami elephants"; 
  
  print_first_letters(word);

  return 0;
}
