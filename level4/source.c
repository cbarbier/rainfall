int res = 0; // 08049804

void p(char *buf)
{
    printf(buf);
}

void n()
{
    char buf[520];
    
	fgets(buf, 512, STDIN);
	p(buf);
	if (res == 0x1025544)
        system("/bin/cat /home/user/level5/.pass");
}

main()
{
    n();
    return (1);
}
