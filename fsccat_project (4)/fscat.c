#include "fscat.h"
#include <stdio.h>
#include <stdlib.h>
void cpro() {
   
    FILE *fp = fopen("txt1.txt", "r");//reads file
    
    //code snippet used from the instructions in the HW 
    //checks to makesure that file pointer is null and if so gives an error 
    if (fp == NULL) {
        printf( "cannot open file\n");
        exit(1);
    }
    // code from the tutorial video 
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
}

