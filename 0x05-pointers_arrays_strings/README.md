# 0x05. C - Pointers, arrays and strings

## Learning Objectives

### General

* What are pointers and how to use them
* What are arrays and how to use them
* What are the differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables

| Taske | File | Description |
| ----- | ---- | ----------- |
| 0. 98 Battery st. | 0-reset_to_98.c | a function that takes a pointer to an int as parameter <br />and updates the value it points to to 98.<br />Prototype: void reset_to_98(int *n); |
| 1. Don't swap horses in <br />crossing a stream | 1-swap.c | a function that swaps the values of two integers.<br />Prototype: void swap_int(int *a, int *b); |
| 2. This report, <br />by its very length,<br />defends itself against <br />the risk of being read | 2-strlen.c | a function that  returns the length of a string.<br />Prototype: int _strlen(char *s); |
| 3. I do not fear computers.<br />I fear the lack of them | 3-puts.c | a function that prints a string, followed by a new line, to stdout.<br />Prototype: void _puts(char *str); |
| 4. I can only go one way.<br />I've not got a reverse gear | 4-print_rev.c | a function that prints a string, in reverse, followed by a new line.<br />Prototype: void print_rev(char *s); |
| 5. A good engineer thinks in reverse <br />and asks himself about the stylistic consequences <br />of the components and systems he proposes | 5-rev_string.c | a function that reverses a string.<br />Prototype: void rev_string(char *s); |
| 6. Half the lies they tell <br />about me aren't true | 6-puts2.c | a function that  prints every other character of a string, <br />starting with the first character, followed by a new line.<br />Prototype: void puts2(char *str); |
| 7. Winning is only half of it.<br />Having fun is the other half | 7-puts_half.c | a function that prints half of a string, followed by a new line.<br />Prototype: void puts_half(char *str);<br />The function should print the second half of the string.<br />If the number of characters is odd, the function should <br />print the last n characters of the string, <br />where n = (length_of_the_string - 1) / 2 |
| 8. Arrays are not pointers | 8-print_array.c | a function that prints n elements of an array of integers,<br /> followed by a new line.<br />Prototype: void print_array(int *a, int n);<br />where n is the number of elements of the array to be printed<br />Numbers must be separated by comma, followed by a space<br />The numbers should be displayed in the same order as they<br />are stored in the array<br />You are allowed to use printf |
| 9. strcpy | 9-strcpy.c | a function that copies the string pointed to by src,<br /> including the terminating null byte (\0), <br />to the buffer pointed to by dest.<br />Prototype: char *_strcpy(char *dest, char *src);<br />Return value: the pointer to dest |

### Advenced taskes

| Taske | File | Description |
| ----- | ---- | ----------- |
| 10. Great leaders are willing to sacrifice <br />the numbers to save the people. <br />Poor leaders sacrifice the people <br />to save the numbers | 100-atoi.c | a function that that convert a string to an integer.<br />Prototype: int _atoi(char *s);<br />The number in the string can be preceded by an infinite number of characters<br />You need to take into account all the - and + signs before the number<br />If there are no numbers in the string, the function must return 0<br />You are not allowed to use long<br />You are not allowed to declare new variables of “type” array<br />You are not allowed to hard-code special values<br />We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code. |
| 11. Don't hate the hacker, hate the code | 101-keygen.c | a program that generates random valid passwords for the program 101-crackme.<br />You are allowed to use the standard library<br />You don’t have to pass the betty-style tests <br />(you still need to pass the betty-doc tests)<br />man srand, rand, time
gdb and objdump can help |
