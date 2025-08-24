![CI](https://github.com/EI-Flores/C_Language_Refresh/actions/workflows/ci.yml/badge.svg)


<h1 align="center">🌐 C Language Refresh</h1>
<p align="center">
  A structured review of the <b>C programming language (C17)</b>, built with <b>CMake</b> and <b>CLion</b>.  
  Includes examples, exercises, and small projects to strengthen fundamentals and showcase clean coding practices.  
</p>

<p align="center">
  <a href="#-basics">Basics</a> •
  <a href="#-mini-projects">Mini-Projects</a> •
  <a href="#-build--run">Build & Run</a> •
  <a href="#-license">License</a>
</p>

---

## 📚 Basics

All basics are implemented as **separate executables** under `src/basics/`:

1. **Hello World** → First program, compilation with GCC
2. **Variables** → Data types, sizes, and limits
3. **Control Flow** → `if`, `switch`, loops (`for`, `while`, `do...while`)
4. **Functions** → Prototypes, strings, pass by reference with pointers
5. **Arrays** → 1D arrays, strings, 2D arrays (matrix)
6. **Pointers** → Dereference, arrays, pointer arithmetic, modification
7. **Structs** → `typedef`, array of structs, average age calculation
8. **File I/O** → Writing and reading text files, parsing with `sscanf`

---

## 🚀 Mini-Projects (coming next)

Mini-projects will be implemented under `src/projects/`:

- **Calculator CLI** → Basic arithmetic operations with functions
- **Contacts Manager** → Store and load contacts using `struct` + File I/O
- **Student Grades Analyzer** → Process grades from a file and compute statistics

---

## 🛠️ Build & Run

### Using CLion
This project uses **CMake** and can be opened directly in [CLion IDE](https://www.jetbrains.com/clion/).  
Each `.c` file is mapped to its own executable. Select which one to run in the top-right configuration menu.

### Using GCC manually
Compile any file individually:
```bash
# Example: compile Hello World
gcc -std=c17 -o hello src/basics/01_hello_world.c
./hello
