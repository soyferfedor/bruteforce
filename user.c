#include "user.h"
#include "myerror.h"
#include <stdlib.h>

void readPassword(char** password) {
	unsigned int N = 30;								// max password size
	*password = malloc(N*sizeof(password[0]));
	if (!password)
		myError(1);
	printf("Please enter the testing password: ");
	scanf("%s", *password);
printf("Password is %s\n", *password);
}

void resOutput(char** result) {
	printf("Password is %s\n", *result);
}
