#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main() {

	char *token, *string, *tofree;

	tofree = string = strdup("abc,def,ghi");
	assert(string != NULL);

	while ((token = strsep(&string, ",")) != NULL)
		printf("%s\n", token);

	free(tofree);
}
