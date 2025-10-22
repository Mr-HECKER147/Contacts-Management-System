#ifndef CONTACT_H
#define CONTACT_H

struct Contact {
    char name[50];
    char phone[20];
    char email[50];
    char address[100];
};

void addContact();
void viewContacts();
void searchContact();
void editContact();
void deleteContact();

#endif
