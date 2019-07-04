#include <cstdlib>

Public class N {
	char str[100];
	int _n
};

N::N(int n): _n(n)
{
}

void N::setAnnotation(char* str)
{
	memcpy(this->str, str, strlen(str));
}

N &operator+(const &N n2)
{
	this->_n += n._n;
	return (*this)
}

int main(int ac, char **av)
{
	if (ac < 2)
		std::exit(1);
	N *N1 = new N(5);
	N *N2 = new N(6);
	N1.setAnnotation(av[1]);
	N1 + N2;
}
