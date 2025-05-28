# -studeent-managment-system-6
README: Student Management System
Project Overview
This C++ program implements a Student Management System using a singly linked list to store and manage student records. The system provides CRUD operations (Create, Read, Update, Delete) and persists data to a text file (Students.txt).

Key Features
Data Management

Add new student records

Search for students by ID

Update existing records

Delete student records

View all records

Count total records

Persistent Storage

Automatically saves data to Students.txt

Loads existing data on program startup

File format: Each record has 6 fields separated by newlines

Data Validation

Ensures unique student IDs

Handles empty list cases

File Format (Students.txt)
Each student record is stored in this format:

[Roll Number]
[Name]
[Course]
[Qualification]
[Phone Number]
[Address]

[Next record...]
How to Compile and Run
Prerequisites:

C++ compiler (g++ recommended)

Windows OS (uses <conio.h>)

Steps:

Save the code as student_management.cpp

Compile:

bash
g++ student_management.cpp -o student_management
Run:

bash
.\student_management.exe
Menu Options
STUDENT MANAGEMENT SYSTEM
1. Insert Record
2. Search Record
3. Count Records
4. Update Record
5. Delete Record
6. Show All Records
7. Exit
Code Structure
Node Class

Stores student data fields

Contains pointer to next node

LinkedList Class

loadFromFile(): Reads data from file on startup

saveToFile(): Persists data after changes

isIDUnique(): Prevents duplicate IDs

CRUD operations: insert(), search(), update(), deleteRecord()

Utility functions: count(), showAll()

Main Function

Menu-driven interface

Handles user input

Calls LinkedList operations

Limitations
Platform Dependency

Uses Windows-specific headers (<conio.h> and system("cls"))

Won't run on Linux/macOS without modifications

Input Validation

No format checking for phone numbers

No name validation (special characters allowed)

Performance

File rewritten entirely after each modification

Linear search (O(n) complexity)

Future Improvements
Cross-Platform Support

Replace conio.h with cross-platform alternatives

Use preprocessor directives for OS-specific code

Enhanced Validation

Phone number format checking

Name/surname format restrictions

Performance Optimization

Use binary search tree for faster lookups

Append-only file updates

Additional Features

Course enrollment management

Grade tracking

Data export to CSV

Error Handling
Handles file I/O errors silently

Prevents duplicate ID insertion

Checks for empty list before operations

Note: Data is automatically saved to Students.txt after every modification. Backup this file regularly.

