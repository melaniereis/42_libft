# 🌟 42_libft

<div align="center">

<img src="https://media.giphy.com/media/3o6Zt4j96fDG4XzO0w/giphy.gif" width="300" alt="Libft Logo">

[![License](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)
[![Norminette](https://img.shields.io/badge/norminette-passing-brightgreen.svg)](https://github.com/42School/norminette)

[Overview](#-project-overview) •
[Features](#-features) •
[Installation](#-installation) •
[Usage](#-usage) •
[Functions](#-function-list) •
[Author](#-author)

</div>

## 📖 Project Overview

<details>
<summary>Click to expand</summary>

libft is a custom C library project, part of the 42 School curriculum. This project aims to:

- Recreate various standard C library functions
- Develop additional utility functions
- Enhance understanding of basic algorithms and data structures
- Improve C programming skills

The library serves as a foundation for future projects in the 42 curriculum.

</details>

## ✨ Features

<details>
<summary>Key Features</summary>

- 🔄 Reimplementation of standard C library functions
- 🧰 Additional utility functions for string and memory operations
- 🔗 Bonus functions for linked list manipulations
- 🧪 Thoroughly tested for reliability
- 📚 Comprehensive documentation

</details>

## 🚀 Installation

<details>
<summary>Step-by-step guide</summary>

1. Clone the repository:
   ```bash
   git clone git@github.com:melaniereis/42_libft.git
   cd 42_libft
2. Compile the library:

bash
make

3. To include bonus functions:

bash
make bonus

</details>
💻 Usage
<details> <summary>How to use libft in your projects</summary>

1. Include the header in your C file:

    #include "libft.h"

2. Compile your program with the library:

bash
cc your_program.c -L. -lft -o your_program

3. Example usage:

#include "libft.h"
#include <stdio.h>

int main() {
    char *str = ft_strdup("Hello, libft!");
    printf("%s\n", str);
    free(str);
    return 0;
}

</details>
📚 Function List
<details> <summary>Libc Functions</summary>

    Character checks: ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint
    String operations: ft_strlen, ft_strlcpy, ft_strlcat, ft_strchr, ft_strrchr, ft_strncmp, ft_strnstr
    Memory operations: ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp
    Character conversions: ft_toupper, ft_tolower
    String to integer: ft_atoi
    Memory allocation: ft_calloc, ft_strdup

</details> <details> <summary>Additional Functions</summary>

    String manipulations: ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_itoa, ft_strmapi, ft_striteri
    File descriptor operations: ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd

</details> <details> <summary>Bonus Functions</summary>

    Linked list operations: ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap

</details>
📁 Project Structure
<details> <summary>File organization</summary>

text
.
├── libft.h     # Header file
├── ft_*.c      # Source files for each function
├── Makefile    # Compilation rules
└── README.md   # Project documentation

</details>
🧹 Cleaning Up
<details> <summary>Maintenance commands</summary>

1. Remove object files:

    bash
    make clean

2. Remove object files and the library:

bash
make fclean

3. Recompile everything:

bash
make re

</details>
👩‍💻 Author
<details> <summary>Melanie Reis</summary>

    🏫 42 School Student
    💼 LinkedIn
    🐙 GitHub

</details>
📄 License
This project is licensed under the MIT License - see the LICENSE file for details.
🙏 Acknowledgments
<details> <summary>Special thanks</summary>

    42 School for the comprehensive curriculum
    The C Programming Language by Brian Kernighan and Dennis Ritchie
    Fellow 42 students for their support and collaboration

</details>
