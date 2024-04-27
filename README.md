# Password Manager

## Overview
This Password Manager is a C++ application designed to securely store and manage your passwords. The application encrypts passwords before saving them to ensure security. A GUI is integrated to enhance user interaction, making it easy to add, retrieve, update, and delete password entries.

## Features
- **Secure Password Storage**: Encrypts passwords using a simple Caesar cipher before storing.
- **Easy Navigation**: GUI allows for seamless interaction with the application.
- **Add Passwords**: Easily add new password entries with associated websites and usernames.
- **View Passwords**: View a list of all stored passwords with encryption.
- **Decrypt Passwords**: Decrypt and display passwords.
- **Update Entries**: Update existing entries (Feature in development).
- **Delete Entries**: Remove entries no longer needed (Feature in development).
- **Search Functionality**: Quickly find passwords by website or username (Feature in development).

## Prerequisites
- C++ Compiler (C++17 or later recommended)
- GUI Framework (e.g., Qt, GTK, or any other you are using)

## Building the Project
Provide detailed steps on how to build your project including setting up the environment, compiling the code, and running the application.

### Example with `g++`:
```bash
g++ -o PasswordManager main.cpp -std=c++17 -lYourGuiLibrary
