# PushSwap

## Overview

`push_swap` is an advanced sorting algorithm project in the C programming language. The primary objective is to design an algorithm that efficiently sorts a stack of integers using a specific set of operations, with the challenge of minimizing the number of moves. This README provides an in-depth understanding of the `push_swap` project, its purpose, implementation details, and how to use the provided programs.

## Project Objectives

1. **Sorting Algorithm**: Develop a sorting algorithm using a limited set of stack manipulation operations, including `push`, `swap`, and `rotate`.

2. **Optimization**: Minimize the total number of instructions to efficiently sort the stack, considering both performance and simplicity.

3. **Checker Program**: Implement a `checker` program that verifies whether a provided list of instructions correctly sorts the given stack.

4. **Visualizer**: Optional visualizer program for a graphical representation of the sorting process.

## Project Structure

The project is divided into two main programs:

- **push_swap**: Generates a list of instructions to sort a stack efficiently.
- **checker**: Validates if the generated instructions correctly sort the stack.

Additionally, a visualizer program is provided for a graphical representation of the sorting process.

## Compilation

Compile the programs using the provided Makefile:

```bash
make
```

This will generate the `push_swap` and `checker` executables.

## Usage

1. **Generate Sorting Instructions:**

    ```bash
    ./push_swap [list_of_integers]
    ```

    Replace `[list_of_integers]` with the integers you want to sort.

2. **Check Sorting Instructions:**

    ```bash
    ./push_swap [list_of_integers] | ./checker [list_of_integers]
    ```

    Verify that the generated instructions correctly sort the stack.

3. **Visualize Sorting Process:**

    ```bash
    ./push_swap [list_of_integers] | ./visualizer [list_of_integers]
    ```

## Example

```bash
./push_swap 3 1 4 2
```

Generates a list of instructions to efficiently sort the stack.

```bash
./push_swap 3 1 4 2 | ./checker 3 1 4 2
```

Checks if the generated instructions correctly sort the stack.

```bash
./push_swap 3 1 4 2 | ./visualizer 3 1 4 2
```

Visualizes the sorting process.

## Implementation Details

- The sorting algorithm utilizes a combination of stack manipulation operations to achieve an optimal solution.
  
- Considerations include edge cases, efficiency, and the minimization of total instructions.

## Error Handling

- Ensure the input consists of valid integers.

- Check that the `push_swap` and `checker` programs are compiled successfully.

## Contributions

Contributions to enhance the functionality, performance, or documentation of `push_swap` are welcome. Feel free to submit issues or pull requests.
