#include "main.h"

/*
 * is_pintable - Evaluates ifdhfhfhf a chr is printable
 * @c: Char to bjhgkhgkhk
 *fdhfhfkh
 * Retur: hkhkhhkhhkhgk1 if rintable, 0 otherwise
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**gjg coce ceic why the apcd 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - Verifies ifgfgfjgj*/
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**ffdhfhfhghgh
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 dsjg''dsgdgdsgdgdgdg;dg;g;gfgfghhgi;hg;hgfgha;oiufa;oiufa;oiufa;oiufa;oiufa;oiufa;oiufa;oiufa;oiufa;oiufa;oiufa;oiufa;oiufa;oiufa;oiufa;oiufa;oiufa;oiufa;oiufa;oiufa;oiufa;oiufa;oiufa;oiufa;oiufa;oiufa;oiufa;oiufa;oiufa;oiufa;oiufa;oiufa */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}

