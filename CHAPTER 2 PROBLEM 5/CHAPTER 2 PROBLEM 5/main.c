//Brian Sullivan
//  main.c
//  CHAPTER 2 PROBLEM 5
//EXAMPLE OF COMPILER ERRORS
//A) NO I CAN'T GET ANY OUTPUT FOR BOTH THE INCORECT INT AND CHAR PRINTF "DECLORATIONS".
//  Created by Programming on 2/3/14.
//  Copyright (c) 2014 Programming. All rights reserved.
//

#include <stdio.h>

int main(){
    float x = 3.14159265;
    char y = 'a';
    int z = 5;
    printf("x = %f, y = %c, z = %d \n", x, y, z); //ERROR: FORMATT SPECIFIES INT BUT HAS FLOAT
    printf("x = %d, y = %d, z = %f \n", x, y, z);//ERROR INT SPECIFIED BUT FLOAT ENTERED
    printf("x = %c, y = %f, z = %c \n", x, y, z);
}

