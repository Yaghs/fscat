/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: Shahin Yaghinloo
 *
 * Created on September 15, 2023, 6:32 PM
 */
#include "fscat.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * this is the best I could do with the cat command
 * 
 * tutorial video: https://www.youtube.com/watch?v=KClddHItjl8
 * this is how I did it in the terminal
 * 
 * [student@fedora fsccat_project]$ pwd
 * /tmp/fsccat_project
 * [student@fedora fsccat_project]$ make clean
 * "make" -f nbproject/Makefile-Debug.mk QMAKE= SUBPROJECTS= .clean-conf
 * make[1]: Entering directory '/tmp/fsccat_project'
 * rm -f -r build/Debug
 * make[1]: Leaving directory '/tmp/fsccat_project'
 * rm -f fscat
 * [student@fedora fsccat_project]$ gcc -o fscat fscat.c main.c -Wall -Werror
 * [student@fedora fsccat_project]$ ./fscat txt1.txt
 * Hello everyone!
 * [student@fedora fsccat_project]$ ./a.out txt1.txt
 * bash: ./a.out: Permission denied
 * [student@fedora fsccat_project]$ ./a.out txt1.txt
 * bash: ./a.out: Permission denied
 * [student@fedora fsccat_project]$ 

 * 
 */
int main(int argc, char** argv) {
    // this is to make sure that the program sends an error message if there is no argument 
    if (argc == 1){
        fprintf(stderr, "missing argument");
    exit(1);
    }
    //calls the function
    cpro();
    
}

