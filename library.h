#ifndef STRLEN_LIBRARY_H
#define STRLEN_LIBRARY_H

#if defined(__cplusplus)
extern "C"
{
#endif

/**
 * @brief Calculates the length of a null-terminated string.
 *
 * This function iterates through the characters of the given string
 * until it encounters the null terminator (`\0`) and counts the number
 * of characters.
 *
 * @param str A pointer to the null-terminated string whose length is to be calculated.
 * @return The length of the string, excluding the null terminator.
 */
inline size_t str_len(const char *str)
{
    // Define a result
    size_t result = 0;

    // Loop through every character
    while (*str != '\0')
    {
        result++;

        // Move to the next character
        str++;
    }

    return result;
}

#if defined(__cplusplus)
}
#endif

#endif //STRLEN_LIBRARY_H