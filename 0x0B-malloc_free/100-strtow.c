#include "holberton.h"

/**
 * howmany - count
 * @string: string
 * Return: couont total
 */
int howmany(char *string)
{
	int i;
	int amount = 0;

	for (i = 0; string[i] != 0; i++)
	{
		if (*string == ' ')
		{
			string++; }
		else
		{
			while (string[i] != ' ' && string[i] != 0)
			{
				string++, i++; }
			amount++; } }
	return (amount); }

/**
 * strtow - split string
 * @str: string to split
 * Return: string
 */
char **strtow(char *str)
{
	char **str2;
	char *s;
	int i = 0;
	int j = 0;
	int thismany = 0;
	int len = 0;

	if (str == 0 || *str == 0)
	{
		return (NULL); }
	thismany = howmany(str);
	if (thismany == 0)
	{
		return (NULL); }
	str2 = malloc((thismany + 1) * sizeof(char *));
	if (str2 == 0)
	{
		return (NULL); }
	while (i < thismany && *str != 0)
	{
		if (*str == ' ')
		{
			str++; }
		else
		{
			s = str;
			while (*str != ' ' && *str != 0)
			{
				len++;
				str++; }
			str2[i] = malloc((len + 1) * sizeof(char));
			if (str2[i] == 0)
			{
				while (i >= 0)
				{
					free(str2[--i]); }
				free(str2);
				return (NULL); }
			while (*s != ' ' && *s != 0)
			{
				str2[i][j] = *s;
				s++, j++; }
			str2[i][j] = 0;
			i++, str++, j = 0, len = 0; }
		str2[i] = 0; }
	return (str2); }
