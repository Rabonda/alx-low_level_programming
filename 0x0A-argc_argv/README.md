0x0A. C - argc, argv
==========================

-   By Julien Barbier

Tasks
-----

### 0\. It ain't what they call you, it's what you answer to

mandatory

Write a program that prints its name, followed by a new line.
- If you rename the program, it will print the new name, without having to compile it again
- You should not remove the path before the name of the program
```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynameis 
./mynameis
julien@ubuntu:~/0x0A. argc, argv$ mv mynameis mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynewnameis 
./mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ 
```
**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0A-argc_argv`
-   File: `0-whatsmyname.c`

 Done? Help

### 1\. Silence is argument carried out by other means

mandatory

Write a program that prints the number of arguments passed into it.
```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
julien@ubuntu:~/0x0A. argc, argv$ ./nargs 
0
julien@ubuntu:~/0x0A. argc, argv$ ./nargs hello
1
julien@ubuntu:~/0x0A. argc, argv$ ./nargs "hello, world"
1
julien@ubuntu:~/0x0A. argc, argv$ ./nargs hello, world
2
julien@ubuntu:~/0x0A. argc, argv$
```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0A-argc_argv`
-   File: `1-args.c`
