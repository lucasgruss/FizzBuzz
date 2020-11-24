// Author: Lucas Gruss
// Description: Play FizzBuzz in C
// Date: 2020/11/24

#include <stdio.h>
#include <string.h>

/*
** fizzbuzz: print fizzbuzz from begin to end
*/
void
fizzbuzz(int begin, int end) {
    char out[10] = "";
    for (int i=begin; i < end; i++) {
        strcpy(out, "");
        if (i%3 == 0) strcat(out, "fizz");
        if (i%5 == 0) strcat(out, "buzz");
        if (strlen(out)==0) sprintf(out, "%d", i);
        printf("%s\n", out);
    }
}

int main(int argc, char *argv[]) {
    fizzbuzz(1, 101);
    return 0;
}
