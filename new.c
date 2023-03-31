#include <stdio.h>
    #include "askname.h"
    int main(int argc, char **argv)
    {
<<<<<<< HEAD
        char first[255], last[255];
        askname(first, last);
        printf("Hello, %s %s!\n", first, last);
=======
        char name[255];

	printf("Enter your name: ");
	fgets(name, 255, stdin);
	name[strlen(name)-1]='\0\; /* remove the newline at the end */
        printf("Hello %s!\n", name);
>>>>>>> parent of ee8f5c9 (prompt user fo last name as well.)
        return 0;
    }
