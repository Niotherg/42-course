*This project has been created as part of the 42 curriculum by magulyas.*

# libft

## Description

`libft` is a custom C library built for the 42 curriculum. The goal of the project is
to recreate a useful set of standard C library functions, then extend that library with
additional string helpers, file-descriptor output functions, and linked-list utilities.

The library is meant to become a reusable foundation for later 42 projects. It gathers
memory functions, string functions, character checks, conversions, allocation helpers,
and list manipulation tools into a single static library: `libft.a`.

## Instructions

Compile the library with:

```sh
make
```

Useful Makefile rules:

```sh
make
make clean
make fclean
make re
```

This produces the static library:

```sh
libft.a
```

To use it in another C project, include `libft.h` and link against `libft.a`.

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

Classic references used for this project:

- the official 42 `libft` subject PDF
- Unix man pages, especially `man 3`
- The Linux manual pages project: https://man7.org/linux/man-pages/
- cppreference for general C behavior: https://en.cppreference.com/

AI usage for this project:

- AI was used to help review the current implementation against the PDF requirements
- AI was used to identify missing functions, suggest fixes, and implement the remaining required files
- The final code was still compiled and checked inside the project workspace
