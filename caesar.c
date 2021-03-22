#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

/* Charles Thomas Wallace Truscott for HarvardX */
/* Caesar Cipher */

string get_text();
string encrypt(string input_text, int rotor);



int main(int argc, char * argv[]) {
    /* Treat argv as string, ensure no more than 2 (argv[1]) command line arguments are provided */
    char * command_line_one = argv[1];
    bool incorrect_argument = false;
    char * end_pointer;
    if(!argv[1]) {
        printf("usage: %s %s\t%s", argv[0], "key", "E.G. ./caeser 1024");
        printf("\n\n");
        exit(1);
    }
    while(* command_line_one != '\0') {
        if(!(isdigit(* command_line_one))) {
            incorrect_argument = true;
        } else if (strtol(command_line_one, &end_pointer, 10) < 0) {
            incorrect_argument = true;
        }
        ++command_line_one;
    }
    if(incorrect_argument == true) {
        printf("usage: %s %s\t%s", argv[0], "key", "E.G. ./caeser 1024");
        printf("\n\n");
        exit(1);
    }
    /* For char * of argv, replace each letter with ASCII math formula to only return modulo the A-Z charset of the ASCII encoding in C */
    /*
    printf("Command line args: %s", argv[1]);
    printf("\nIntegers: %li\tInteger plus 10: %li\n", strtol(argv[1], &end_pointer, 10), strtol(argv[1], &end_pointer, 10));
    printf("\n");
    */
    encrypt(get_text(), strtol(argv[1], &end_pointer, 10));

    return 0;
}

string get_text(void) {
    string text = get_string("plaintext: ");
    return text;
}

