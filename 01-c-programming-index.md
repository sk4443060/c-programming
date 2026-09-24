# Comprehensive C Programming Index (Basic to Deep Advanced)

| Module | Sr. No. | Topic Name | Core & Deep-Dive Sub-Topics | Status |
| :--- | :---: | :--- | :--- | :---: |
| **1. Basics & Fundamentals** | 1 | Introduction & Environment | Compilation Stages (Pre-process ➡️ Compile ➡️ Assemble ➡️ Link), GCC Flags, Memory Layout of a C Program. | ⬜ Not Started |
| | 2 | Tokens & Data Types | Keywords, Identifiers, Primitive Data Types (`int`, `float`, `char`, `double`), Signed vs Unsigned, Data Type Modifiers. | ⬜ Not Started |
| | 3 | Input/Output (I/O) | Standard I/O (`printf`, `scanf`), Format Specifiers, Unformatted I/O (`getchar`, `putchar`, `gets`, `puts`), Buffer flushing (`fflush`). | ⬜ Not Started |
| | 4 | Operators & Expressions | Arithmetic, Relational, Logical, Assignment, Increment/Decrement (`++x` vs `x++`), Operator Precedence & Associativity. | ⬜ Not Started |
| **2. Control Flow & Logic** | 5 | Decision Making | `if`, `if-else` ladder, Nested `if`, `switch-case` (Jump tables, Fall-through behavior), Ternary Operator. | ⬜ Not Started |
| | 6 | Loops & Iteration | `for`, `while`, `do-while`, Infinite loops, Loop optimization, Loop control (`break`, `continue`, `goto` pitfalls). | ⬜ Not Started |
| | 7 | Functions | Function Prototype, Definition, Parameters vs Arguments, Return types, Call by Value vs Call by Reference. | ⬜ Not Started |
| | 8 | Recursion | Base condition, Stack Overflow risk, Tail Recursion vs Non-tail Recursion, Memory overhead of recursive calls. | ⬜ Not Started |
| **3. Memory & Core Concepts**| 9 | Storage Classes | `auto`, `register`, `static` (local and global behavior), `extern` (Multi-file programs, Linkage). | ⬜ Not Started |
| | 10 | Arrays (1D & Multi-D) | Memory representation (Contiguous), Indexing, Pointer-Array relationship, Passing arrays to functions, Matrices. | ⬜ Not Started |
| | 11 | Strings (Character Arrays) | Null terminator (`\0`), String literals vs Character arrays, `<string.h>` functions (`strlen`, `strcpy`, `strcat`, `strcmp` internals). | ⬜ Not Started |
| **4. Deep Dive: Pointers** | 12 | Pointer Basics | Address-of operator (`&`), Dereferencing (`*`), Size of pointers, Pointer Arithmetic, Void pointer (`void*`). | ⬜ Not Started |
| | 13 | Advanced Pointers | Double Pointers (`int**`), Array of Pointers, Pointer to an Array, Dangling pointers, Wild pointers, Null pointers. | ⬜ Not Started |
| | 14 | Function Pointers | Syntax, Callback Functions, Array of Function Pointers (Implementing Type-safe state machines/dispatch tables). | ⬜ Not Started |
| **5. Advanced Types & DMA** | 15 | Dynamic Memory Allocation | Heap memory, `malloc()`, `calloc()` (Zero initialization), `realloc()`, `free()` (Memory Leaks, Use-After-Free bugs, Fragmentation). | ⬜ Not Started |
| | 16 | Structures & Unions | Dot (`.`) and Arrow (`->`) operators, Nested structures, Self-referential structures (Linked List foundation), `union` for memory saving. | ⬜ Not Started |
| | 17 | Structure Padding & Packing | Memory Alignment rules, Hardware access efficiency, Structure Padding, `#pragma pack(1)` / Attribute packed. | ⬜ Not Started |
| **6. Low-Level & OS Level** | 18 | Bit Manipulation | Bitwise operators (`&`, `\|`, `^`, `~`, `<<`, `>>`), Bitmasking, Setting/Clearing/Toggling bits, Bit-fields in Structures, Endianness. | ⬜ Not Started |
| | 19 | Type Qualifiers & Casting | `const` (Pointer to const vs Const pointer), `volatile` (Preventing compiler optimization in Embedded/Hardware), `restrict`, Typecasting. | ⬜ Not Started |
| | 20 | Advanced Preprocessors | Macro Stringizing (`#`), Token Pasting (`##`), Conditional Compilation (`#ifdef`, `#ifndef`), Macro hazards vs Inline functions. | ⬜ Not Started |
| | 21 | File Handling & I/O Streams | Text vs Binary modes, File pointers (`FILE*`), Sequential vs Random Access (`fseek`, `ftell`, `rewind`), Error handling (`feof`, `ferror`). | ⬜ Not Started |
| | 22 | Command Line Arguments | `argc`, `argv[]`, Parsing flags, Environment variables access in C. | ⬜ Not Started |
| | 23 | Variable Arguments | `<stdarg.h>`, `va_list`, `va_start`, `va_arg`, `va_end` (Understanding how `printf` works internally). | ⬜ Not Started |
| | 24 | Advanced Jumps (Exceptions) | `<setjmp.h>`, `setjmp()` and `longjmp()` for low-level exception handling and context switching. | ⬜ Not Started |
| | 25 | Modular C & Build Tools | Writing custom header files (`.h`), Static Libraries (`.a` / `.lib`), Dynamic Libraries (`.so` / `.dll`), Introduction to Makefiles. | ⬜ Not Started |
