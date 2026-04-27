*This project has been created as part of the 42 curriculum by mdurte-s.*

# Libft

## Descripton:

Libft is a custom C library reimplementing standard functions for memory, strings and data structures. The goal is to regroup usual functions that will be used in future projects.

### Functions from <ctype.h> library:
- ```ft_isalpha``` - tests alphabetic character;
- ```ft_isdgit``` - tests numeric character;
- ```ft_isalnum``` - tests alphanumeric character;
- ```ft_isascii``` - tests ASCII character;
- ```ft_isprint``` - tests printable character;
- ```ft_tolower``` - tests converts upper to lower-case alphabetic character;
- ```ft_toupper``` - tests converts lower to upper-case alphabetic character.

### Functions from <stdlib.h> library:
- ```ft_atoi``` - converts ASCII string to integer;
- ```ft_calloc``` - allocates memory.

### Functions from <strings.h> library:
- ```ft_memset``` - fills a block of memory with a particular value;
- ```ft_bzero``` - places n zero-valued bytes in the area pointed to;
- ```ft_memcpy``` - copies a block of memory;
- ```ft_memmove``` - copies a block of memory without overlaping.
- ```ft_memchr``` - locates a byte in a block of memory witha specified value;
- ```ft_memcmp``` - compares n bytes of data;

### Functions from <string.h> library:
- ```ft_strlen``` - calculates the length of a string;
- ```ft_strchr``` - locates the first of occurence of a character in a string;
- ```ft_strrchr``` - locates the last of occurence of a character in a string;
- ```ft_strnstr``` - locates a subtring in a string;
- ```ft_strncmp``` - compares n characters of two strings;
- ```ft_strlcpy``` - copies strings taking the full size of the buffer;
- ```ft_strlcat```- concatenates two strings taking the full size of the buffer;
- ```ft_strdup``` - duplicates a string into a new one;

### Non-standard functions:
- ```ft_putchar_fd``` - writes a character to a given file;
- ```ft_putstr_fd``` - writes a string to a given file;
- ```ft_putendl_fd``` - writes a string ending with a new line to a given file;
- ```ft_putnbr_fd``` - writes a number to a given file;
- ```ft_itoa``` - converts a integer to a ASCII string;
- ```ft_substr``` - extracts a substring from a string;
- ```ft_strtrim``` - trims a strings at the start and end;
- ```ft_strjoin``` - concatenates two strings into a new one;
- ```ft_split``` - splits a string into a array of strings;
- ```ft_strmapi``` - applies a function to every character of a string and stores the results into a new one.
- ```ft_striteri``` -applies a function to every character of a string.

### Linked list functions:
- ```ft_lstnew``` - creates a new list;
- ```ft_lstsize``` - counts elements of a list;
- ```ft_lstlast``` - locates the last element of a list;
- ```ft_lstadd_back``` - adds a new elements at the end of a list;
- ```ft_lstadd_front``` - adds a new elements at the start of a list;
- ```ft_lstdelone``` - deletes one element from a list;
- ```ft_lstclear``` - detetes a sequence of elements of a list;
- ```ft_lstiter``` - applies a function to the content of every element from a list;
- ```ft_lstmap``` - applies a function to the content of every element from a list and stores the results into a new list.

## Instructions:

To use this library include the header in your C file:

``` 
#include "libft.h" 
```

To compile your program with the library, use the gcc compiler and add the flags:

```
-lft -L path/to/libft.a -I path/to/libft.h
```

## Resources:

### Documentation:

- Manual pages;
- Official 42 Libft Subject.

### Tutorials:

- GeeksforGeeks and W3Schools to clarify function behavior and edge cases.

### AI Usage:

AI was used to comprehend memory allocation in the functions from <string.h> and linked lists as data structures.
