/*
 * This code is distributed under the terms of the GNU General Public License.
 * For more information, please refer to the LICENSE file in the root directory.
 * -------------------------------------------------
 * Copyright (C) 2025 Rodrigo R.
 * This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
 * This is free software, and you are welcome to redistribute it
 * under certain conditions; type `show c' for details.
*/

#include <stddef.h>
#include "library.h"

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
size_t str_len(const char *str)
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