//
//  main.c
//  C Library Test
//
//  Created by Abhishek Munie on 13/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>
#include "MathematicsTEST.h"
#include "SortTEST.h"
#include "ParserTEST.h"

int main(int argc, const char * argv[]) {
	printf("Test Started...\n\n");
	MathematicsTEST();
	SortTEST();
	ParseTEST();
	printf("\n\nTest Completed\n\n");
	return 0;
}