0x08. C - Recursion
================================================

-   By Julien Barbier

Tasks :page_with_curl:
-----

### 0\. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget

mandatory

Write a function that prints a string, followed by a new line.

-  Prototype: void _puts_recursion(char *s);

FYI: The standard library provides a similar function: `puts`. Run `man puts` to learn more.

```
julien@ubuntu:~/0x08. Recursion$ cat 0-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
julien@ubuntu:~/0x08. Recursion$ ./0-puts_recursion 
Puts with recursion
julien@ubuntu:~/0x08. Recursion$ 
```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x08-recursion`
-   File: `0-puts_recursion.c`

### 1\. Why is it so important to dream? Because, in my dreams we are together

mandatory

Write a function that prints a string in reverse.
-   Prototype: void _print_rev_recursion(char *s);

```
julien@ubuntu:~/0x08. Recursion$ cat 1-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion
julien@ubuntu:~/0x08. Recursion$ ./1-print_rev_recursion 
reklaW notloC
julien@ubuntu:~/0x08. Recursion$ 

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x08-recursion`
-   File: `1-print_rev_recursion.c`


### 2\.  Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange

mandatory

Write a function that returns the length of a string.

-   Prototype: int _strlen_recursion(char *s);

FYI: The standard library provides a similar function: `strlen`. Run `man strlen` to learn more.

```
julien@ubuntu:~/0x08. Recursion$ cat 2-main.c 
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89  2-main.c 2-strlen_recursion.c -o 2-strlen_recursion
julien@ubuntu:~/0x08. Recursion$ ./2-strlen_recursion 
14
julien@ubuntu:~/0x08. Recursion$ 

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x08-recursion`
-   File: `2-strlen_recursion.c`


### 3\. You mustn't be afraid to dream a little bigger, darling

mandatory

Write a function that returns the factorial of a given number.

-   Prototype: int factorial(int n);
-   If n is lower than 0, the function should return -1 to indicate an error
-   Factorial of 0 is 1

```
julien@ubuntu:~/0x08. Recursion$ cat 3-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = factorial(1);
    printf("%d\n", r);
    r = factorial(5);
    printf("%d\n", r);
    r = factorial(10);
    printf("%d\n", r);
    r = factorial(-1024);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-factorial.c -o 3-factorial
julien@ubuntu:~/0x08. Recursion$ ./3-factorial 
1
120
3628800
-1
julien@ubuntu:~/0x08. Recursion$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x08-recursion`
-   File: `3-factorial.c`


### 4\.  Once an idea has taken hold of the brain it's almost impossible to eradicate

mandatory

Write a function that returns the value of x raised to the power of y.
-   Prototype: int _pow_recursion(int x, int y);
-   If y is lower than 0, the function should return -1

FYI: The standard library provides a similar function: `pow`. Run `man pow` to learn more.

```
julien@ubuntu:~/0x08. Recursion$ cat 4-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _pow_recursion(1, 10);
    printf("%d\n", r);
    r = _pow_recursion(1024, 0);
    printf("%d\n", r);
    r = _pow_recursion(2, 16);
    printf("%d\n", r);
    r = _pow_recursion(5, 2);
    printf("%d\n", r);
    r = _pow_recursion(5, -2);
    printf("%d\n", r);
    r = _pow_recursion(-5, 3);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-pow_recursion.c -o 4-pow
julien@ubuntu:~/0x08. Recursion$ ./4-pow 
1
1
65536
25
-1
-125
julien@ubuntu:~/0x08. Recursion$
```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x08-recursion`
-   File: `4-pow_recursion.c`

 Done? Help Check your code Get a sandbox

### 5\. strstr

mandatory

Write a function that locates a substring.

-   Prototype: `char *_strstr(char *haystack, char *needle);`
-   The `_strstr()` function finds the first occurrence of the substring `needle` in the string `haystack`. The terminating null bytes (`\0`) are not compared
-   Returns a pointer to the beginning of the located substring, or `NULL` if the substring is not found.

FYI: The standard library provides a similar function: `strstr`. Run `man strstr` to learn more.

```
julien@ubuntu:~/0x07$ cat 5-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-strstr.c -o 5-strstr
julien@ubuntu:~/0x07$ ./5-strstr
world
julien@ubuntu:~/0x07$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x07-pointers_arrays_strings`
-   File: `5-strstr.c`

 Done? Help Check your code Get a sandbox

### 6\. Chess is mental torture

mandatory

Write a function that prints the chessboard.

-   Prototype: `void print_chessboard(char (*a)[8]);`

```
julien@ubuntu:~/0x07$ cat 7-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char board[8][8] = {
        {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
    };
    print_chessboard(board);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_chessboard.c -o 7-print_chessboard
julien@ubuntu:~/0x07$ ./7-print_chessboard
rkbqkbkr
pppppppp

PPPPPPPP
RKBQKBKR
julien@ubuntu:~/0x07$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x07-pointers_arrays_strings`
-   File: `7-print_chessboard.c`

 Done? Help Check your code Get a sandbox

### 7\. The line of life is a ragged diagonal between duty and desire

mandatory

Write a function that prints the sum of the two diagonals of a square matrix of integers.

-   Prototype: `void print_diagsums(int *a, int size);`
-   Format: see example
-   You are allowed to use the standard library

Note that in the following example we are casting an `int[][]` into an `int*`. This is not something you should do. The goal here is to make sure you understand how an array of array is stored in memory.

```
julien@ubuntu:~/0x07$ cat 8-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
    print_diagsums((int *)c5, 5);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_diagsums.c -o 8-print_diagsums
julien@ubuntu:~/0x07$ ./8-print_diagsums
113, 1016
1214556093, 1137318
julien@ubuntu:~/0x07$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x07-pointers_arrays_strings`
-   File: `8-print_diagsums.c`

 Done? Help Check your code Get a sandbox

### 8\. Double pointer, double fun

#advanced

Write a function that sets the value of a pointer to a char.

-   Prototype: `void set_string(char **s, char *to);`

```
julien@ubuntu:~/0x07$ cat 100-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s0 = "Bob Dylan";
    char *s1 = "Robert Allen";

    printf("%s, %s\n", s0, s1);
    set_string(&s1, s0);
    printf("%s, %s\n", s0, s1);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-set_string.c -o 100-set_string
julien@ubuntu:~/0x07$ ./100-set_string
Bob Dylan, Robert Allen
Bob Dylan, Bob Dylan
julien@ubuntu:~/0x07$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x07-pointers_arrays_strings`
-   File: `100-set_string.c`

 Done? Help Check your code

### 9\. My primary goal of hacking was the intellectual curiosity, the seduction of adventure

#advanced

Create a file that contains the password for the [crackme2](https://github.com/holbertonschool/0x06.c "crackme2") executable.

-   Your file should contain the exact password, no new line, no extra space
-   `ltrace`, `ldd`, `gdb` and `objdump` can help
-   You may need to install the `openssl` library to run the `crakme2` program: `sudo apt install libssl-dev`
-   Edit the source list `sudo nano /etc/apt/sources.list` to add the following line: `deb http://security.ubuntu.com/ubuntu xenial-security main` Then `sudo apt update` and `sudo apt install libssl1.0.0`

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x07-pointers_arrays_strings`
-   File: `101-crackme_password`

