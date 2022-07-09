
# _printf()

This repository has all the code necesarry for our custom function _printf.
It's a version of C languaje function printf from <stdio.h>.

This project was completed as a part of the program [Software Development Fundamentals of Holberton School.](https://holbertonschool.uy/)

## DESCRIPTION

_printf function takes 2 arguments, a character pointer to a string who is called "format", and a variable arguments list (variadic functions) from the library <stdarg.h>.
This functions loops the format searching for a specific characters indicated with a '%' symbol before the character.

If the function found, it called the function runner(char c))(va_list) and if it finds a match in the struct calls the function corresponding to that specific character.
Then, returns a pointer to that specifier function and the amount of characters displayed saved in the variable count.
After that, this process is repeated until function process all formats parameters.

Each function writes a character one by one.

## FLAG CHARACTERS
The character % is followed by one of the next specific characters.

%c 
    Display a character.

%s 
    Display a string of characters.
%d 
    Display a integer of type int in base 10. %d Specifies signed decimal integer.
%i
    Display a integer, same as %d. %i Specifies an integer

# FLOWCHART
![Flowchart of _printf](https://i.imgur.com/WqmtXuH.jpeg)

