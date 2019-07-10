#include <stdio.h>
#include <stdlib.h>

// test with -1073741813
int main(int argc, char **argv)
{
	int target = atoi(argv[1]);
	int i = 0;

	while ( (int)(4 * i) != target) 
	{
			i--;
	}
	
	printf("%d", i);
	return (0);
}
