#include "fscat.h"
#include<stdio.h>
#include <stdlib.h>
void cpro() {
    //i got this from the compiler, it suggested this when I was running more tests on the terminal 
    const char *filename = "txt1.txt";
    
    FILE *fp = fopen(filename, "r");//reads file
    
    //code snippet used from the instructions in the HW 
    //checks to makesure that file pointer is null and if so gives an error 
    if (fp == NULL) {
        fprintf(stderr, "cannot open file %s\n", filename);
        exit(1);
    }
    // code from the tutorial video 
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
}


