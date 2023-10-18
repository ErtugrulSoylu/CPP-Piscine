#include "PhoneBook.hpp"
#include "Contact.hpp"

void    print10(std::string str) {
    if (str.length() > 10)
        std::cout << str.substr(0, 9) << ".|";
    else
        std::cout << str << std::string(10 - str.length(), ' ') << "|";
}

void    printInfo(PhoneBook Book, int ind) {
    std::cout << ind << "         |"; 
    print10(Book.Contacts[ind].firstName);
    print10(Book.Contacts[ind].lastName);
    print10(Book.Contacts[ind].nickName);
    std::cout << std::endl; 
}

void    printContact(Contact Con) {
    std::cout << "------------------------------\n";
    std::cout << Con.firstName << std::endl;
    std::cout << Con.lastName << std::endl;
    std::cout << Con.phoneNumber << std::endl;
    std::cout << Con.getDarkestSecret() << std::endl;
    std::cout << "------------------------------\n\n";
}

int main() {
    int         ind;
    std::string str;
    std::string secret;
    PhoneBook   Book;

    while (true) {
        std::cout << "Please type in:\nADD - for adding a new contact,\nSEARCH - for printing specific one,\nEXIT - to exit.\n\n";
        std::getline(std::cin, str);
        if (str == "ADD") {
            Contact Con;
            std::cout << "Type in the name of your contact:" << std::endl;
            while (Con.firstName == "")
                std::getline(std::cin, Con.firstName);
            std::cout << "Type in the last name of your contact:" << std::endl;
            while (Con.lastName == "")
                std::getline(std::cin, Con.lastName);
            std::cout << "Type in the nickname of your contact:" << std::endl;
            while (Con.nickName == "")
                std::getline(std::cin, Con.nickName);
            std::cout << "Type in the phone number of your contact:" << std::endl;
            while (Con.phoneNumber == "")
                std::getline(std::cin, Con.phoneNumber);
            std::cout << "Sssh.. Can you tell me a secret of him/her?" << std::endl;
            while (secret == "")
                std::getline(std::cin, secret);
            Con.setDarkestSecret(secret);
            secret = "";
            Book.addOne(Con);
        } else if (str == "SEARCH") {
            for (int i = 0; i < 8; i++) {
                if (i < Book.i)
                    printInfo(Book, i);
            }
            ind = -1;
            while (ind < 0 || ind > 8) {
                std::cout << "type which contact to display : [0 to 8]" << std::endl;
                std::cin >> ind;
            }
            std::cout << std::endl;
            printContact(Book.Contacts[ind]);
        } else if (str == "EXIT") {
            break ;
        }
    }
    return 0;
}