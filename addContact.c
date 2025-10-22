#include <stdio.h>
#include <string.h>
#include "contact.h"

void addContact() {
    struct Contact newContact;
    FILE *file = fopen("contacts.dat", "ab");  // Append binary mode

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter name: ");
    fgets(newContact.name, sizeof(newContact.name), stdin);
    newContact.name[strcspn(newContact.name, "\n")] = 0;

    printf("Enter phone: ");
    fgets(newContact.phone, sizeof(newContact.phone), stdin);
    newContact.phone[strcspn(newContact.phone, "\n")] = 0;

    printf("Enter email: ");
    fgets(newContact.email, sizeof(newContact.email), stdin);
    newContact.email[strcspn(newContact.email, "\n")] = 0;

    printf("Enter address: ");
    fgets(newContact.address, sizeof(newContact.address), stdin);
    newContact.address[strcspn(newContact.address, "\n")] = 0;

    fwrite(&newContact, sizeof(newContact), 1, file);
    fclose(file);

    printf("Contact added successfully!\n");
}
