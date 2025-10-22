#include <stdio.h>
#include <string.h>
#include "contact.h"

void searchContact() {
    struct Contact c;
    char searchName[50];
    int found = 0;
    FILE *file = fopen("contacts.dat", "rb");

    if (file == NULL) {
        printf("No contacts to search.\n");
        return;
    }

    printf("Enter name to search: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = 0;

    while (fread(&c, sizeof(c), 1, file)) {
        if (strstr(c.name, searchName) != NULL) {
            printf("\nName: %s\nPhone: %s\nEmail: %s\nAddress: %s\n",
                   c.name, c.phone, c.email, c.address);
            found = 1;
        }
    }

    if (!found) {
        printf("Contact with name \"%s\" not found.\n", searchName);
    }

    fclose(file);
}
