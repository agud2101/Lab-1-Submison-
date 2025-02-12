# Lab 1 - Core Concepts

**Author:** Ahmed Gududow

## Program Description
This program handles a simple in-memory database using a menu-driven interface. I developed this program to strengthen my understanding of core C programming concepts such as loops, functions, conditional statements, and input/output handling. 

The program provides several key functionalities, including:
- Adding records
- Deleting the most recent record
- Printing all records
- Checking the total number of records
- Determining the database size
- Tracking the number of changes

Each menu option is linked to a corresponding function that executes the desired action. Some functions currently serve as placeholders, forming the foundation for future enhancements. The program continuously runs until the user selects the exit option.

## Menu Options
1. Print all records
2. Add record
3. Delete last record
4. Print number of records
5. Print database size
6. Print number of changes
7. Exit

Users enter the corresponding number to execute an operation. The menu loops until the user selects "Exit."

## Functions
- **print_all_records()**: Currently prints a placeholder message; implementation will be added later.
- **add_record()**: Prompts the user for part number, name, size, metric, and cost, then displays the entered information.
- **delete_record()**: Placeholder function for deleting the last record.
- **print_num_records()**: Placeholder function for displaying the number of records.
- **print_database_size()**: Placeholder function for showing the database size.
- **print_num_changes(bool print)**: Either prints or increments the change count based on the input flag.

## Algorithm
1. Check if a database name is supplied as a command-line argument.
2. Display the menu and prompt the user for input.
3. Execute the corresponding function based on the user's selection.
4. Repeat the process until "Exit" is selected.

