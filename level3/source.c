
void v()
{
	int c = 0;

	fget(buf,size,stream);
	printf(buf);
	if (c == 64)
		system("/bin/sh");
}

int main()
{
	v();
	return (0);
}