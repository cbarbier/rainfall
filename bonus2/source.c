
int langage;

void greetuser(char *cpy)
{
    char str[72];

    if (langage == 1)
        strcat(str, "Hyvää päivää ");
    else if (langage == 2)
        strcat(str, "Goedemiddag! ");
    else 
        strcat(str, "Hello ");
    strcat(str, cpy);
    puts(str);
}

int main(int ac, char **av)
{
    char buf[19];
    char cpy[19];
    char *lang;

    if (ac != 3)
        return (1);
    bzero(buf,19);
    strncpy(buf, av[1], 40);
    strncpy(buf + 40, av[2], 40);
     lang = getenv("LANG");
    if (lang)
    {
        if (!memcmp("fi", lang, 2))
            langage = 1;
        else if (!memcmp("nl", lang, 2))
            langage = 2;
    }
    strncpy(cpy, buf, 19);
    greetuser(cpy);
}