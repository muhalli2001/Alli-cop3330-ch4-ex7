/* *  UCF COP3330 Fall 2021 Assignment 5 Solution

Copyright 2021 Muhammad Alli


*/
#include <iostream>
#include "std_lib_facilities.h"

int stringtodigit(string in1)
{   
    int digit1=-1;

    if(in1=="0"||in1=="zero")
        digit1=0;
    if(in1=="1"||in1=="one")
        digit1=1;
    if(in1=="2"||in1=="two")
        digit1=2;
    if(in1=="3"||in1=="three")
        digit1=3;
    if(in1=="4"||in1=="four")
        digit1=4;
    if(in1=="5"||in1=="five")
        digit1=5;
    if(in1=="6"||in1=="six")
        digit1=6;
    if(in1=="7"||in1=="seven")
        digit1=7;
    if(in1=="8"||in1=="eight")
        digit1=8;
    if(in1=="9"||in1=="nine")
        digit1=9;

    return digit1;
}

int main()
{
    char operation;
    string in1, in2;

    int digit1, digit2;
    double result;

    printf("enter digit1 space digit2 space operand");
    cin >> in1 >> in2 >> operation;

    digit1 = stringtodigit(in1);
    digit2 = stringtodigit(in2);
    if(digit1 != -1 && digit2 !=-1)
    {
        switch(operation)
        {
            case '+':
                printf("adding... %d + %d\n", digit1, digit2);
                result = digit1+digit2; 
                printf("result: %lf", result);
                break;
            case '*':
                printf("multiplying... %d * %d\n", digit1, digit2);
                result = digit1*digit2;
                printf("result: %lf", result);
                break;
            case '-':
                printf("subtracting... %d - %d\n", digit1, digit2);
                result = digit1-digit2;
                printf("result: %lf", result);
                break;
            case '/':
                if(digit2!=0)
                {
                    printf("dividing... %d / %d\n", digit1, digit2);
                    result = digit1/digit2;
                    printf("result: %lf", result);
                }
                break;
               
            default: "invalid operation";
        }
        

    }
    else{printf("invalid digit entries");}

    

    return 0;
}
