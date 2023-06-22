0x03. C - Debugging
===================

-   By Carrie Ybay

### General

-   What is debugging
-   What are some methods of debugging manually
-   How to read the error messages

Requirements
------------

### General

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   All your files should end with a new line
-   Your code should use the `Betty` style. It will be checked using `betty-style.pl` and `betty-doc.pl`
-   A README.md file at the root of the repo, containing a description of the repository
-   A README.md file, at the root of the folder of this project (i.e. `0x03-debugging`), describing what this project is about
Tasks
-----

### 0. Multiple mains


In most projects, we often give you only one main file to test with. For example, this main file is a test for a postitive_or_negative() function similar to the one you worked with in an earlier C project:


```
carrie@ubuntu:/debugging$ cat main.c
#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
}
carrie@ubuntu:/debugging$

```
```
carrie@ubuntu:/debugging$ cat main.h
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);

#endif /* MAIN_H */
carrie@ubuntu:/debugging$ 
```
```
carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c main.c
carrie@ubuntu:/debugging$ ./a.out
98 is positive
carrie@ubuntu:/debugging$
```
Based on the main.c file above, create a file named 0-main.c. This file must test that the function positive_or_negative() gives the correct output when given a case of 0.

You are not coding the solution / function, you’re just testing it! However, you can adapt your function from 0x01. C - Variables, if, else, while - Task #0 to compile with this main file to test locally.

-   You only need to upload 0-main.c and main.h for this task. We will provide our own positive_or_negative() function.
-   You are not allowed to add or remove lines of code, you may change only one line in this task.
```
carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main
carrie@ubuntu:/debugging$ ./0-main
0 is zero
carrie@ubuntu:/debugging$ wc -l 0-main.c
16 1-main.c
carrie@ubuntu:/debugging$
```
**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: 0x03-debugging
-   File: 0-main.c, main.h

 Done? Help Get a sandbox

### 1\. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

mandatory

Write a function that prints the alphabet, in lowercase, followed by a new line.

-   Prototype: `void print_alphabet(void);`
-   You can only use `_putchar` twice in your code

```
julien@ubuntu:~/0x02$ cat 1-main.c
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet
julien@ubuntu:~/0x02$ ./1-alphabet
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x02$

```
Based on the main.c file above, create a file named 0-main.c. This file must test that the function positive_or_negative() gives the correct output when given a case of 0.

You are not coding the solution / function, you’re just testing it! However, you can adapt your function from 0x01. C - Variables, if, else, while - Task #0 to compile with this main file to test locally.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x02-functions_nested_loops`
-   File: `1-alphabet.c`

 Done? Help Get a sandbox

### 2\. 10 x alphabet

mandatory

Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

-   Prototype: `void print_alphabet_x10(void);`
-   You can only use `_putchar` twice in your code

```
julien@ubuntu:~/0x02$ cat 2-main.c
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet_x10();
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10
julien@ubuntu:~/0x02$ ./2-alphabet_x10
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x02$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x02-functions_nested_loops`
-   File: `2-print_alphabet_x10.c`

 Done? Help Get a sandbox

### 3\. islower

mandatory

Write a function that checks for lowercase character.

-   Prototype: `int _islower(int c);`
-   Returns `1` if `c` is lowercase
-   Returns `0` otherwise

FYI: The standard library provides a similar function: `islower`. Run `man islower` to learn more.

```
julien@ubuntu:~/0x02$ cat 3-main.c
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-islower.c -o 3-islower
julien@ubuntu:~/0x02$ ./3-islower
011
julien@ubuntu:~/0x02$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x02-functions_nested_loops`
-   File: `3-islower.c`

 Done? Help Get a sandbox

### 4\. isalpha

mandatory

Write a function that checks for alphabetic character.

-   Prototype: `int _isalpha(int c);`
-   Returns `1` if `c` is a letter, lowercase or uppercase
-   Returns `0` otherwise

FYI: The standard library provides a similar function: `isalpha`. Run `man isalpha` to learn more.

```
julien@ubuntu:~/0x02$ cat 4-main.c
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0');
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-isalpha.c -o 4-isalpha
julien@ubuntu:~/0x02$ ./4-isalpha
1110
julien@ubuntu:~/0x02$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x02-functions_nested_loops`
