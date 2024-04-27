#include <iostream>
#include <string>

struct PasswordEntry {
    std::string website;
    std::string username;
    std::string encryptedPassword;
    PasswordEntry* next;
};

PasswordEntry* head = nullptr;

// Password Encryption
std::string encryptPassword(const std::string& password, int key) {
    std::string encrypted = "";
    for (char c : password) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            encrypted += char((int(c - base + key)) % 26 + base);
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}

// Password Decryption
std::string decryptPassword(const std::string& encryptedPassword, int key) {
    std::string decrypted = "";
    for (char c : encryptedPassword) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            decrypted += char(int(c - base - key + 26) % 26 + base);
        } else {
            decrypted += c;
        }
    }
    return decrypted;
}

// Adding Password
void addPassword(const std::string& website, const std::string& username, const std::string& password) {
    std::string encrypted = encryptPassword(password, 3);
    PasswordEntry* newEntry = new PasswordEntry{website, username, encrypted, nullptr};
    if (!head) {
        head = newEntry;
    } else {
        PasswordEntry* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newEntry;
    }
}

// Displaying Entry Values
void displayEntry() {
    PasswordEntry* temp = head;
    while (temp != nullptr) {
        std::cout << "Website: " << temp->website
                  << ", Username: " << temp->username
                  << ", Encrypted Password: " << temp->encryptedPassword << std::endl;
        temp = temp->next;
    }
}

// Entry Search

// Deleting Entry

// Edit Password

int main() {
    addPassword("google", "bob", "password");
    displayEntry();

    if (head != nullptr) {
        std::cout << "Decrypted Password: " << decryptPassword(head->encryptedPassword, 3) << std::endl;
    }

    return 0;
}