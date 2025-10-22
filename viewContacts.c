#include <stdio.h>
#include "contact.h"

void viewContacts() {
    struct Contact c;
    FILE *file = fopen("contacts.dat", "rb");

    if (file == NULL) {
        printf("No contacts to show.\n");
        return;
    }

    printf("\n-- All Contacts --\n");
    while (fread(&c, sizeof(c), 1, file)) {
        printf("Name: %s\n", c.name);
        printf("Phone: %s\n", c.phone);
        printf("Email: %s\n", c.email);
        printf("Address: %s\n", c.address);
        printf("-------------------------\n");
    }

    fclose(file);
}
