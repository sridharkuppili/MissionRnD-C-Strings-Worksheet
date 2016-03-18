/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/

char removeSpaces(char *str) {
	
	int i, len = 0, spalen, j;

	if (str == '\0')
	{
		return '\0';
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	spalen = len;
	for (i = 0; i<len; i++)
	{
		if (str[i] == ' ')
		{
			for (j = i; j<len-1; j++)
			{
				str[j] = str[j + 1];
			}

			len--;
			i--;
		
		}
	}
	for (i = len; i<spalen; i++)
	{
		str[i] = '\0';
	}

	return *str;

	
	//return '\0';
}