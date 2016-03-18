/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>


void number_to_str(float number, char *str, int afterdecimal)
{
	int i, temp, d1 = 0, k, len, z, n2, m = -1, count = 0, n, n1;
	float d, m1 = -1;

	z = afterdecimal;
	n = (int)number;
	n2 = n;
	if (n<0)
	{

		n1 = m*n;
		//printf("%d\n",n1);
	}
	else
		n1 = n;

	d = number - n;
	if (d<0)
		d = d*m1;


	for (i = 0; i<afterdecimal; i++)
	{
		d1 = d1 * 10;
		d = d * 10;
		k = (int)d % 10;
		//printf("k is %d",k);

		d1 = d1 + k;
	}


	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	if (n2<0)
	{
		len = count + afterdecimal + 1;
		str[0] = '-';

	}
	else
		len = count + afterdecimal;


	while (z != 0)
	{
		temp = d1 % 10;
		str[len] = temp + '0';
		d1 = d1 / 10;
		len--;

		z--;
	}

	str[len] = '.';

	len--;


	while (count != 0)
	{

		while (n1 != 0)
		{
			temp = n1 % 10;
			str[len] = temp + '0';

			n1 = n1 / 10;
			len--;
		}
		count--;

	}






}

