
void n(void)
{
	char buf[520];

	fgets(buf, 512, STDIN);
	printf(buf);
	exit(1);
}

int main(void)
{
	n();
	return (0);
}
