
#include <string.h>
#include <stdio.h>
#include "vending_machine_printer.h"

void
print_machine(const struct vending_machine* machine, char* buffer) {
    // TODO: print some useful values instead of these example keys and values
    char line1[LINE_LENGTH];
    char line2[LINE_LENGTH];
    print_line(line1, "Key", "Value");
    print_line(line2, "Other Key", "Another Value");

    sprintf(buffer, "%s\n%s%s", "VendingMachine", line1, line2);
}

void
print_line(char *buffer, const char *key, const char *value) {
    int whitespace_length = LINE_LENGTH - strlen(key) - strlen(value);
    char whitespace[whitespace_length];
    for (int i = 0; i < whitespace_length -1; ++i) {
        whitespace[i] = ' ';