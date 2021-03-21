#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Charles Truscott as part of CS50 Problem Set Two
// Please view satanicritualabuse.wordpress.com
// Thank you edx.org and Harvard University

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    if(score1 == score2){
        printf("Tie!\n");
    } else if (score1 > score2) {
        printf("Player 1 wins!\n");
    } else if(score1 < score2) {
        printf("Player 2 wins\n");
    } else {
        printf("Unhandled exception ...\n");
    }
}

int compute_score(string word)
{
    int score = 0;
    for(; * word != '\0'; ++word) {
        if (* word == 'A' || * word == 'a') {
            score += 1;
        } else if (* word == 'B' || * word == 'b') {
            score += 3;
        }  else if (* word == 'C' || * word == 'c') {
            score += 3;
        } else if (* word == 'D' || * word == 'd') {
            score += 2;
        } else if (* word == 'E' || * word == 'e') {
            score += 1;
        } else if (* word == 'F' || * word == 'f') {
            score += 4;
        } else if (* word == 'G' || * word == 'g') {
            score += 2;
        } else if (* word == 'H' || * word == 'h') {
            score += 4;
        } else if (* word == 'I' || * word == 'i') {
            score += 1;
        } else if (* word == 'J' || * word == 'j') {
            score += 8;
        } else if (* word == 'K' || * word == 'k') {
            score += 5;
        } else if (* word == 'L' || * word == 'l') {
            score += 1;
        } else if (* word == 'M' || * word == 'm') {
            score += 3;
        } else if (* word == 'N' || * word == 'n') {
            score += 1;
        } else if (* word == 'O' || * word == 'o') {
            score += 1;
        } else if (* word == 'P' || * word == 'p') {
            score += 3;
        } else if (* word == 'Q' || * word == 'q') {
            score += 10;
        } else if (* word == 'R' || * word == 'r') {
            score += 1;
        } else if (* word == 'S' || * word == 's') {
            score += 1;
        } else if (* word == 'T' || * word == 't') {
            score += 1;
        } else if (* word == 'U' || * word == 'u') {
            score += 1;
        } else if (* word == 'V' || * word == 'v') {
            score += 4;
        } else if (* word == 'W' || * word == 'w') {
            score += 4;
        } else if (* word == 'X' || * word == 'x') {
            score += 8;
        } else if (* word == 'Y' || * word == 'y') {
            score += 4;
        } else if (* word == 'Z' || * word == 'z') {
            score += 10;
        }
    }
    return score;
}
