//
//  main.c
//  C Library Test
//
//  Created by Abhishek Munie on 13/10/11.
//

#include <stdio.h>
#include "MathematicsTEST.h"
#include "MatrixTEST.h"
#include "ParserTEST.h"
#include "SortTEST.h"

int main(int argc, const char * argv[]) {
	printf("Test Started...\n\n");
	MathematicsTEST();
    MatrixTEST();
	ParseTEST();
	SortTEST();
	printf("\n\nTest Completed\n\n");
	return 0;
}