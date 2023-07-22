#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *str, *co = "";
	va_list args;

	va_start(args, format);
	if (format)
	{
		while (!format[i])
		{
			switch (format[j])
			{
			case "c":
				printf("%s%c", co, va_arg(args, char));
				break;
			case "i":
				printf("%s%d", co, va_arg(args, int));
				break;
			case "f":
				printf("%s%f", co, va_arg(args, double));
				break;
			case "s":
				str = va_arg(args, char *);
				if(!str)
					str = "(nil)";
				printf("%s%s", co, str);
				break;

			default:
				j++;
				continue;
			}
		co = ", "
		i++;
		}
	}

	printf("\n");
	va_end(args);

}
