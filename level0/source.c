#include <sys/types.h>

int main(int ac, char **av)
{
	gid_t gid;
    uid_t uid;
	char *s;
	
	if (423 == atoi(av[1]))
	{
		s = strdup("/bin/sh");
		gid = getegid();
		uid = geteuid();
		setresgid(gid, gid, gid);
		setresuid(uid, uid, uid);
		execv(s);
	}
	else 
		fwrite(1, "no !\n", 5);
	return (0);
}