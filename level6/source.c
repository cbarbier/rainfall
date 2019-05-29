
m()
{
	puts("nop");
}

int main(int ac, char **av)
{
	char *s1;
	char *s2;

	s1 = malloc(4);
	s2 = malloc(64);
	strcpy(s2, av[1]);
	m();
	return (0);
}