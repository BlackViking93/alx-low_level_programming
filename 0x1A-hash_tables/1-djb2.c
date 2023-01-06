/**
* hash_djb2 - a hash function that uses the djb2 algorithm
*
* @str: a key
* Return: returns a long unsigned int
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
