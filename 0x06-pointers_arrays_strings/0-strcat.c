/*
 * _strcat - 	concatenates two strings.
 *
 * @dest:	pointer to destinatioon
 * @src: 	pointer to source
 *
 * Return: 	pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
    int dest_length, src_index;

    dest_length = 0;
    /* Find the length of the dest string */
    while (dest[dest_length])
        dest_length++;

    /* Iterate through each character of the src string */
    for (src_index = 0; src[src_index]; src_index++)
    {
        /* Append src character to the end of dest string while overwriting the null byte */
        dest[dest_length++] = src[src_index];
    }

    return dest;
}
