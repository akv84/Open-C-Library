//
//  ParserTEST.c
//  Open C Library
//
//  Created by Abhishek Munie on 24/07/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>
#include <assert.h>
#include "ParserTEST.h"
#include "Parser.h"

void parsePostFixTEST(void) {
    assert(parsePostFix("4 2 / 5 +")==7);
    assert(parsePostFix("3 4 * 6 2 / +")==15);
    assert(parsePostFix("15 3 * 5 / 7 +")==16);
}

void ParseTEST(void) {
    parsePostFixTEST();
}