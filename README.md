# _Printf

## Usage

```c
#include "main.h"

int main(void)
{
    char c = 'A';
    _printf("The %s is %d\n", "number", 1024);
    _printf("First letter of the alphabet is %c", c);
    
    return (0);
}

Output: The number is 1024
Output: First letter of the alphabet is A
```

## Description
The function `_printf()` produces output according a format like %c, %s, %d or %i  

**Conversion specifier**  
**%c** 
- _printf("%c", 'C');   
prints a character 
 
**%s** 
- _printf("Hello"); or _printf("%s", "hello");   
prints a pointer to an array of character type (a pointer to a string)  

**%d**, **%i**
- _printf("%d", 1024) or _printf("%i", 1024);   
prints a number

**%%**
- _printf("%%");  
prints '%'

## Author
[Arenc Palluqi](https://github.com/Arenc10)  
[Kristi Seraj](https://github.com/KristSeraj)
