
# _printf()

This repository has all the code necesarry for our custom function _printf.
It's a version of C languaje function printf from <stdio.h>.

This project was completed as a part of the program [Software Development Fundamentals of Holberton School.](https://holbertonschool.uy/)

## DESCRIPTION

_printf function is a variadic function, this function takes one or more arguments, a string who is called "format", and a variable arguments list from the library <stdarg.h>.
This functions loops thiught format, searching for a specific character indicated with a '%' symbol before the character.

If the function found, it called the function runner(char c))(va_list) and if it finds a match in the struct calls the function corresponding to that specific character.
Then, returns a pointer to that specifier function and the amount of characters displayed saved in the variable count.
After that, this process is repeated until function process all formats parameters.

Each function writes a character one by one.

## Flag characters
The character % is followed by one of the next specific characters.

%c
- Display a character.
    
%s 
- Display a string of characters.

%d 
- Display a integer of type int in base 10. %d Specifies signed decimal integer.

%i
- Display a integer, same as %d. %i Specifies an integer

## Syntax

```
_printf(const char *[format], ...)

```
### Examples

```
_printf("I like bread with %s", "butter");

```

```
_printf("I'm %d years old and I'm learning how to print %s, 15, "Hello world");

```
```
_printf("This display a character: %c", 'K');

```

# FLOWCHART

![Flowchart of _printf](https://i.imgur.com/zEn31Jd.png)