string encrypt(string text, int rotor) {
    string crypto = "Return text";
    char uppercase_letters[] = { '\xFF', 'A', 'B', 'C', 'D', 'E', 'F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char lowercase_letters[] = { '\xFF', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h','i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
    int array_indices_after_modulo = 0;
    printf("ciphertext: ");
    for(char * new = text; * new != '\0'; ++new) {
/*        printf("0x%x ", * new); */
        if (* new == uppercase_letters[1] || * new == lowercase_letters[1]) {
            if (* new == uppercase_letters[1]) {
                array_indices_after_modulo = (1 + (int) rotor) % 26;
                printf("%c", uppercase_letters[array_indices_after_modulo]);
            } else if (* new == lowercase_letters[1]) {
               array_indices_after_modulo = (1 + (int) rotor) % 26;
               printf("%c", lowercase_letters[array_indices_after_modulo]);
            }
        } else if ( * new == uppercase_letters[2] || * new == lowercase_letters[2] ) {
            if (* new == uppercase_letters[2]) {
               array_indices_after_modulo = (2 + (int) rotor) % 26;
               printf("%c", uppercase_letters[array_indices_after_modulo]);
            } else if (* new == lowercase_letters[2]) {
               array_indices_after_modulo = (2 + (int) rotor) % 26;
               printf("%c", lowercase_letters[array_indices_after_modulo]);
            }
        } else if ( * new == uppercase_letters[3] || * new == lowercase_letters[3] ) {
            if (* new == uppercase_letters[3]) {
                array_indices_after_modulo = (3 + (int) rotor) % 26;
                printf("%c", uppercase_letters[array_indices_after_modulo]);
            } else if (* new == lowercase_letters[3]) {
                array_indices_after_modulo = (3 + (int) rotor) % 26;
                printf("%c", lowercase_letters[array_indices_after_modulo]);
            }

        } else if ( * new == uppercase_letters[4] || * new == lowercase_letters[4] ) {
            if (* new == uppercase_letters[4]) {
                array_indices_after_modulo = (4 + (int) rotor) % 26;
                printf("%c", uppercase_letters[array_indices_after_modulo]);
            } else if (* new == lowercase_letters[4]) {
                array_indices_after_modulo = (4 + (int) rotor) % 26;
                printf("%c", lowercase_letters[array_indices_after_modulo]);
            }

        } else if ( * new == uppercase_letters[5] || * new == lowercase_letters[5] ) {
            if (* new == uppercase_letters[5]) {
                array_indices_after_modulo = (5 + (int) rotor) % 26;
                printf("%c", uppercase_letters[array_indices_after_modulo]);
            } else if (* new == lowercase_letters[5]) {
                array_indices_after_modulo = (5 + (int) rotor) % 26;
                printf("%c", lowercase_letters[array_indices_after_modulo]);
            }

        } else if ( * new == uppercase_letters[6] || * new == lowercase_letters[6] ) {
            if (* new == uppercase_letters[6]) {
                array_indices_after_modulo = (6 + (int) rotor) % 26;
                printf("%c", uppercase_letters[array_indices_after_modulo]);
            } else if (* new == lowercase_letters[6]) {
                array_indices_after_modulo = (6 + (int) rotor) % 26;
                printf("%c", lowercase_letters[array_indices_after_modulo]);
            }

        } else if ( * new == uppercase_letters[7] || * new == lowercase_letters[7] ) {
            if (* new == uppercase_letters[7]) {
                array_indices_after_modulo = (7 + (int) rotor) % 26;
                printf("%c", uppercase_letters[array_indices_after_modulo]);
            } else if (* new == lowercase_letters[7]) {
                array_indices_after_modulo = (7 + (int) rotor) % 26;
                printf("%c", lowercase_letters[array_indices_after_modulo]);
            }

        } else if ( * new == uppercase_letters[8] || * new == lowercase_letters[8] ) {
            if (* new == uppercase_letters[8]) {
                array_indices_after_modulo = (8 + (int) rotor) % 26;
                printf("%c", uppercase_letters[array_indices_after_modulo]);
            } else if (* new == lowercase_letters[8]) {
                array_indices_after_modulo = (8 + (int) rotor) % 26;
                printf("%c", lowercase_letters[array_indices_after_modulo]);
            }

        } else if ( * new == uppercase_letters[9] || * new == lowercase_letters[9] ) {
            if (* new == uppercase_letters[9]) {
                array_indices_after_modulo = (9 + (int) rotor) % 26;
                printf("%c", uppercase_letters[array_indices_after_modulo]);
            } else if (* new == lowercase_letters[9]) {
                array_indices_after_modulo = (9 + (int) rotor) % 26;
                printf("%c", lowercase_letters[array_indices_after_modulo]);
            }

        } else if ( * new == uppercase_letters[10] || * new == lowercase_letters[10] ) {
            if (* new == uppercase_letters[10]) {
                array_indices_after_modulo = (10 + (int) rotor) % 26;
                printf("%c", uppercase_letters[array_indices_after_modulo]);
            } else if (* new == lowercase_letters[10]) {
                array_indices_after_modulo = (10 + (int) rotor) % 26;
                printf("%c", lowercase_letters[array_indices_after_modulo]);
            }

        } else if ( * new == uppercase_letters[11] || * new == lowercase_letters[11] ) {
            if (* new == uppercase_letters[11]) {
                array_indices_after_modulo = (11 + (int) rotor) % 26;
                printf("%c", uppercase_letters[array_indices_after_modulo]);
            } else if (* new == lowercase_letters[11]) {
                array_indices_after_modulo = (11 + (int) rotor) % 26;
                printf("%c", lowercase_letters[array_indices_after_modulo]);
            }

        } else if ( * new == uppercase_letters[12] || * new == lowercase_letters[12] ) {
            if (* new == uppercase_letters[12]) {
                array_indices_after_modulo = (12 + (int) rotor) % 26;
                printf("%c", uppercase_letters[array_indices_after_modulo]);
            } else if (* new == lowercase_letters[12]) {
                array_indices_after_modulo = (12 + (int) rotor) % 26;
                printf("%c", lowercase_letters[array_indices_after_modulo]);
            }

        } else if ( * new == uppercase_letters[13] || * new == lowercase_letters[13] ) {
            if (* new == uppercase_letters[13]) {
                array_indices_after_modulo = (13 + (int) rotor) % 26;
                printf("%c", uppercase_letters[array_indices_after_modulo]);
            } else if (* new == lowercase_letters[13]) {
                array_indices_after_modulo = (13 + (int) rotor) % 26;
                printf("%c", lowercase_letters[array_indices_after_modulo]);
            }

        } else if ( * new == uppercase_letters[14] || * new == lowercase_letters[14] ) {
            if (* new == uppercase_letters[14]) {
                array_indices_after_modulo = (14 + (int) rotor) % 26;
                printf("%c", uppercase_letters[array_indices_after_modulo]);
            } else if (* new == lowercase_letters[14]) {
                array_indices_after_modulo = (14 + (int) rotor) % 26;
                printf("%c", lowercase_letters[array_indices_after_modulo]);
            }
        } else if ( * new == uppercase_letters[15] || * new == lowercase_letters[15] ) {
            if (* new == uppercase_letters[15]) {
                array_indices_after_modulo = (15 + (int) rotor) % 26;
                printf("%c", uppercase_letters[array_indices_after_modulo]);
            } else if (* new == lowercase_letters[15]) {
                array_indices_after_modulo = (15 + (int) rotor) % 26;
                printf("%c", lowercase_letters[array_indices_after_modulo]);
            }

        } else if ( * new == uppercase_letters[16] || * new == lowercase_letters[16] ) {
            if (* new == uppercase_letters[16]) {
                array_indices_after_modulo = (16 + (int) rotor) % 26;
                printf("%c", uppercase_letters[array_indices_after_modulo]);
            } else if (* new == lowercase_letters[16]) {
                array_indices_after_modulo = (16 + (int) rotor) % 26;
                printf("%c", lowercase_letters[array_indices_after_modulo]);
            }

        } else if ( * new == uppercase_letters[17] || * new == lowercase_letters[17] ) {
            if (* new == uppercase_letters[17]) {
                array_indices_after_modulo = (17 + (int) rotor) % 26;
                printf("%c", uppercase_letters[array_indices_after_modulo]);

            } else if (* new == lowercase_letters[17]) {
                array_indices_after_modulo = (17 + (int) rotor) % 26;
                printf("%c", lowercase_letters[array_indices_after_modulo]);

            }

        } else if ( * new == uppercase_letters[18] || * new == lowercase_letters[18] ) {
            if (* new == uppercase_letters[18]) {
                array_indices_after_modulo = (18 + (int) rotor) % 26;
                printf("%c", uppercase_letters[array_indices_after_modulo]);

            } else if (* new == lowercase_letters[18]) {
                array_indices_after_modulo = (18 + (int) rotor) % 26;
                printf("%c", lowercase_letters[array_indices_after_modulo]);

            }

        } else if ( * new == uppercase_letters[19] || * new == lowercase_letters[19] ) {
            if (* new == uppercase_letters[19]) {
                array_indices_after_modulo = (19 + (int) rotor) % 26;
                printf("%c", uppercase_letters[array_indices_after_modulo]);

            } else if (* new == lowercase_letters[19]) {
                array_indices_after_modulo = (19 + (int) rotor) % 26;
                printf("%c", lowercase_letters[array_indices_after_modulo]);

            }

        } else if ( * new == uppercase_letters[20] || * new == lowercase_letters[20] ) {
            if (* new == uppercase_letters[20]) {
                array_indices_after_modulo = (20 + (int) rotor) % 26;
                printf("%c", uppercase_letters[array_indices_after_modulo]);

            } else if (* new == lowercase_letters[20]) {
                array_indices_after_modulo = (20 + (int) rotor) % 26;
                printf("%c", lowercase_letters[array_indices_after_modulo]);

            }

        } else if ( * new == uppercase_letters[21] || * new == lowercase_letters[21] ) {
            if (* new == uppercase_letters[21]) {
                array_indices_after_modulo = (21 + (int) rotor) % 26;
                printf("%c", uppercase_letters[array_indices_after_modulo]);

            } else if (* new == lowercase_letters[21]) {
                array_indices_after_modulo = (21 + (int) rotor) % 26;
                printf("%c", lowercase_letters[array_indices_after_modulo]);

            }

        } else if ( * new == uppercase_letters[22] || * new == lowercase_letters[22] ) {
            if (* new == uppercase_letters[22]) {
                array_indices_after_modulo = (22 + (int) rotor) % 26;
                printf("%c", uppercase_letters[array_indices_after_modulo]);

            } else if (* new == lowercase_letters[22]) {
                array_indices_after_modulo = (22 + (int) rotor) % 26;
                printf("%c", lowercase_letters[array_indices_after_modulo]);

            }

        } else if ( * new == uppercase_letters[23] || * new == lowercase_letters[23] ) {
            if (* new == uppercase_letters[23]) {
                array_indices_after_modulo = (23 + (int) rotor) % 26;
                printf("%c", uppercase_letters[array_indices_after_modulo]);

            } else if (* new == lowercase_letters[23]) {
                array_indices_after_modulo = (23 + (int) rotor) % 26;
                printf("%c", lowercase_letters[array_indices_after_modulo]);

            }

        } else if ( * new == uppercase_letters[24] || * new == lowercase_letters[24] ) {
            if (* new == uppercase_letters[24]) {
                array_indices_after_modulo = (24 + (int) rotor) % 26;
                printf("%c", uppercase_letters[array_indices_after_modulo]);

            } else if (* new == lowercase_letters[24]) {
                array_indices_after_modulo = (24 + (int) rotor) % 26;
                printf("%c", lowercase_letters[array_indices_after_modulo]);

            }

        } else if ( * new == uppercase_letters[25] || * new == lowercase_letters[25] ) {
            if (* new == uppercase_letters[25]) {
                array_indices_after_modulo = (25 + (int) rotor) % 26;
                printf("%c", uppercase_letters[array_indices_after_modulo]);

            } else if (* new == lowercase_letters[25]) {
                array_indices_after_modulo = (25 + (int) rotor) % 26;
                printf("%c", lowercase_letters[array_indices_after_modulo]);

            }

        } else if ( * new == uppercase_letters[26] || * new == lowercase_letters[26] ) {
            if (* new == uppercase_letters[26]) {
                array_indices_after_modulo = (26 + (int) rotor) % 26;
                printf("%c", uppercase_letters[array_indices_after_modulo]);

            } else if (* new == lowercase_letters[26]) {
                array_indices_after_modulo = (26 + (int) rotor) % 26;
                printf("%c", lowercase_letters[array_indices_after_modulo]);

            }

        } else if (* new == ' ') {
            printf(" ");
        } else if ( * new == '.' ) {
            printf(".");
        } else if (* new == '?') {
            printf("?");
        } else if (* new == ',' ) {
            printf(",");
        }
    }
    /* Array indices modulo 26 selected as via argv[1] */
    /* A B C D E F G H I J K L M N O P Q R S T U V W X Y Z */
    /* 0x41 0x42 0x43 0x44 0x45 0x46 0x47 0x48 0x49 0x4a 0x4b 0x4c 0x4d 0x4e 0x4f 0x50 0x51 0x52 0x53 0x54 0x55 0x56 0x57 0x58 0x59 0x5a */
    printf("\n\n");
    return crypto;
}
