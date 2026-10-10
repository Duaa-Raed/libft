*This project has been created as part of the 42 curriculum by <Duaa Abu Alinein>.*

# Libft

## Description

Libft is my first own C library, built as part of the 42 curriculum. The goal is to understand how the standard C functions really work by rewriting them from scratch, and to build a personal toolbox of functions that I can reuse in all my future 42 projects.

The library is compiled into a static library, `libft.a`, using the `ar` command. It contains no global variables, and helper functions (when needed) are declared `static`.

The project is split into three parts:

### Part 1 - Libc functions

Re-implementations of standard libc functions. They have the same prototypes and behaviors as the originals, but their names are prefixed with `ft_`.

| Category | Functions |
|---|---|
| Character checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| Character conversion | `ft_toupper`, `ft_tolower` |
| String functions | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_atoi` |
| Memory functions | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` |
| Allocation (uses `malloc`) | `ft_calloc`, `ft_strdup` |

### Part 2 - Additional functions

Functions that are not in the libc, or that exist in a different form.

| Function | Description |
|---|---|
| `ft_substr` | Returns a substring of `s` starting at index `start` with a maximum length `len`. |
| `ft_strjoin` | Returns a new string that is the concatenation of `s1` and `s2`. |
| `ft_strtrim` | Returns a copy of `s1` with the characters of `set` removed from the beginning and the end. |
| `ft_split` | Splits a string using a delimiter character and returns a NULL-terminated array of strings. |
| `ft_itoa` | Converts an integer to a string (negative numbers handled). |
| `ft_strmapi` | Applies a function to each character (with its index) and builds a new string from the results. |
| `ft_striteri` | Applies a function to each character of a string (by address, with its index). |
| `ft_putchar_fd` | Writes a character to a given file descriptor. |
| `ft_putstr_fd` | Writes a string to a given file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a given file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a given file descriptor. |

### Part 3 - Linked list

Functions to manipulate a singly linked list, using this structure (declared in `libft.h`):

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new node with the given content. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstsize` | Counts the number of nodes in the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstdelone` | Frees one node's content (using `del`) and the node itself. |
| `ft_lstclear` | Deletes and frees a node and all its successors, then sets the list pointer to NULL. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Creates a new list by applying a function to each node's content (frees everything if an allocation fails). |

## Instructions

### Requirements

- A C compiler (`cc`)
- `make`
- `ar`

### Compilation

Clone the repository and run `make` at its root:

```bash
git clone https://github.com/Duaa-Raed/libft.git
cd libft
make
```

This creates `libft.a` at the root of the repository. Everything is compiled with `cc -Wall -Wextra -Werror`.

### Makefile rules

| Rule | What it does |
|---|---|
| `make` / `make all` | Compiles the sources and creates `libft.a` |
| `make clean` | Removes the object files (`.o`) |
| `make fclean` | Removes the object files and `libft.a` |
| `make re` | Runs `fclean` then `all` (full rebuild) |

### Using the library in your own program

1. Include the header in your code:

```c
#include "libft.h"
```

2. Compile your program and link it with the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

Small example:

```c
#include "libft.h"

int	main(void)
{
	char	*str;

	str = ft_strjoin("Hello, ", "42!");
	if (!str)
		return (1);
	ft_putendl_fd(str, 1);
	free(str);
	return (0);
}
```

### Testing

Test programs are not part of the submission, so I write my own `main.c` files to test the functions and compare them with the originals.
```

## Project structure

```
.
├── Makefile
├── libft.h
├── ft_*.c        (one file per function)
└── README.md
```

## Resources

### References

- `man` pages of the original functions (`man 3 strlen`, `man 3 memmove`, `man 3 calloc`, etc.)
- [The 42 Norm](https://github.com/42School/norminette)
- Discussions with other students during peer-learning.

### Use of AI

AI was used in two ways:

- To help me understand what some functions are supposed to do (their expected behavior), before I wrote them myself.
- To organize and format this `README.md` file.