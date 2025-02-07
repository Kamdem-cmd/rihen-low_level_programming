#include "main.h"

int _isalpha(int c)
{
	if (((int)'a' <= c && (int)'z' >= c) || ((int)'A' <= c && (int)'Z' >= c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
