#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Open file. (r for read, w for write, a for append/add)
    FILE *file = fopen("phonebook.csv", "a");

    // Get strings from user
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    // Print (adds) strings to file
    fprintf(file, "%s,%s\n", name, number);

    // Close file
    fclose(file);
    
    // Now we can create our own CSV files, files of comma-separated 
    // values (like a mini-spreadsheet), programmatically.
}