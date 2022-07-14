#include "main.h"

/**
 * cap_string - capitalizes words in sentences
 *
 * @s: string to be converted
 *
 * Return: character pointer
 */
char *cap_string(char *s)
{
	 int cnt = 0;
	 int i;
	 int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	if (*(s + cnt) >= 97 && *(s + cnt) <= 122)
		*(s + cnt) = *(s + cnt) - 32;
	cnt++;
	while (*(s + cnt) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + cnt) == sep_words[i])
			{
				if ((*(s + (cnt + 1)) >= 97) && (*(s + (cnt + 1)) <= 122))
					*(s + (cnt + 1)) = *(s + (cnt + 1)) - 32;
				break;
			}
		}
		cnt++;
	}
	return (s);
}
