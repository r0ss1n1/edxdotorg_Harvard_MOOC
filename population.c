#include <cs50.h>
#include <stdio.h>
/* Charles Thomas Wallace Truscott, population.c, with thanks to my HarvardX lecturers and edx.org */
/* Wooohooo, I'm sitting two units from Harvard :-D                                                */


int main(int argc, char ** argv) {

    int start_size;
    int end_size;
    int count;
    int new_population;
    int receding_population;
    int births;
    int deaths;
    while(true) {
        start_size = get_int("Start size: ");
        if(start_size <= 9) {
            start_size = get_int("Start size: ");
        } else if (start_size < 0) {
            start_size = get_int("Start size: ");
        } else if (start_size == 0) {
            start_size = get_int("Start size: ");
        }
        end_size = get_int("End size: ");
        if(end_size <= start_size) {
            end_size = get_int("End size: ");
        } else if (end_size >= start_size) {
            break;
        }
    }
    new_population = start_size + (int) (start_size / 3) - (int) (start_size / 4);

    count = 0;
    while (!(new_population >= end_size)) {
        ++count;
        new_population = new_population + (int) (new_population / 3) - (int) (new_population / 4);
    }
    if(new_population >= end_size) {
        ++count;
    }

    printf("Years: %d", count);

    return 0;
}
