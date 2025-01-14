# File handling: Reading, Writing, Appending files. Recap and problem-solving.

## Strings

### Inbuilt

- `strlen()` : used to find the length of the string
    - ```c
      int x = strlen(string);
      ```

- `strcmp()` : used to compare two strings
    - ```c
      int x = strcmp(string1, string2);
      ```

- `strcat()` : used to concatenate strings (add)
    - ```c
      char *result = strcat(destination, source);
      ```

- `strcpy()` : used to copy a string into another string
    - ```c
      char *result = strcpy(destination, source);
      ```

- `strrev()` : used to reverse a string (Note: `strrev` is not part of the standard C library, but it is available in some implementations)
    - ```c
      char *result = strrev(string);
      ```

- `strlwr()` : convert string to lowercase (Note: `strlwr` is not part of the standard C library, but it is available in some implementations)
    - ```c
      char *result = strlwr(string);
      ```

- `strupr()` : convert string to uppercase (Note: `strupr` is not part of the standard C library, but it is available in some implementations)
    - ```c
      char *result = strupr(string);
      ```
