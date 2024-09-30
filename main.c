#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//#include "myerror.h"


char* crackPassword (char* pass);
long long attempt;
clock_t startT, endT;

void readPassword(char* password);
void myError (unsigned int errNo);








int main() {
	char* password;
printf("%p\n", password);
	readPassword(password);

	return 0;
}











void readPassword(char* password) {
	unsigned int N = 40;								// max password size
	char* passwordCopy = password;
printf("%p\n", password);
	password = malloc(N*sizeof(password[0]));
	if (!password)
		myError(1);
	if (password != passwordCopy)							// if maclloc changed starting array pos
		myError(2);
	printf("Please enter the testing password: ");
	scanf("%s", &password);
	printf("%s", password);
}


void myError(unsigned int errNo) {
	
}
