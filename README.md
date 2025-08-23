<h1 align="center">🌐 C Language Refresh</h1>
<p align="center">
  A structured review of the <b>C programming language (C17)</b>, built with <b>CMake</b> and <b>CLion</b>.  
  Exercises, examples, and mini-projects to strengthen fundamentals and demonstrate clean coding practices.  
</p>

<p align="center">
  <a href="#-contents">Contents</a> •
  <a href="#-build--run">Build & Run</a> •
  <a href="#-mini-projects">Mini-Projects</a> •
  <a href="#-license">License</a>
</p>

---

## 📚 Contents

- Variables & data types
- Control flow (`if`, `for`, `while`, `switch`)
- Functions
- Arrays & strings
- Pointers
- Structs
- File I/O

Each topic is a separate executable inside `src/`.

---

## 🛠️ Build & Run

### Using CLion
1. Open the project in [CLion](https://www.jetbrains.com/clion/).
2. Press ▶ to build & run.

### Using GCC manually
```bash
# Compile
gcc -std=c17 -o hello src/01_hello_world.c

# Run
./hello
