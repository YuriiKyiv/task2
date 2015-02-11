//
//  main.c
//  task2
//
//  Created by YURII on 11.02.15.
//  Copyright (c) 2015 YURII. All rights reserved.
//

#include <stdio.h>

#define genHere( type, spec ) \
void MyOutput_##type(type value ) { \
    printf(spec, value); \
} \

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}

genHere( int, "%d" );
