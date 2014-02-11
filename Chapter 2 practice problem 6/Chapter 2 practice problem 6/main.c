/*
//  main.c
//  Chapter 2 practice problem 6
A) SCANF IS EXPECTING AN %d INT WHEN IT SHOULD BE EXPECTING A %f FLOAT
B) scanf(" %f", &x); //read the number
C)?
//  Created by Programming on 2/3/14.
//  Copyright (c) 2014 Programming. All rights reserved.
*/

#include <stdio.h>

int main(){
    float x;
    printf("Pleas enter a float number between 1 and 10 \n");
    scanf(" %f", &x); //read the number
    printf("The enter value is %f \n", x);
    
}



