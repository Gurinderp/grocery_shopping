#include <iostream>

void signIn(std::string& customerName);
void customerLogin(std::string& customerName);
void customerRegister(std::string& customerName);
void greetCustomer(std::string customerName);
void displayGrocery();
void processGrocery();
void checkoutCustomer();
void exitStore();

int main()
{
    std::string customerName = "Guest";
    int apples;
    int bananas;
    int oranges;
    int hershey;
    int twix;
    int taffy;
    int jolly_rancher;
    int chicken;
    int steak;
    int pork_chop;

    signIn(customerName);
    greetCustomer(customerName);
    displayGrocery();
    processGrocery();
    checkoutCustomer();
    exitStore();
}

void signIn(std::string& customerName) {
    int sign_in_selection;

    std::cout << "Please choose one of the following options:" 
        << std::endl
        << "Sign In (1), Register (2), Guest (ANY)" 
        << std::endl;
    std::cin >> sign_in_selection;

    switch (sign_in_selection) {
    case 1:
        customerLogin(customerName);
        break;
    case 2:
        customerRegister(customerName);
        break;
    };
}

void customerLogin(std::string& customerName) {
    std::cout << "Login" << std::endl;
};

void customerRegister(std::string& customerName) {
    std::cout << "Register" << std::endl;
};

void greetCustomer(std::string customerName) {
    std::cout << "Welcome to Gurinder's Gurocer, " << customerName << std::endl;
};

void displayGrocery() {
    std::cout << "Display Grocery available and amount here" << std::endl;
};

void processGrocery() {
    std::cout << "Should take the inventory and remove what the customer took." << std::endl;
}

void checkoutCustomer() {
    std::cout << "Need to create balance that is deducted" << std::endl;
};

void exitStore() {
    std::cout << "Thank you for shopping with us! Have a nice day." << std::endl;
};