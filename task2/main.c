//
//  main.c
//  task2
//
//  Created by YURII on 11.02.15.
//  Copyright (c) 2015 YURII. All rights reserved.
//

#include <stdio.h>

#define genHere(type, spec) \
void MyOutput_##type(type value) { \
    printf(spec, value); \
} \

#define MyOutputValue(type, value) \
MyOutput_##type(value); \

genHere( int, "%d" );
genHere( char, "%c" );

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    MyOutput_int(12);
    MyOutput_char("a");
    MyOutputValue(int, 15)
    MyOutputValue(char,"b")
    return 0;
}