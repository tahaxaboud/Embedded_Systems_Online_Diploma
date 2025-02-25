#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char *start, *end, temp;

    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    start = str;
    end = str + strlen(str) - 1;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reverse of the string is: %s\n", str);

    return 0;
}
