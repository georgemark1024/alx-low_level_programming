#include "main.h"

char *_strcat(char *dest, char *src)
{
	int size = 0, sum;
	int size2 = 0;
	int count = 0;
	int n_count = 0;
	char concat[];

	while (dest[size] != '\0')
	{
		size++;
	}
	while (src[size2] != '\0')
	{
		size2++;
	}

	sum = size + size2;
	concat[sum + 1];
	while (dest[count] != '\0')
	{
		concat[count] == dest[count];
		count++;
	}
	while (count <= sum + 1)
	{
		concat[count] == src[n_count];
		count++;
		n_count++;
	}
	concat[sum + 1] == '\0';
	dest = concat;
	return (&dest);
}
