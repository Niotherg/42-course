*This project has been created as part of the 42 curriculum by magulyas.*

# Libft

## Description

`libft` is a custom C library. The goal of the project is to recreate a useful set of standard C library functions and additional helpers, file descriptors and linked lists.
The library is meant to be a resuable foundation for later projects.

## Instructions

Compile with:

```sh
make
```

Makefule rules:

```sh
make
make clean
make fclean
make re
```

This produces a static library:

```sh
libft.a
```

To use it in other C projects, include `libft.h` and link `libft.a`

Example:

```sh
cc main.c libft.a
```

## Library Contents

The library currently includes:

- libc-style character, memory, and string functions
- allocation and conversion helpers such as `ft_calloc`, `ft_strdup`, and `ft_itoa`
- additional string utilities such as `ft_substr`, `ft_strjoin`, `ft_strtrim`, and `ft_split`
- file-descriptor output helpers such as `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, and `ft_putnbr_fd`
- linked-list utilities based on the `t_list` structure, including creation, insertion, iteration, cleanup, and mapping

## Resources

- Libft subject PDF
- Man pages

## Detailed description

### ft_atoi

Converts the initial portion of the string pointed to by str to int.

Returns the converted value or 0 on error.

### ft_bzero

Erases  the  data in the n bytes of the memory starting at the
location pointed to by s, by writing zeros (bytes containing '\0') to that area.

Does not return anything.

### ft_calloc

Allocates memory for an array of nmemb elements of size bytes each and returns
a pointer to  the  allocated memory.  The memory is set to zero.  If nmemb or
size is 0, then calloc() returns either NULL, or a unique pointer value that can
later be successfully passed to free().  If the multiplication of nmemb and size
would result in integer overflow, then  calloc() returns an error.

Returns a pointer to the allocated memory.

### ft_isalnum

Checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).

The values returned are nonzero if the character c falls into the tested class, and zero if not.

### ft_isalpha

Checks  for an alphabetic character; in the standard "C" locale, it is equivalent to (isupper(c) || islower(c)).  In some locales, there may be addi‐
              tional characters for which isalpha() is true—letters which are neither uppercase nor lowercase.

The values returned are nonzero if the character c falls into the tested class, and zero if not.

### ft_isascii
Checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.

The values returned are nonzero if the character c falls into the tested class, and zero if not.

### ft_isdigit

Checks for a digit (0 through 9).

The values returned are nonzero if the character c falls into the tested class, and zero if not.

### ft_isprint

Checks for any printable character including space.

The values returned are nonzero if the character c falls into the tested class, and zero if not.

### ft_itoa

Coverts the integer n into a character string. The string is placed in the buffer passed, which must be large enough to hold the output.

Returns a string pointer.

### ft_lstadd_back

Adds the 'new' element at the end of the list.

Does not return anything.

### ft_lstadd_front

Adds the 'new' element at the front of the list.

Does not return anything.

### ft_lstclear

Deletes and frees the given node and all its
successors, using the function ’del’ and free(3).
Finally, set the pointer to the list to NULL.

Does not return anything.

### ft_lstdelone

Frees the memory of the element passed as parameter using the 'del' function then free(3). The memory of 'next' must not be freed.

Does not return anything.

### ft_lstiter

Iterates over the list 'lst' and applies the function 'f' to the content of all.

Does not return anything.

### ft_lstlast

Returns the last element of the list.

### ft_lstmap

Iterates through the list ’lst’, applies the
function ’f’ to each node’s content, and creates
a new list resulting of the successive applications
of the function ’f’. The ’del’ function is used to
delete the content of a node if needed.

Returns the new list, or NULL if allocaton fails.

### ft_lstnew

Allocates memory (using malloc(3)) and returns
a new node. The ’content’ member variable is
initialized with the given parameter ’content’.
The variable ’next’ is initialized to NULL.

Returns the new element.

### ft_lstsize

Counts the number of nodes in the list.

Returns the size of the list.

### ft_memchr

scans the initial n bytes of the memory area pointed to by s for the first
instance of c.  Both c and the bytes of the memory area pointed to by s are
interpreted as unsigned char.

Returns a pointer to the matching byte or NULL if the character does not occur in the givenmemory area.

### ft_memcmp

Compares the first n bytes (each interpreted as unsigned char) of the memory
areas s1 and s2.

Returns an integer less than, equal to, or greater than zero if the first n
bytes of s1 is found, respectively, to be less than, to match, or be greater
than the first n bytes of s2.
For a nonzero return value, the sign is determined by the sign of the difference
between the first pair of bytes (interpreted  as unsigned char) that differ in
s1 and s2.
If n is zero, the return value is zero.

### ft_memcpy

Copies  n  bytes from memory area src to memory area dest. The memory areas must not overlap.

Returns a pointer to dest.

### ft_memmove

Copies n bytes from memory area src to memory area dest.
The memory areas may overlap: copying takes place as though the
bytes in src are first copied into a temporary array that does not
overlap src or dest, and the bytes are then copied from the temporary
array to dest.

Returns a pointer to dest.

### ft_memset

Fills the first n bytes of the memory area pointed to by s
with the constant byte c.

Returns a pointer to the memory area s.

### ft_putchar_fd

Writes the character c on the file descriptor fd.

Does not return anything.

### ft_putendl_fd

Writes the string s, followed by a newline, on the file descriptor fd.

Does not return anything.

### ft_putnbr_fd

Writes the int n on the file descriptor fd.

Does not return anything.

### ft_putstr_fd

Write the string s on the file descriptor fd.

Does not return anything.

### ft_split

Allocates memory (using malloc(3)) and returns an
array of strings obtained by splitting ’s’ using
the character ’c’ as a delimiter.
Each string in the returned array is allocated
independently.
The array of pointers itself is also allocated
dynamically.
The returned array must be NULL terminated.

Returns an array of strings resulting from the splitting of s; NULL if the memory allocation failed.

### ft_strchr

Returns a pointer to the first occurrence of
       the character c in the string s.

### ft_strdup

Returns a pointer to a new string which is a duplicate of the string s.
	Memory for the new string is obtained with malloc(3), and can be freed with
	free(3).

Returns a pointer to the
       duplicated string on success.  It returns NULL if insufficient memory was
       available

### ft_striteri

Applies the function ’f’ to each character of the
string passed as argument, passing its index as
the first argument. Each character is passed by
address to ’f’ so it can be modified if necessary.

Does not return anything.

### ft_strjoin

Allocates memory (using malloc(3)) and returns a
new string, which is the result of concatenating
’s1’ and ’s2’.

Returns the new string; NULL if the memory allocation failed.

### ft_strlcat

Appends the NUL-terminated string src to the end of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.

Return the total length of the string they tried to create.

### ft_strlcpy

Copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.

Return the total length of the string they tried to create.

### ft_strlen

Calculates the length of the string pointed to by s, excluding the terminating null byte ('\0').

Returns the number of bytes in the string pointed to by str.

### ft_strmapi

Applies the function f to each character of the
string s, passing its index as the first argument
and the character itself as the second. A new
string is created (using malloc(3)) to store the
results from the successive applications of f.

Returns a new string resulting of the successive applications of 'f'; NULL if the memory allocations failed.

### ft_strncmp

Compares the two strings s1 and s2.  The locale is not taken into account.

Returns an integer indicating the result of the comparison, as follows:
• 0, if the s1 and s2 are equal;
• a negative value if s1 is less than s2;
• a positive value if s1 is greater than s2.
It compares only the first (at most) n bytes of s1 and s2.

### ft_strnstr

Locates the first occurrence of the null-terminated string little in the string
big, where not more than len characters are searched.  Characters that appear
after a ‘\0’ character are not searched.

If little is an empty string, big is returned; if little occurs nowhere in big, NULL is returned; otherwise a pointer to the first character of the first oc‐
     currence of little is returned.

### ft_strrchr

Returns a pointer to the last occurrence of the character c in the string s.

Return a pointer to the matched character or NULL if the character is not found.  The terminating null byte is consid‐
       ered part of the string, so that if c is specified as '\0', these functions return a pointer to the terminator.

### ft_strtrim

Allocates memory (using malloc(3)) and returns a
copy of ’s1’ with characters from ’set’ removed
from the beginning and the end.

Returns a trimmed copy of s1; NULL if the memory allocation failed.

### ft_substr

Allocates memory (using malloc(3)) and returns a
substring from the string ’s’.
The substring starts at index ’start’ and has a
maximum length of ’len’.

Returns the new string; NULL if the memory allocation failed.

### ft_tolower

If c is an uppercase letter, tolower() returns its lowercase equivalent, if a lowercase representation exists in the current locale.  Otherwise, it  returns
       c.

The value returned is that of the converted letter, or c if the conversion was not possible.

### ft_toupper

If  c is a lowercase letter, toupper() returns its uppercase equivalent, if an uppercase representation exists in the current locale.  Otherwise, it returns
       c.

The value returned is that of the converted letter, or c if the conversion was not possible.