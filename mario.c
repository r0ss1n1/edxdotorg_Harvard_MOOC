#include <cs50.h>
#include <stdio.h>
int prompt_user_for_size(void);

/* Charles T.W. Truscott, first assignment with HarvardX through edx.org */
int main(void) {
    int size;
    size = prompt_user_for_size();
    if (size > 8) {
        printf("Invalid size, enter a number between one and eight\n");
        size = prompt_user_for_size();
    } else if (size < 1) {
        printf("Invalid size, enter a number between one and eight\n");
        size = prompt_user_for_size();
    } else if (size == 1) {
        printf("         #  #    \n");
    } else if (size == 2) {
        printf("         #  #    \n");
        printf("        ##  ##   \n");
    } else if (size == 3) {
        printf("         #  #    \n");
        printf("        ##  ##   \n");
        printf("       ###  ###  \n");
    } else if (size == 4) {
        printf("         #  #    \n");
        printf("        ##  ##   \n");
        printf("       ###  ###  \n");
        printf("      ####  #### \n");
    } else if (size == 5) {
        printf("         #  #    \n");
        printf("        ##  ##   \n");
        printf("       ###  ###  \n");
        printf("      ####  #### \n");
        printf("     #####  #####\n");
    } else if (size == 6) {
        printf("         #  #    \n");
        printf("        ##  ##   \n");
        printf("       ###  ###  \n");
        printf("      ####  #### \n");
        printf("     #####  #####\n");
        printf("    ######  ######\n");
    } else if (size == 7) {
        printf("         #  #    \n");
        printf("        ##  ##   \n");
        printf("       ###  ###  \n");
        printf("      ####  #### \n");
        printf("     #####  #####\n");
        printf("    ######  ######\n");
        printf("   #######  #######\n");
    } else if (size == 8) {
        printf("         #  #    \n");
        printf("        ##  ##   \n");
        printf("       ###  ###  \n");
        printf("      ####  #### \n");
        printf("     #####  #####\n");
        printf("    ######  ######\n");
        printf("   #######  #######\n");
        printf("  ########  ########\n");
    } else {
        printf("ERROR.");
    }
    return 0;
}

int prompt_user_for_size(void) {
    int size_of_pyramid = get_int("Please enter a size for the pyramid: ");
    return size_of_pyramid;
}
