int main(int argc, char **argv)
{
	FILE	*f;
	char	buf[66];
	int	n;

	f = fopen("/home/user/end/.pass", "r");
	bzero(buf, 33);
	if (!f || argc != 2)
		return (-1);
	fread(buf, 1, 66, f);
	buf[65] = 0;
	n = atoi(argv[1]);
	buf[n] = 0;
	fread(buf + 66, 1, 65, f);
	flcose(f);
	if (!strcmp(argv[1], buf))
		execl("sh", "/bin/sh");
	else
		puts(buf + 66);
	return (0);
}
