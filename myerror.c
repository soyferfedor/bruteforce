#include "myerror.h"

void myError(unsigned int errNo) {
	switch (errNo) {
		case 0:		break;
		case 1:		printf("Not enough memory!");
				exit(1);
				//break;
		case 2:		printf("Not enough memory2!");
				exit(2);
				//break;
		default:	printf("Error!");
				exit(1024);
	}	
}
