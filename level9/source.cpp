#include <cstdlib>

Public class N {
	char *str;
};

void N::setAnnotation(char* str)
{
	int len;

	len = std::strlen(str);
	memcpy(this.str, str, len);
}

int main(int ac, char **av)
{
	if (ac < 2)
		std::exit(1);
	N *N1 = new N(5);
	N *N2 = new N(6);
	N1.setAnnotation(av[1]);
}