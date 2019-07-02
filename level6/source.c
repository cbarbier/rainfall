
m()
{
	puts("Nope");
}

int main(int ac, char **av)
{
	char *s1;
	char *s2;

	s2 = malloc(64);
	s1 = malloc(4);
	*s1 = 0x8048468;
	strcpy(s2, av[1]);
	(*s1)();
	return (0);
}
