#include <stdio.h>

int main() {
	
	int var = 20; /* actual variable declaration */
	int *ip; /* pointer address of var in pointer variabe */
	
	ip = &var;
	
	
	printf("Address of var ar variable: %x\n", &var );
	
	/* address stored in pointer variable */
	printf("Address stored in ip variable: %x\n", ip );
	
	/* access the value using the pointer */
	printf("Value of *ip variable: %d\n", *ip );

	return 0;
}
