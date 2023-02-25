## C - Variables, if, else, while

## Resources

**Read or watch**:

-   [Everything you need to know to start with C.pdf](https://intranet.hbtn.io/rltoken/ZPQW6TjCWFeX9Y5pN33NVA "Everything you need to know to start with C.pdf") (_You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: “comments”, “Data types | Integer types”, “Declaration”, “Characters”, “Arithmetic operators”, “Variables assignments”, “Comparisons”, “Logical operators”, “if, if…else”, “while loops”._)
-   [Keywords and identifiers](https://intranet.hbtn.io/rltoken/CJPUuNKHthtvZgImtEVvXA "Keywords and identifiers")
-   [integers](https://intranet.hbtn.io/rltoken/L62RbK4buoJpukZpGiYo4w "integers")
-   [Arithmetic Operators in C](https://intranet.hbtn.io/rltoken/WYLsq9-VLs8EkYxZepIdcg "Arithmetic Operators in C")
-   [If statements in C](https://intranet.hbtn.io/rltoken/yuTsh0MB6AzC2L43xX9mJQ "If statements in C")
-   [if…else statement](https://intranet.hbtn.io/rltoken/4V25mIXrXwCPCw5N6l9h8A "if...else statement")
-   [Relational operators](https://intranet.hbtn.io/rltoken/MVF9PuY_IAVw5fh79b6lww "Relational operators")
-   [Logical operators](https://intranet.hbtn.io/rltoken/Uz1byju6ep3Ur0URB1Pt0A "Logical operators")
-   [while loop in C](https://intranet.hbtn.io/rltoken/FxPxfoKS2AVjvrSGQQKY0g "while loop in C")
-   [While loop](https://intranet.hbtn.io/rltoken/zqJKmSFQD8nlNSDnGcU7AQ "While loop")

**man or help**:

-   `ascii` (_You do not need to learn about `scanf`, `getc`, `getchar`, `EOF`, `EXIT_SUCCESS`, `time`, `rand`, `srand`, `RAND_MAX`, `for` loops, `do...while` loops, functions._)

## Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/2MDVpEgecd4TWdKdtPeLpA "explain to anyone"), **without the help of Google**:

### General

-   What are the arithmetic operators and how to use them
-   What are the logical operators (sometimes called boolean operators) and how to use them
-   What the the relational operators and how to use them
-   What values are considered TRUE and FALSE in C
-   What are the boolean operators and how to use them
-   How to use the `if`, `if ... else` statements
-   How to use comments
-   How to declare variables of types `char`, `int`, `unsigned int`
-   How to assign values to variables
-   How to print the values of variables of type `char`, `int`, `unsigned int` with `printf`
-   How to use the `while` loop
-   How to use variables with the `while` loop
-   How to print variables using `printf`
-   What is the `ASCII` character set
-   What are the purpose of the `gcc` flags `-m32` and `-m64`

## Requirements

### General

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project
-   There should be no errors and no warnings during compilation
-   You are not allowed to use `system`
-   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl "betty-doc.pl")

### Quiz questions

**Great!** You've completed the quiz successfully! Keep going! (Show quiz)

## Tasks

### 0\. Positive anything is better than negative nothing

mandatory

Score: 100.00% (Checks completed: 100.00%)

This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print whether the number stored in the variable `n` is positive or negative.

-   You can find the source code [here](https://intranet.hbtn.io/rltoken/ien80EnyS6QncYliqMBsqQ "here")
-   The variable `n` will store a different value every time you will run this program
-   You don’t have to understand what `rand`, `srand`, `RAND_MAX` do. Please do not touch this code
-   The output of the program should be:
    -   The number, followed by
        -   if the number is greater than 0: `is positive`
        -   if the number is 0: `is zero`
        -   if the number is less than 0: `is negative`
    -   followed by a new line

```
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
julien@ubuntu:~/$ ./0-positive_or_negative 
-520693284 is negative
julien@ubuntu:~/$ ./0-positive_or_negative 
-973398895 is negative
julien@ubuntu:~/$ ./0-positive_or_negative 
-199220452 is negative
julien@ubuntu:~/$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/$ ./0-positive_or_negative 
266853958 is positive
julien@ubuntu:~/$ ./0-positive_or_negative 
-48147767 is negative
julien@ubuntu:~/$ ./0-positive_or_negative 
0 is zero
julien@ubuntu:~/$ 
```

**Repo:**

-   GitHub repository: `holbertonschool-low_level_programming`
-   Directory: `variables_if_else_while`
-   File: `0-positive_or_negative.c`

### 1\. The last digit

mandatory

Score: 100.00% (Checks completed: 100.00%)

This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable `n`.

-   You can find the source code [here](https://intranet.hbtn.io/rltoken/kycB6GKdmgEgH-rX0mwD9g "here")
-   The variable `n` will store a different value every time you run this program
-   You don’t have to understand what `rand`, `srand`, and `RAND_MAX` do. Please do not touch this code
-   The output of the program should be:
    -   The string `Last digit of`, followed by
    -   `n`, followed by
    -   the string `is`, followed by
        -   if the last digit of `n` is greater than 5: the string `and is greater than 5`
        -   if the last digit of `n` is 0: the string `and is 0`
        -   if the last digit of `n` is less than 6 and not 0: the string `and is less than 6 and not 0`
    -   followed by a new line

```
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
julien@ubuntu:~/$ ./1-last_digit 
Last digit of 629438752 is 2 and is less than 6 and not 0
julien@ubuntu:~/$ ./1-last_digit 
Last digit of -748255693 is -3 and is less than 6 and not 0
julien@ubuntu:~/$ ./1-last_digit 
Last digit of -1052791662 is -2 and is less than 6 and not 0
julien@ubuntu:~/$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/$ ./1-last_digit 
Last digit of 491506926 is 6 and is greater than 5
julien@ubuntu:~/$ ./1-last_digit 
Last digit of 954249937 is 7 and is greater than 5
julien@ubuntu:~/$ ./1-last_digit 
Last digit of 652334952 is 2 and is less than 6 and not 0
julien@ubuntu:~/$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/$ ./1-last_digit 
Last digit of 809065140 is 0 and is 0
julien@ubuntu:~/$
```

**Repo:**

-   GitHub repository: `holbertonschool-low_level_programming`
-   Directory: `variables_if_else_while`
-   File: `1-last_digit.c`

### 2\. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

mandatory

Score: 100.00% (Checks completed: 100.00%)

Write a program that prints the alphabet in lowercase, followed by a new line.

-   You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
-   All your code should be in the `main` function
-   You can only use `putchar` twice in your code

```
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
julien@ubuntu:~/$ ./2-print_alphabet 
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/$
```

**Repo:**

-   GitHub repository: `holbertonschool-low_level_programming`
-   Directory: `variables_if_else_while`
-   File: `2-print_alphabet.c`

Score: 100.00% (Checks completed: 100.00%)

Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

-   You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
-   All your code should be in the `main` function
-   You can only use `putchar` three times in your code

```
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets
julien@ubuntu:~/$ ./3-print_alphabets | cat -e
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
julien@ubuntu:~/$ 
```

**Repo:**

-   GitHub repository: `holbertonschool-low_level_programming`
-   Directory: `variables_if_else_while`
-   File: `3-print_alphabets.c`

### 4\. When I was having that alphabet soup, I never thought that it would pay off

mandatory

Score: 100.00% (Checks completed: 100.00%)

Write a program that prints the alphabet in lowercase, followed by a new line.

-   Print all the letters except `q` and `e`
-   You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
-   All your code should be in the `main` function
-   You can only use `putchar` twice in your code

```
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt
julien@ubuntu:~/$ ./4-print_alphabt 
abcdfghijklmnoprstuvwxyz
julien@ubuntu:~/$ ./4-print_alphabt | grep [eq]
julien@ubuntu:~/$ 
```

**Repo:**

-   GitHub repository: `holbertonschool-low_level_programming`
-   Directory: `variables_if_else_while`
-   File: `4-print_alphabt.c`

Score: 100.00% (Checks completed: 100.00%)

Write a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.

-   All your code should be in the `main` function

```
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers
julien@ubuntu:~/$ ./5-print_numbers 
0123456789
julien@ubuntu:~/$ 
```

**Repo:**

-   GitHub repository: `holbertonschool-low_level_programming`
-   Directory: `variables_if_else_while`
-   File: `5-print_numbers.c`

Score: 100.00% (Checks completed: 100.00%)

Write a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.

-   You are not allowed to use any variable of type `char`
-   You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
-   You can only use `putchar` twice in your code
-   All your code should be in the `main` function

```
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz
julien@ubuntu:~/$ ./6-print_numberz 
0123456789
julien@ubuntu:~/$ 
```

**Repo:**

-   GitHub repository: `holbertonschool-low_level_programming`
-   Directory: `variables_if_else_while`
-   File: `6-print_numberz.c`

### 7\. Smile in the mirror

mandatory

Score: 100.00% (Checks completed: 100.00%)

Write a program that prints the lowercase alphabet in reverse, followed by a new line.

-   You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
-   All your code should be in the `main` function
-   You can only use `putchar` twice in your code

```
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla
julien@ubuntu:~/$ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
julien@ubuntu:~/$
```

**Repo:**

-   GitHub repository: `holbertonschool-low_level_programming`
-   Directory: `variables_if_else_while`
-   File: `7-print_tebahpla.c`

Score: 100.00% (Checks completed: 100.00%)

Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

-   You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
-   All your code should be in the `main` function
-   You can only use `putchar` three times in your code

```
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16
julien@ubuntu:~/$ ./8-print_base16
0123456789abcdef
julien@ubuntu:~/$
```

**Repo:**

-   GitHub repository: `holbertonschool-low_level_programming`
-   Directory: `variables_if_else_while`
-   File: `8-print_base16.c`

### 9\. Patience, persistence and perspiration make an unbeatable combination for success

mandatory

Score: 100.00% (Checks completed: 100.00%)

Write a program that prints all possible combinations of single-digit numbers.

-   Numbers must be separated by `,`, followed by a space
-   Numbers should be printed in ascending order
-   You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
-   All your code should be in the `main` function
-   You can only use `putchar` four times maximum in your code
-   You are not allowed to use any variable of type `char`

```
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
julien@ubuntu:~/$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
julien@ubuntu:~/$ 
```

**Repo:**

-   GitHub repository: `holbertonschool-low_level_programming`
-   Directory: `variables_if_else_while`
-   File: `9-print_comb.c`


### Score

![Project badge](https://intranet.hbtn.io/assets/pathway/004_color-d2fbcfb42ba7481834896ecc89a6f0ae65762b3c1096691dd0f820f7f29e3389.png)

100%

Congratulations! You made it!









-----------------------
[Next project: C - Functions, nested loops](https://github.com/lorecarreno/holbertonschool-low_level_programming/tree/master/functions_nested_loops)

--------------
### <center>Created by Lorecg</center>

And with the help of: 

- [markdownlivepreview](https://markdownlivepreview.com/)
