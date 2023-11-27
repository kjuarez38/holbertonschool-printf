## C - Printf 
## Description
This project implements a custom version of the printf function in C, named _printf. The _printf function allows users to format and print output to the standard output in various ways. It supports format specifiers. 

## File Structure
## The project consists of the following files:

main.h: Header file containing function prototypes.

putchar.c: Implementation of the _putchar function to print a character.

print_char.c: Implementation of the _print_char function to print a character.

print_string.c: Implementation of the _print_string function to print a string.

print_number.c: Implementation of the _print_int function to print signed integers.

type_function.c: Implementation of the _function_type function to handle format specifiers and call appropriate print functions.

print.c: Implementation of the _printf function to parse the format string and print the formatted output.

principal.c: The main file where the _printf function is tested with various format specifiers.
Usage

Include the main.h header in your source file.

Call the _printf function with the format string and desired arguments to print the formatted output.

Supported Format Specifiers

%c: Print a single character.

%s: Display a null-terminated string.

%d, %i: Display signed integers.

Adding New Format Specifiers
To add support for new format specifiers, follow these steps:

Implement a new function to handle the new format specifier. For example, to add %f for floating-point numbers, implement a _print_float function.
Add the new function to the formats structure in main.h, associating it with the corresponding format specifier.
Update the _function_type function in type_function.c to handle the new format specifier and call the appropriate function.
Use the new format specifier in the format strings passed to _printf.

## Example 
```c

#include "main.h"

int main(void)
{
    _printf("Hello, %s! You are %d years old.\n", "John", 30);
    _printf("Character: %c\n", 'A');
    return 0;
}
```
---

## Note
This project provides a simplified version of the printf function and may not handle all edge cases and scenarios found in the printf files. It is intended for educational purposes and as a basic demonstration of how format specifiers can be handled. For production use, it is recommended to use the standard printf function from the C library.


 ## To compile the project, use the following command:
 -----
 
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c


## Prototype for the main _printf() function:

---
```c
int _printf(const char *format, ...);
```

## Requirements
---

-Allowed editors: vim or emacs.
-All the files will be compiled on Ubuntu 20.04 LTS using gcc.
-The code should use the betty style.
-Global variables are not allowed.
-No more than 5 functions per file.
-The prototypes of all th functions should be included in the header file called main.h.
-The header files should be include guarded.

## FLOWCHART

<img src="https://github.com/Jonathan-Ismael/holbertonschool-printf/blob/main/Diagramme.png?raw=true">

## MANPAGE
Execution: man ./man_3_printf
<img src="https://github.com/Jonathan-Ismael/holbertonschool-printf/blob/main/MAN_PAGE.png?raw=true">



## Author
---

Jonathan Ismael [GitHub](https://github.com/Jonathan-Ismael)

Paumond Kaïs [GitHub](https://github.com/kjuarez38)
