#ifndef MASTERMIND_H
#define MASTERMIND_H

#define SIZE 4
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
 
/*Main*/
int _putChar(char c);
char *generateCode(void);
int checkPieces(char *userCodes);
int checkCode(char *userCode, char *secretCode);

/*Others*/
int _putInt(int n);
int intToStr( char *s, unsigned int n );

#endif
