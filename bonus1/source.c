
int main(int ac, char **av)
{
	int l;
	char buf[64];

	l = atoi(av[1]);
	if (l >= 9)
		return (0);
	memcpy(buf, av[2], l*4);
	if (l == 0x574f4c46)
		system("/bin/sh");
	return (0);
}