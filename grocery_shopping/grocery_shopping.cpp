#include <iostream>

void greetCustomer();
void displayGrocery();
void processGrocery();
void checkoutCustomer();
void exitStore();

int main()
{
    char customerName;
    int apples;

    greetCustomer();
    displayGrocery();
    processGrocery();
    checkoutCustomer();
    exitStore();
}

void greetCustomer() {
    std::cout << "Welcome to Gurinder's Gurocer!" << std::endl;
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