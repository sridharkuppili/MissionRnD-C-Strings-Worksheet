/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>
#include <stdlib.h>
void reverse(int , int, char * );
void str_words_in_rev(char *input, int len)

{
	{
		int x, y;
		char temp;
		for (x = 0, y = len - 1; x < y; x++, y--)
		{
			temp = input[x];
			input[x] = input[y];
			input[y] = temp;
		}
		for (x = 0; input[x] != '\0'; x++)
		{

			for (y = x + 1; input[y] != ' '&&input[y] != '\0'; y++)
			{

			}

			reverse(x, y - 1, input);
			while (input[y + 1] == ' ')
			{
				y++;
			}
			x = y;

		}
	}
}

	void reverse(int x, int y, char *input)
	{
		int temp;
		for (y; x < y; x++, y--)
		{
			temp = input[x];
			input[x] = input[y];
			input[y] = temp;
		}

	}