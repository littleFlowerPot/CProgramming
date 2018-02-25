#include <stdio.h>

struct validFlags{ 
int a, int b, int c };
int main(int argc, char * argv[])
{
	if (argc == 1)
	printf("\n playcli error  :  expecting playcli -<flag> -<options> <filename> \n\n");
	
	/* valid flags */
	 struct validFlags vf;

/*	printf("%d%s", argc, argv[1]);
	printf("%d%s", argc, argv[2]);
	printf("%d%s", argc, argv[3]);
*/

}
