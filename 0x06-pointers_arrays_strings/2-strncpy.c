/*
 * _strcmp -	compares two strings
 *
 * @s1: str input 1
 * @s2: str input 2
 *
 * Return: 	if s1 == s2 >> 0
 * 
 *        	if the stopping character in @s1 
 * 			was less than the stopping 
 * 			character in @s2 >> (int<0)
 * 
 *        	if the stopping character in @s1 
 * 			was greater than the stopping
 *          character in @s2 >> (int>0)
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, r;

	/**
	 * iterate through src and
	 * compare it with dest
	*/
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		/**
		 * if they differ by a single character
		 * don't iterate further
		*/
		if (s1[i] != s2[i])
		{
			/*
			 * return the difference between
			 * the two characters
			*/
			r = s1[i] - s2[i];
			break;
		}
		else
		{
			r = s1[i] - s2[i];
		}
		i++;
	}

	return (r);
}
