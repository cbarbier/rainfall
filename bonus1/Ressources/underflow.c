#include <stdio.h>
#include <stdlib.h>

// test with -1073741813
int main(int argc, char **argv)
{
	long i = 4 * atol(argv[1]);
	printf("%1$ld %1$u\n", i);
	return (0);
}
