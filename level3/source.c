
void v()
{
	char buf[520];
	int c = 0; // 0804988c

	fget(buf,512,STDIN);
	printf(buf);
	if (c == 64)
	{
		fwrite("Wait what?!\n", 1, 12, STDOUT);
		system("/bin/sh");
	}
}

int main()
{
	v();
	return (0);
}
