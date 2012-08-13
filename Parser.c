//
//  Parser.c
//  Open C Library
//
//  Created by Abhishek Munie on 24/07/12.
//

#include <stdio.h>
#include "Parser.h"

int parsePostFix(const char *exp) {
    int i, top = -1;
    int stack[100];
    char o;
    int n=0,b,r,f=0;
    for (i = 0; (o = exp[i]); i++) {
        switch (o) {
            case '+':
                r = stack[top--] + stack[top--];
                stack[++top] = r;
                break;
            case '-':
                b = stack[top--];
                r = stack[top--] - b;
                stack[++top] = r;
                break;
            case '*':
            case 'x':
                r = stack[top--] * stack[top--];
                stack[++top] = r;
                break;
            case '/':
                b = stack[top--];
                r = stack[top--] / b;
                stack[++top] = r;
                break;
            case '%':
                b = stack[top--];
                r = stack[top--] % b;
                stack[++top] = r;
                break;
            case ' ':
                if(f) {
                    stack[++top]=n;
                    n=f=0;
                }
                break;
            default:
                n = (n * 10) + (int)(o-'0');
                f = 1;
                break;
        }
    }
    return stack[0];
}