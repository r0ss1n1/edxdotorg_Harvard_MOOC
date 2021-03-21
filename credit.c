#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
// Please view satanicritualabuse.wordpress.com
bool is_mastercard(long credit_card_number);
bool is_visa(long credit_card_number, int len);
bool is_american_express(long credit_card_number);
bool are_all_digits(char * credit_card_number, char * credit_copy);
long convert_to_long(char * to_be_converted);
bool is_valid(char * credit_card_number, char * card_type, int len);

int check_number(void);

int prototype(void);

bool mastercard = false;
bool visa = false;
bool american_express = false;
char * element_for_sizeof = "0987654321234567";

/* Charles Thomas Wallace Truscott, HarvardX Assignment `credit.c` */
/* With thanks to my Harvard lecturers and EdX.org */

int main(void) {

    check_number();
/*
    for(int i = 0; i <= 16; ++i) {
        printf("%s", credit_card_number);
    }
*/
    return 0;
}

int check_number() {
    char * credit_card_number;
    bool is_a_visa;
    bool is_a_mastercard;
    bool is_an_american_express;
    bool is_a_valid_card;
    bool is_invalid;
    char * end_pointer;
    credit_card_number = get_string("Number: \n");
    if((strlen(credit_card_number)) != 16 && (strlen(credit_card_number)) != 15 && (strlen(credit_card_number)) != 13) {
        printf("INVALID\n");
    } else if ((are_all_digits(credit_card_number, credit_card_number)) == true) {
        printf("INVALID");
    } else if ((strlen(credit_card_number) == 16) && is_mastercard(strtol(credit_card_number, &end_pointer, 10))) {
        is_a_mastercard = true;
        printf("\nMASTERCARD\n");
    } else if (((strlen(credit_card_number) == 16) && (is_visa(strtol(credit_card_number, &end_pointer, 10), (int) 16)))) {
        is_a_visa = true;
        printf("\nVISA\n");
    } else if (((strlen(credit_card_number) == 13) && (is_visa(strtol(credit_card_number, &end_pointer, 10),(int) 13)))) {
        is_a_visa = true;
        printf("\nVISA\n");
    } else if ((strlen(credit_card_number) == 15) && is_american_express(strtol(credit_card_number, &end_pointer, 10))) {
        is_an_american_express = true;
        printf("\nAMEX\n");
    }


/*
    long double credit_card_number_float = (long double) strtol(credit_card_number, &end_pointer, 10);
    long credit_card_number_long = strtol(credit_card_number, &end_pointer, 10);
    int curr_digit = floor(log10(credit_card_number_long)) + 1;
    int credit_array[curr_digit];
    printf("\n%d\n", curr_digit);
    int i = curr_digit;
    while(i > 0) {
        credit_array[i] = (int) ((credit_card_number_long) / (pow(10, i - 1))) % 10;
        printf("%d", (int) ((credit_card_number_long) / (pow(10, i - 1))) % 10);
        i--;
    }
    int sum_1;
    int sum_2;
*/
/*
    printf("%li\n", convert_to_long(credit_card_number));
    is_visa(strtol(credit_card_number, &end_pointer, 10));
    is_mastercard(strtol(credit_card_number, &end_pointer, 10));
    is_american_express(strtol(credit_card_number, &end_pointer, 10));
*/

    /* else if () {

    } else if () {

    } else if {

    } else {

    }
*/
/*
    int credit_card_array[15];
    int x = 0;
    for(; * credit_card_number != '\0'; ++credit_card_number) {
        credit_card_array[x] = (int) (* credit_card_number) - '0';
        printf("%d", (int) (* credit_card_number - '0'));
        ++x;
    }
    printf("\n");
    int y = 0;
    for(; y <= 15; ++y) {
        printf("%d", (int) credit_card_array[y]);
    }
    printf("\n\n");
    for(y = 15; (y % 30) != 1; --y) {
        printf("%d", (int) credit_card_array[y]);
    }
    printf("\n\n");
*/
    return 0;
}

bool are_all_digits(char * credit_card_number, char * credit_copy) {
    bool return_true_or_false = false;
    bool not_a_digit = false;
    for(; * credit_card_number != '\0'; ++credit_card_number) {
        if(* credit_card_number != '0' && * credit_card_number != '1' && * credit_card_number != '2' && * credit_card_number != '3' && * credit_card_number != '4' && * credit_card_number != '5' && * credit_card_number != '6' && * credit_card_number != '7' && * credit_card_number != '8' && * credit_card_number != '9') {
            not_a_digit = true;
        }
    }
/*
        if(((char) * credit_card_number != (char) '0') || ((char) * credit_card_number != (char) '1')) ||  ) {
            not_a_digit = true;
        } else if (((char) * credit_card_number != (char) '1')) {
            not_a_digit = true;

        } else if (((char) * credit_card_number != (char) '2')) {
            not_a_digit = true;

        } else if (((char) * credit_card_number != (char) '3')) {
            not_a_digit = true;

        } else if (((char) * credit_card_number != (char) '4')) {
            not_a_digit = true;

        } else if (((char) * credit_card_number != (char) '5')) {
            not_a_digit = true;

        } else if (((char) * credit_card_number != (char) '6')) {
            not_a_digit = true;

        } else if (((char) * credit_card_number != (char) '7')) {
            not_a_digit = true;

        } else if (((char) * credit_card_number != (char) '8')) {
           not_a_digit = true;

        } else if (((char) * credit_card_number != (char) '9')) {
            not_a_digit = true;

        } else if (((char) * credit_card_number == '0')) {
            * credit_card_number = ((int) (* credit_card_number - '0'));
        } else if (((char) * credit_card_number == '1')) {
            * credit_card_number = ((int) (* credit_card_number - '0'));

        } else if (((char) * credit_card_number == '2')) {
            * credit_card_number = ((int) (* credit_card_number - '0'));

        } else if (((char) * credit_card_number == '3')) {
            * credit_card_number = ((int) (* credit_card_number - '0'));

        } else if (((char) * credit_card_number == '4')) {
            * credit_card_number = ((int) (* credit_card_number - '0'));

        } else if (((char) * credit_card_number == '5')) {
            * credit_card_number = ((int) (* credit_card_number - '0'));

        } else if (((char) * credit_card_number == '6')) {
            * credit_card_number = ((int) (* credit_card_number - '0'));

        } else if (((char) * credit_card_number == '7')) {
            * credit_card_number = ((int) (* credit_card_number - '0'));

        } else if (((char) * credit_card_number == '8')) {
            * credit_card_number = ((int) (* credit_card_number - '0'));

        } else if (((char) * credit_card_number == '9')) {
            * credit_card_number = ((int) (* credit_card_number - '0'));

        } else {
            not_a_digit = true;
        }
*/
    return not_a_digit;
}

