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
	N *N = new N(5);
	N.setAnnotation(av[1]);
}