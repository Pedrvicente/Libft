# Libft

**Libft** is a custom C library that reimplements a set of standard C library functions, along with additional utility functions for strings, memory, and linked lists.  
This project was developed as part of the **42 curriculum** (Common Core).

---

## 📌 Features

- Reimplementation of standard libc functions:
  - `memset`, `bzero`, `memcpy`, `strdup`, `strchr`, `strrchr`, etc.
- String manipulation:
  - `ft_strlen`, `ft_strlcpy`, `ft_strjoin`, `ft_substr`, `ft_split`
- Character checks and transformations:
  - `ft_isalpha`, `ft_isdigit`, `ft_tolower`, `ft_toupper`
- Memory allocation helpers:
  - `ft_calloc`, `ft_strdup`
- Linked list utilities (bonus part):
  - `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstdelone`, `ft_lstclear`, `ft_lstmap`

---

## 🛠️ Tech Stack

- **Language:** C
- **Build System:** Makefile (generates `libft.a`)
- **Environment:** Linux / macOS

---

## 🚀 Usage

Clone the repository and compile the library:

```bash
git clone https://github.com/<your-username>/libft.git
cd libft
make
# libft
