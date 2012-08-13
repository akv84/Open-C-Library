//
//  DataStructure.c
//  Open C Library
//
//  Created by Abhishek Munie on 03/08/12.
//
//

#include <stdio.h>
#include "DataStructure.h"

typedef struct Node {
    union item {
        
    };
    struct Node *next;
} Node;

typedef struct LinkList {
    Node *root;
} LinkList;

