#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int index = 0;
	char *string_list;
	char *sep = "";

	va_list v_list;

	va_start(list, format);

	if (format)
	{
		while (format[index])
		{
			switch (format[index])
			{
				case 'c':
					printf("%s%c", sep, va_arg(v_list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(v_list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(v_list, double));
					break;
				case 's':
					string_list = va_arg(v_list, char *);
					if (!string_list)
						string_list = "(nil)";
					printf("%s%s", sep, string_list);
					break;
				default:
					index++;
					continue;
			}
			sep = ", ";
			index++;
		}
	}

	printf("\n");
	va_end(list);
}