long convert_to_long(char * credit_card_number) {
    char * end_pointer;
    long i = strtol(credit_card_number, &end_pointer, 10);
    printf("\n");
    return i;
}
bool is_visa(long credit_card_number, int len) {
    bool true_or_false = false;
    long double divide_by = 1000000000000000L;
    long double new_cc = credit_card_number;
    long double number_divided = new_cc / divide_by;
/*
    printf("\n%li", credit_card_number);
    printf("\n%f", (double) number_divided);
*/
/*
    for(; * credit_card_number != '\0'; ++credit_card_number) {
        if(*credit_card_number != '4') {
            not_a_visa = true;
        }
    }
    if(not_a_visa == True) {
        printf("Not a VISA\n");
    }
*/
    if(len == 16) {
        if((floor(new_cc / divide_by)) == 4.000) {
            true_or_false = true;
        }
    }
    if(len == 13) {
        divide_by = 1000000000000L;
        if((floor(new_cc / divide_by)) == 4.000) {
            true_or_false = true;
        }
    }

    return true_or_false;
}
bool is_mastercard(long credit_card_number) {
    /* 55 to 51 */
/*    printf("\n");
*/  bool true_or_false = false;
    long double divide_by = 100000000000000L;
    long double new_cc = credit_card_number;
    long double number_divided = new_cc / divide_by;
/*    printf("\n%f", (double) number_divided); */
    if(floor((double) number_divided) == 51.000) {
        true_or_false = true;
    } else if (floor((double) number_divided) == 52.000) {
        true_or_false = true;
    } else if (floor((double) number_divided) == 53.000) {
        true_or_false = true;
    } else if (floor((double) number_divided) == 54.000) {
        true_or_false = true;
    } else if (floor((double) number_divided) == 55.000) {
        true_or_false = true;
    } else {
        true_or_false = false;
    }
/*        printf("\nIs a MASTERCARD\n");
    }
*/
    return true_or_false;
}
bool is_american_express(long credit_card_number) {
    printf("\n");
    bool true_or_false = false;
    long double divide_by = 10000000000000L;
    long double new_cc = credit_card_number;
    long double number_divided = new_cc / divide_by;
/*    printf("\n%f", (double) number_divided);
    printf("\n");
*/
    if(floor((double) number_divided) == 34.000) {
        true_or_false = true;
    } else if (floor((double) number_divided) == 37.000) {
        true_or_false = true;
    } else {
        true_or_false = false;
    }
/*    if(true_or_false == true) {
        printf("Is an AMERICAN EXPRESS\n");
    }

*/
    return true_or_false;
}

bool is_valid(char * credit_card_number, char * card_type, int len) {
    char * IS_MASTERCARD = "MASTERCARD";
    char * IS_VISA_13 = "VISA_13";
    char * IS_VISA_16 = "VISA_16";
    char * IS_AMERICAN_EXPRESS = "AMERICAN_EXPRESS";

    if(strcmp(IS_MASTERCARD, card_type) == 1 && len == 16) {
        printf("IS_A_MASTERCARD");
        for(; * credit_card_number != '\0'; ++credit_card_number) {
            printf("%d", (int) (* credit_card_number - '0'));
        }
    } else if (strcmp(IS_VISA_16, card_type) && len == 16) {
        printf("IS_A_VISA_16");
        for(; * credit_card_number != '\0'; ++credit_card_number) {
            printf("%d", (int) (* credit_card_number - '0'));
        }
    } else if (strcmp(IS_VISA_13, card_type) && len == 13) {
        printf("IS_A_VISA_13");
        for(; * credit_card_number != '\0'; ++credit_card_number) {
            printf("%d", (int) (* credit_card_number - '0'));
        }
    } else if (strcmp(IS_AMERICAN_EXPRESS, card_type) && len == 15) {
        printf("IS_AN_AMERICAN_EXPRESS");
        for(; * credit_card_number != '\0'; ++credit_card_number) {
            printf("%d", (int) (* credit_card_number - '0'));
        }
    }
    return 0;
}
