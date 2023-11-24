#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */


void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	const char *ptr;

	va_start(args, format);

	ptr = format;
	while (*ptr)
	{
		switch (*ptr++)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
		}

		if (*(ptr) && (*ptr == 'c' || *ptr == 'i' || *ptr == 'f' || *ptr == 's'))
			printf(", ");
	}

	printf("\n");
	va_end(args);
}
