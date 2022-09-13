#include <stdlib.h>

#include <stdio.h>

#include <time.h>



/** 

main -printf if the number is positve,zero,or negative

*

*Description: using the main function

*This program prints 'programming is positive,zero,or negative

*Return: 0

*/

int main(void)

{

	int n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	if (n>0)

{

	printf("%i is positive\n");

}

else if (n==0)

{

	printf("%i is zero\n");

}

else if (n<0)

{

	printf("%i is negative\n");

}

		

	return (0);

}
^C
clear

vi 


