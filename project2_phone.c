//Name:Moosa Shehzad abbasi
//U#:U37033529
//Description:This program converts the last seven letters in a user input representing a phone number into their corresponding digits using a standard telephone keypad mapping.It reads user input using getchar(), processes characters with a do-while loop,and converts letters using a switch statement.
 
#include <stdio.h>
int main() {
    char ch;
    printf("Enter phone number: ");//enter your number
    
    do {
        ch = getchar();
        
        //if character is a lowercase letter, convert to uppercase
        if (ch >= 'a' && ch <= 'z') {
            ch -= 32;
        }

        switch (ch) {//the switch structure
            case 'A': case 'B': case 'C':
                putchar('2');                 //if the char is A OR B OR C, put letter 2 instead
                break;
            case 'D': case 'E': case 'F':
                putchar('3');                 //if the char is D OR E OR F, put letter 3 instead
                break;
            case 'G': case 'H': case 'I':
                putchar('4');                 //if the char is G OR H OR I, put letter 4 instead
                break;
            case 'J': case 'K': case 'L':
                putchar('5');                 //if the char is J OR K OR L, put letter 5 instead
                break;
            case 'M': case 'N': case 'O':
                putchar('6');                 //if the char is M OR N OR O, put letter 6 instead
                break;
            case 'P': case 'Q': case 'R': case 'S':
                putchar('7');                 //if the char is P OR Q OR R, put letter 7 instead
                break;
            case 'T': case 'U': case 'V':
                putchar('8');                 //if the char is T OR U OR V, put letter 8 instead
                break;
            case 'W': case 'X': case 'Y': case 'Z':
                putchar('9');                 //if the char is W OR X OR Y OR Z, put letter 9 instead
                break;
            default:
                putchar(ch);        //print non-letter characters as they are
        }
    } while (ch != '\n');  //continue till the newline is entered
    
    return 0;
}
