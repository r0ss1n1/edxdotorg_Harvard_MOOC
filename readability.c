#include <stdio.h>
#include <cs50.h>
#include <string.h>
#import <math.h>
int count_letters(string input_text);
int count_sentences(string input_text);
int count_words(string input_text);
/* Charles Thomas Wallace Truscott at edx.org for a HarvardX Professional Certificate. */

int main(int argc, char ** argv) {
    double index;
    string get_text = get_string("Text: ");
/*
    printf("Letters: %d", count_letters(get_text));
    printf("\n");
    printf("Words: %d", count_words(get_text));
    printf("\n");
    printf("Sentences: %d", count_sentences(get_text));
    printf("\n");

*/
    index = 0.0588 * (((double) (count_letters(get_text) / (double) count_words(get_text) * 100))) - 0.296 * (((double) (count_sentences(get_text) / (double) count_words(get_text) * 100))) - 15.8;
/*    printf("\n%lf\n", round(index)); */
    if((int) round(index) < 1.0) {
        printf("Before Grade 1\n");
    } else if ((int) round(index) == 1.0) {
        printf("Grade 1\n");
    } else if ((int) round(index) == 2.0) {
        printf("Grade 2\n");
    } else if ((int) round(index) == 3.0) {
        printf("Grade 3\n");
    } else if ((int) round(index) == 4.0) {
        printf("Grade 4\n");
    } else if ((int) round(index) == 5.0) {
        printf("Grade 5\n");
    } else if ((int) round(index) == 6.0) {
        printf("Grade 6\n");
    } else if ((int) round(index) == 7.0) {
        printf("Grade 7\n");
    } else if ((int) round(index) == 8.0) {
        printf("Grade 8\n");
    } else if ((int) round(index) == 9.0) {
        printf("Grade 9\n");
    } else if ((int) round(index) == 10.0) {
        printf("Grade 10\n");
    } else if ((int) round(index) == 11.0) {
        printf("Grade 11\n");
    } else if ((int) round(index) == 12.0) {
        printf("Grade 12\n");
    } else if ((int) round(index) == 13.0) {
        printf("Grade 13\n");
    } else if ((int) round(index) == 14.0) {
        printf("Grade 14\n");
    } else if ((int) round(index) == 15.0) {
        printf("Grade 15\n");
    } else if ((int) round(index) == 16.0) {
        printf("Grade 16\n");
    } else if ((int) round(index) > 16.0) {
        printf("Grade 16+\n");
    }



    return 0;
}

int count_words(string input_text) {
    int how_many_words = 0;
    bool first_space_found = false;
    bool second_space_found = false;
    for(char * count = input_text; * count != '\0'; ++count) {
        if(* count == ' ') {
            first_space_found = true;
            if(* count == ' ') {
                second_space_found = true;
            }
        }
        if(second_space_found == true) {
            ++how_many_words;
            first_space_found = false;
            second_space_found = false;
        }
    }
    ++how_many_words;
    return how_many_words;
}

int count_sentences(string input_text) {
    int how_many_sentences = 0;
    for(char * count = input_text; * count != '\0'; ++count) {
        if(* count == '.') {
            ++how_many_sentences;
        } else if (* count == '!') {
            ++how_many_sentences;
        } else if (* count == '?') {
            ++how_many_sentences;
        }
    }
    return how_many_sentences;
}

int count_letters(string input_text) {
    int how_many_letters = 0;

    for(char * count = input_text; * count != '\0'; ++count) {
        if (* count == 'A' || * count == 'a') {
            ++how_many_letters;
        } else if (* count == 'B' || * count == 'b') {
            ++how_many_letters;
        } else if (* count == 'C' || * count == 'c') {
            ++how_many_letters;
        } else if (* count == 'D' || * count == 'd') {
            ++how_many_letters;
        } else if (* count == 'E' || * count == 'e') {
            ++how_many_letters;
        } else if (* count == 'F' || * count == 'f') {
            ++how_many_letters;
        } else if (* count == 'G' || * count == 'g') {
            ++how_many_letters;
        } else if (* count == 'H' || * count == 'h') {
            ++how_many_letters;
        } else if (* count == 'I' || * count == 'i') {
            ++how_many_letters;
        } else if (* count == 'J' || * count == 'j') {
            ++how_many_letters;
        } else if (* count == 'K' || * count == 'k') {
            ++how_many_letters;
        } else if (* count == 'L' || * count == 'l') {
            ++how_many_letters;
        } else if (* count == 'M' || * count == 'm') {
            ++how_many_letters;
        } else if (* count == 'N' || * count == 'n') {
            ++how_many_letters;
        } else if (* count == 'O' || * count == 'o') {
            ++how_many_letters;
        } else if (* count == 'P' || * count == 'p') {
            ++how_many_letters;
        } else if (* count == 'Q' || * count == 'q') {
            ++how_many_letters;
        } else if (* count == 'R' || * count == 'r') {
            ++how_many_letters;
        } else if (* count == 'S' || * count == 's') {
            ++how_many_letters;
        } else if (* count == 'T' || * count == 't') {
            ++how_many_letters;
        } else if (* count == 'U' || * count == 'u') {
            ++how_many_letters;
        } else if (* count == 'V' || * count == 'v') {
            ++how_many_letters;
        } else if (* count == 'W' || * count == 'w') {
            ++how_many_letters;
        } else if (* count == 'X' || * count == 'x') {
            ++how_many_letters;
        } else if (* count == 'Y' || * count == 'y') {
            ++how_many_letters;
        } else if (* count == 'Z' || * count == 'z') {
            ++how_many_letters;
        }
    }
    return how_many_letters;
}
