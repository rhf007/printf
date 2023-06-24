# printf

## Description
`printf` is a function in the C programming language that allows you to print formatted output to the standard output stream (usually the console). It is part of the standard input/output library (`stdio.h`) and is widely used for displaying information to the user.

## Syntax
The syntax for `printf` is as follows:
```c
#include <stdio.h>

int printf(const char *format, ...);
```

The `printf` function takes a format string as its first argument, followed by additional arguments that correspond to the format specifiers in the format string. The format string contains regular characters that are printed as-is, along with format specifiers that define the type and formatting of the additional arguments.

## Format Specifiers
Format specifiers in the format string begin with the '%' symbol, followed by a character that specifies the type of the argument. Some commonly used format specifiers include:

- `%d` - for printing integers.
- `%f` - for printing floating-point numbers.
- `%c` - for printing characters.
- `%s` - for printing strings.
- `%p` - for printing pointers.

There are many more format specifiers available, allowing you to format and print various types of data.

## Examples
Here are a few examples to illustrate the usage of `printf`:

```c
#include <stdio.h>

int main() {
    int age = 25;
    float height = 1.75;
    char grade = 'A';
    char name[] = "John";

    printf("Age: %d\n", age);
    printf("Height: %.2f meters\n", height);
    printf("Grade: %c\n", grade);
    printf("Name: %s\n", name);

    return 0;
}
```

Output:
```
Age: 25
Height: 1.75 meters
Grade: A
Name: John
```

## Return Value
The `printf` function returns the number of characters successfully printed (excluding the null character at the end). If an error occurs during printing, a negative value is returned.

## Important Points
- The format string can contain a combination of regular characters and format specifiers.
- Format specifiers are replaced by the corresponding arguments in the order they appear.
- Make sure the number and type of arguments match the format specifiers to avoid undefined behavior or runtime errors.
- Format specifiers provide options for formatting the output, such as width, precision, and alignment. Refer to the C documentation for more details.

## References
- [C Standard Library - printf](https://en.cppreference.com/w/c/io/fprintf)