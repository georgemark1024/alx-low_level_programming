#include <stdio.h>
#include <string.h>
#include "main.h"

/*
 * larger_than_int - adds two string digits greater to be handled by int
 * @n1: first number in string type
 * @n2: second number in string type
 * @r: buffer to store result
 * @size_r: size of buffer
 * Return: pointer to buffer
 **/

char *larger_than_int(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, sum, carry = 0, max_len, i;

	len1 = strlen(n1);
	len2 = strlen(n2);

	if (len1 > len2)
		max_len = len1;
	else if (len1 < len2)
		max_len = len2;
	else
		max_len = len1;

	if (size_r <= max_len)
		return (0);

	r[size_r - 1] = '\0';
	size_r--;

	for (i = 0; i <= max_len; i++)
	{
		int digit1 = (len1 - 1 - i >= 0) ? n1[len1 - 1 - i] - '0' : 0;
	        int digit2 = (len2 - 1 - i >= 0) ? n2[len2 - 1 - i] - '0' : 0;

		sum = digit1 + digit2 + carry;
		r[size_r - 1 - i] = (sum % 10) + '0';
		carry = sum / 10;
	}

	if (carry)
	{
		if (size_r - 1 - i < 0)
			return (0);
		r[size_r - 1 - i] = carry + '0';
		i++;
    	}

	return(&r[size_r - i]);
}

/*
 * infinite_add - Adds and returns result of two numbers
 * @n1: first number in string type
 * @n2: second number in string type
 * @r: buffer to store result
 * @size_r: size of buffer
 * Return: pointer to buffer
 **/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int  num1, num2, res, length;

	if (strlen(n1) > 10 || strlen(n2) > 10)
	{
		r = larger_than_int(n1, n2, r, size_r);
		return (r);
	}
	else
	{
		sscanf(n1, "%d", &num1);
		sscanf(n2, "%d", &num2);

		res = num1 + num2;
		length = snprintf(NULL, 0, "%d", res) + 1;
	}

	if (size_r >= length)
	{
		sprintf(r, "%d", res);
		return (r);
	}
	else if (size_r < length)
		return (0);
	return (r);

}
