C - printf
==========

## Table of contents
* [Description of the project](#description-of-the-project)
* [What is prinf](#what-is-printf)
* [Usage](#usage)
* [Flowcharts](#Flowcharts)
* [Usage](#usage)
* [Requirements](#requirement)
* [Authors](#authors)

## Description of the project

In this project, we should create a function like printf who allow to print a string of caracters. 

## What is the function printf ?
 
This function take in first argument a string and others arguments of data type if necessary. This string is composed of caracters between a double quote "". And among this caracters who can have a or many format specification starts a percent sign and ends with a letter. Here in our function, we will use the format **%c**, **%s**, **%%**, **%d** and **%i**.

Each format have a different meaning : :arrow_heading_down: 
* %c : to print a single caracter
* %s : to print a string of caracters
* %% : just to print a percent
* %d : to print a decimal number
* %i : to print an integer in base 10

## Usage

* Prints a string to the standard output, according to a given format
* All files were created and compiled on Ubuntu 14.04.4 LTS using GCC 4.8.4 with the command
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
* Returns the number of characters in the output string on success, -1 otherwise
* Call it this way: `_printf("format string", arguments...)` where `format string` can contain conversion specifiers, along with regular characters

## Flowcharts

In this section you will find flowcharts that will popularize our codes.

Flowchart for structure and printf function


<img src="Flowcharts/MAIN.H + PRINTF.png" alt="Structure + printf" width="300"/>

Flowchart for print types (char,string and percent)


<img src="Flowcharts/TYPES OF FUNCTIONS.png" alt="Types of function" width="300"/>

Flowchart for decimal and integer


<img src="Flowcharts/DECIMAL AND INT.png" alt="Decimal and integer" width="300"/>


# \_printf - Custom printf implementation

**SYNOPSIS**

```c
#include <main.h>

int _printf(const char *format, ...);
DESCRIPTION
The _printf function produces output according to a format string. The format string can include the following conversion specifiers:

%c - Print a character.
%s - Print a string.
%% - Print a percent sign.
%d - Print a decimal integer.
%i - Print an integer.
Flags:
- - Left-align the output.
0 - Pad with zeros instead of spaces.
Field Width:
<number> - Minimum number of characters to be printed.
Precision:
.<number> - For integers, minimum number of digits to be printed.
Length Modifier:
l - Use long for %d and %i specifiers.
RETURN VALUE
The function returns the number of characters printed.

EXAMPLES
Print a character:
_printf("The character is: %c", 'A');

Print a string:
_printf("Hello, %s", "world");

Print a percent sign:
_printf("100%% complete");

Print a decimal integer:
_printf("The number is: %d", 42);

Print an integer:
_printf("The integer is: %i", -123);

DATE
November 2023

## Examples

## Requirements

* Allowed editors : vi, vim, emacs -> we use vi here
* To have the Betty style
* A README.md (logic I'm writing in it :hand:)
* No more than 5 functions per file
* To push the header file ***main.h*** who contains the prototypes of all our functions

## Authors

* Theo 
* Rodrigue 

<img src="https://blog.holbertonschool.com/wp-content/uploads/2019/04/instagram_feed180.jpg" alt="Logo Holberton School"
width="200" height="200"/>
