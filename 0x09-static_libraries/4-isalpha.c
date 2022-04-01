#include "main.h"

/**
 * _isalpha - checks for aplhabetic character.
 * @c: character being checked
 * Return: 1 if c is a letter, lowercase orupercase, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
