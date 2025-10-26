# C - Sorting Algorithms & Big O

A collection of sorting algorithm implementations in C, focusing on understanding time complexity and algorithm efficiency.

## Project Information

**Team Members:**
- Almansour Khaled Shaden
- Tariq Almutairi Rasheed Tariq

**Institution:** Holberton School  
**Weight:** 2

## Learning Objectives

By the end of this project, you should be able to explain:
- At least four different sorting algorithms
- What is the Big O notation and how to evaluate time complexity
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm

## Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS using `gcc`
- Compilation flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code must follow Betty style
- No global variables allowed
- Maximum 5 functions per file
- Standard library usage restricted (no printf, puts in sorting functions)

### Data Structures

#### Doubly Linked List
```c
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

## Algorithms Implemented

| Algorithm | File | Time Complexity File | Status |
|-----------|------|---------------------|--------|
| Bubble Sort | `0-bubble_sort.c` | `0-O` | ✅ |
| Insertion Sort | `1-insertion_sort_list.c` | `1-O` | ✅ |
| Selection Sort | `2-selection_sort.c` | `2-O` | ✅ |
| Quick Sort | `3-quick_sort.c` | `3-O` | ✅ |

## Big O Notation Format

Time complexities are provided in the following format:
- Best case
- Average case
- Worst case

Example notations:
- `O(1)` - Constant time
- `O(n)` - Linear time
- `O(n^2)` - Quadratic time
- `O(log(n))` - Logarithmic time
- `O(nlog(n))` - Linearithmic time

## Compilation Examples

### Bubble Sort
```bash
gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble
./bubble
```

### Insertion Sort
```bash
gcc -Wall -Wextra -Werror -pedantic 1-insertion_sort_list.c 1-main.c print_list.c -o insertion
./insertion
```

### Selection Sort
```bash
gcc -Wall -Wextra -Werror -pedantic 2-selection_sort.c 2-main.c print_array.c -o select
./select
```

### Quick Sort
```bash
gcc -Wall -Wextra -Werror -pedantic 3-quick_sort.c 3-main.c print_array.c -o quick
./quick
```

## Resources

- [Sorting algorithm - Wikipedia](https://en.wikipedia.org/wiki/Sorting_algorithm)
- [Big O notation](https://en.wikipedia.org/wiki/Big_O_notation)
- [Sorting algorithms animations](https://www.toptal.com/developers/sorting-algorithms)

## Repository

**GitHub repository:** `holbertonschool-sorting_algorithms`

## Authors

See [AUTHORS](AUTHORS) file for details.
