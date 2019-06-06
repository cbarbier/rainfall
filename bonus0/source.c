
void p(char *bufc)
{
	char buf[4104];
	char *p;

	puts(" - ");
	read(0, buf, 4096);
	p = strchr(buf, '\n');
	*p = 0;
	strncpy(bufc,buf,20);
}

void pp(char *bufm)
{
	char buf1[48];
	char buf2[28];

	p(buf1);
	p(buf2);
	strcpy(bufm, buf1);
	strcat(buf1, buf2);
}

int main()
{
	char bufm[64];
	pp(bufm);
	puts(bufm);
}