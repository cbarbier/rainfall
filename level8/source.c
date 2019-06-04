
struct auth {
    char name[32];
    int auth
};

struct auth *auth;
char *service;

int main()
{
    char line[128];

    while (1)
    {
        printf ("%p %p\n", auth, service);
        if (!fgets(line, sizeof(line), 0))
            break;
        if (!strcmp(line, "auth"))
        {
            auth = malloc(sizeof(auth));
            if (strlen(line + 5) < 32)
                strcpy(auth->name, line + 5);
        }
        if (!strcmp(line, "reset"))
            free(auth);
        if (!strcmp(line, "service"))
            strdup(line + 8);
        if (!strcmp(line, "login"))
        {
            if (auth->auth)
                system("/bin/sh");
            else
                puts("Password:");
        }
    }
}