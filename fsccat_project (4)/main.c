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
 * in netbeans I right clicked fsccat_project and clicked open in terminal because I am unfamiliar with how to use the VMware's file directory in bash
 * 
 * then I typed pwd which outputed the file directory of the project stored in netbeans
 * 
 * i then typed touch txt1.txt because I need a file for fscat to read in
 * NOTE: I accidentally assigned main.c once in the *filename variable and it read the main.c file
 * NOTE: I had to go to the folder and click on txt1.txt and type in Hello everyone!
 * 
 * then i typed gcc fscat.c main.c 
 * then  ./a.out txt1.txt
 * and it outputted "Hello Everyone! How are you?!
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

