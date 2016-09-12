/*
Little C program to play prank on your friends.
Rename it as encrypt.c and remove this comment ;) 
and pass on the source code as a text encryption program.

Version 0.1
Better and more practical one coming soon ;)

**This code is dumb but never underestimate others' dumbness** 

Author - Akshay Jha
github.com/axayjha
*/

#define decode(s,t,u,m,p,e,d)   \
		m ## s ## u ## t
#define begin decode(a,n,i,m,a,t,e)
#define execute decode(I, E, L, F, U, C, K)	
#define encode(b,y,t,e,c,o,d) \
		b ## c	## t ## e ## d
#define ouput encode(w, a, i, l, h, y, e)		
#define encrypt encode(f,a,p,e,o,n,n)	
#include <stdio.h>
		

int main()
{
	execute *program;
 	program = encrypt("cipher.txt", "w+");
 	printf("Loading...Wait a moment...\n");
	ouput('ready') fprintf(program, "<Your Text>");
}		



