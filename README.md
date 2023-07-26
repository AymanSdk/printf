# printf-like Functions Project

![Project Logo](_printf.png) <!-- If you have a logo, add it here -->

Welcome to the printf-like Functions project! This project is a group effort by Aymane Sadiki and Ghita Bounouara. The aim of this project is to create a custom implementation of printf-like functions in [language], allowing users to format and print output in a flexible and customizable way.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Examples](#examples)
- [Contributing](#contributing)
- [License](#license)

## Introduction

The printf-like functions are a standard in many programming languages and offer a powerful way to format output. By implementing our version of these functions, we aim to understand the underlying mechanisms and provide users with additional features beyond what the standard libraries offer.

## Features

- **Format Specifiers**: Support for common format specifiers like `%s` (string), `%d` (integer), `%f` (floating-point number), etc.
- **Width and Precision**: Allowing users to specify the width and precision of the printed output.
- **Variadic Arguments**: Handling a variable number of arguments to be printed.
- **Custom Format Specifiers**: Implementing our own format specifiers to extend the functionality beyond the standard ones.
- **Error Handling**: Gracefully handling errors and notifying users when invalid format specifiers are used.

## Installation

To use our printf-like functions in your project, follow these steps:

1. Clone the repository: `git clone https://github.com/AymanSdk/printf.git`
2. [compile all the files using this command gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c]

## Usage

1. Include the necessary header files in your source code:

```c
#include "main.h"
```

2. Call the printf-like functions in your code, just like you would with the standard printf function:

```c
int main() {
    _printf("Hello, %s! You have %d new messages.", "John", 5);
    return 0;
}
```

## Examples

Here are some examples of how to use our printf-like functions:

```c
_printf("Hello, %s!", "User"); // Output: Hello, User!
_printf("The value of pi is approximately %.2f.", 3.14159); // Output: The value of pi is approximately 3.14.
_printf("Today's date is %02d/%02d/%04d.", 26, 7, 2023); // Output: Today's date is 26/07/2023.
```

## Contributing

We welcome contributions to improve the functionality and performance of our printf-like functions. If you'd like to contribute, please follow these steps:

1. Fork the repository.
2. Create a new branch for your feature or bug fix: `git checkout -b feature-name`
3. Make your changes and commit them: `git commit -m "Description of changes"`
4. Push your changes to your fork: `git push origin feature-name`
5. Submit a pull request, and we'll review your changes.

Please ensure that your code follows the project's coding guidelines and conventions.



---

Thank you for using our printf-like functions! If you encounter any issues or have suggestions for improvements, please don't hesitate to contact us. Happy coding!

Authors:
- Aymane Sadiki (GitHub: @AymanSdk)
- Ghita Bounouara (GitHub: @ghitabnr)
