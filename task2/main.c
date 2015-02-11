//
//  main.c
//  task2
//
//  Created by YURII on 11.02.15.
//  Copyright (c) 2015 YURII. All rights reserved.
//

#include <stdio.h>
#include <assert.h>

#define genHere(type, spec) \
type MyOutput_##type(type value) { \
    printf(spec, value); \
    return value; \
} \

#define MyOutputValue(type, value) \
MyOutput_##type(value); \

genHere( int, "%d" );
genHere( long, "%ld" );
genHere( char, "%c" );

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    
    MyOutputValue(int, 15)
    MyOutputValue(char,"b")
    
    assert(12 == MyOutput_int(12));
    assert(100500 == MyOutput_long(100500));
    assert("c" == MyOutput_char("c"));
    
    return 0;
}

