#include <string.h>
#include <stdio.h>

int main(int argc, char **argv)
{

	if (argc == 3)
	{
		char *word;
		printf("%s\n", strtok(argv[1], argv[2]));
		int len = 
		word = strtok(argv[1], argv[2]);
		while ()
		{
			argv[1] += strlen(word) + 1;
			word = strtok(argv[1], argv[2]);
			printf("%s\n", word);
		}
	}
	else
		printf("Avec les arguments c'est mieux\n" );
	return 0;
}
