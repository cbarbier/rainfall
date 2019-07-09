struct s
{
	int id;
	char *data;
}

char buff[]

void m()
{
	printf("%s - %d\n", buff, time(0));
}

int main(argc, argv)
{
	struct s * s1, s2;
	FILE *f;

	s1 = malloc(8);
	s1->id = 1;
	s1->data = malloc(8);

	s2 = malloc(8);
	s2->id = 2;
	s2->data = malloc(8);

	strcpy(s1->data, argv[1]);
	strcpy(s2->data, argv[2]);
	f = fopen("/home/user/level8/.pass");
	fgets(buff, 0x44, f);
	puts("~~");
	return (0);

