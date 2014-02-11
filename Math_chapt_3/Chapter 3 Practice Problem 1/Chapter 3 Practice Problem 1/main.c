//Brian Sullivan
//main.c
//Chapter 3 Practice Problem 1
//
//Created by Programming on 2/11/14.
//Copyright (c) 2014 Programming. All rights reserved.
//
#include<math.h>
#include <stdio.h>

int main(){
    float x, y, result;
    printf("enter a number"); // User instructions
    scanf(" %f", &y);
    printf("enter another number");
    scanf(" %f", &x);
    printf("\n %f,y divided by %f,x is:", y, x);// y divided by x
    result = y/x;
    
    printf("\n the result is: %f", result);

    // insert code here...
    printf("Hello, World!\n");
    return 0;
}

