# Contacts Management System

A lightweight contacts management utility implemented as a Windows batch-based tool. This project lets you add, store, edit, and remove contacts; contact data is kept in a file (contacts.bat) in the project folder so the tool can read and update it.

> NOTE: This tool is intended for Windows (uses batch (.bat) scripts). If you run it on other OSes, use a Windows environment or adapt scripts to your platform.

## Features

- Add new contacts
- List and search saved contacts
- Edit existing contacts
- Remove contacts
- Simple, single-file storage (contacts.bat) so data persists between runs

## Repository contents

- Main script(s) and utilities (batch files)
- contacts.bat — contact storage file (created/updated by the script)
- README.md — this file

(If your project uses different filenames, replace references to `contacts.bat` below with the actual filename.)

## Requirements

- Windows 7 or newer (cmd.exe / batch scripting support)
- No external dependencies required

## Installation

1. Clone the repository:
   ```cmd
   git clone https://github.com/Mr-HECKER147/Contacts-Management-System.git
   cd Contacts-Management-System
   ```

2. Ensure `contacts.bat` is writable by your user. If the file does not exist, the script will typically create it on first run.

## Running the tool

- Double-click the main batch file (e.g., `contacts.bat` or `run.bat`) in File Explorer.
- Or open a Command Prompt in the repository folder and run:
  ```cmd
  contacts.bat
  ```
  or, if your main script has another name:
  ```cmd
  main.bat
  ```

The script should present a menu with options to add, list, edit, or delete contacts. Follow on-screen prompts.

## Contact storage format

The storage file `contacts.bat` is used as a plain-text backing store. Each contact is stored as a single record. The exact internal format depends on the script implementation, but commonly used formats are:

- Comma separated (CSV-like): `Name,Phone,Email,Notes`
- Pipe separated: `Name|Phone|Email|Notes`

Example lines (if CSV):
```
John Doe, +1-555-1234, john@example.com, Friend from work
Jane Roe, +1-555-5678, jane@example.com, Gym buddy
```

If your script uses another format, check the script for parsing/serialization logic and adjust manual edits accordingly.

## Usage examples

- Add a contact:
  - Run the script and select "Add contact" from the menu, then provide the requested fields.
- List contacts:
  - Choose "List contacts" or equivalent from the menu to view saved contacts.
- Edit a contact:
  - Choose "Edit contact", select the contact (by number or name depending on implementation), and update fields.
- Remove a contact:
  - Choose "Delete contact" and confirm removal.

If your script supports command-line parameters (e.g., `contacts.bat add "Name" "Phone" ...`), consult the script header or comments for the exact syntax.

## Backups

Before making bulk edits to `contacts.bat`, create a backup:
```cmd
copy contacts.bat contacts.bak
```

## Troubleshooting

- Script does not run / shows errors:
  - Make sure you're on Windows and running from Command Prompt.
  - Open the batch file in a text editor and look for expected variables or paths.
- Contacts not saved:
  - Confirm `contacts.bat` is writable and not blocked by antivirus.
  - Check that the script writes to the same folder as where you run it.
- Encoding issues:
  - Use ANSI or UTF-8 without BOM for best compatibility with batch scripts.

## Contributing

Contributions are welcome. Suggested steps:

1. Fork the repository.
2. Create a feature branch:
   ```bash
   git checkout -b feature/your-change
   ```
3. Make your changes and test on Windows.
4. Commit and push your branch, then open a pull request.

Please include:
- A clear description of changes
- How to test them
- Any backward-incompatible changes noted

## License

Add a LICENSE file to the repository and choose a license (MIT, Apache-2.0, etc.). If no license is provided, assume "All rights reserved" — include an explicit license to allow reuse.

## Contact & Support

If you have questions or issues, open an issue in this repository with a clear description and steps to reproduce.

---

If you want, I can:
- Update the README.md file directly in the repository for you.
- Detect the actual script filenames and storage format from the code and tailor the README accordingly.
Which would you prefer?
