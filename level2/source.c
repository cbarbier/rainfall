

int p()
{
	char buf[64];
	unsigned int ret;

	fflush(STDOUT);
	gets(buf);
	ret = __builtin_return_address(0);

  if((ret & 0xbf000000) == 0xbf000000) {
    printf("(%p)\n", ret);
    _exit(1);
  }
  puts(buf);
  strdup(buf);
}

int main()
{
	p();
  return (0);
}
