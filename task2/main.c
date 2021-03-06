//
//  main.c
//  task2
//
//  Created by YURII on 11.02.15.
//  Copyright (c) 2015 YURII. All rights reserved.
//

#include <stdio.h>
#include <assert.h>

#define TYVValueGenerete(type, spec) \
type TYVOutput_##type(type value) { \
    printf("%"#spec, value); \
    return value; \
}

#define TYVOutputValue(type, value) \
TYVOutput_##type(value); \

TYVValueGenerete(int, d);
TYVValueGenerete(long, ld);
TYVValueGenerete(char, c);

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    TYVOutputValue(int, 15)
    TYVOutputValue(long, 100500)
    TYVOutputValue(char,'c')
    
    assert(12 == TYVOutput_int(12));
    assert(100500 == TYVOutput_long(100500));
    assert('c'== TYVOutput_char('c'));
    
    return 0;
}

