/*Brian Sullivan
//  main.c
//  Chapter 2 question 4 experinetation
//ANSWERS TO QUESTIONS FROM PROBLEM 4
//
A) TELLS PRINTF() TO EXPECT A FLOAT
B) I GET THIS OUTPUT floats: 16064163124.1f 3.14 3.141593 
C) NO IT TRUNKATES THE NUMBER
 // Created by Programming on 2/3/14.
//  Copyright (c) 2014 Programming. All rights reserved.
*/

#include <stdio.h>

int main(){
    float x =3.14159265;
    printf ("floats: %d4.1f %4.2f %4f \n", x, x, x);
}

