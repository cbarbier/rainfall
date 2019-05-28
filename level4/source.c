
void p(char *buf)
{
    printf(buf);
}

void n()
{
    char *buf;
    int res = 0;

    fget(buf, 100, stream);
    p(buf);
    if (res == 0x1025544)
        system("cat /home/user/level4/.pass");
}

main()
{
    n();
    return (1);
}