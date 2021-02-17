#include <iostream>

void signIn(std::string& customerName);
void customerLogin(std::string& customerName);
void customerRegister(std::string& customerName);
void greetCustomer(std::string customerName);
void displayGrocery(int apples, int bananas, int oranges, 
    int hershey, int twix, int taffy, 
    int jolly_rancher, int chicken, 
    int steak, int pork_chop);
void customerCart(int& applesTaken,
    int& bananasTaken, int& orangesTaken,
    int& hersheyTaken, int& twixTaken, int& taffyTaken,
    int& jolly_rancherTaken, int& chickenTaken, int& steakTaken,
    int& pork_chopTaken);
void processGrocery(int apples, int bananas, int oranges,
    int hershey, int twix, int taffy, int jolly_rancher,
    int chicken, int steak, int pork_chop, int applesTaken,
    int bananasTaken, int orangesTaken,
    int hersheyTaken, int twixTaken, int taffyTaken,
    int jolly_rancherTaken, int chickenTaken, int steakTaken,
    int pork_chopTaken);
void checkoutCustomer();
void exitStore();

int main()
{
    std::string customerName = "Guest";
    int apples = 100;
    int bananas = 100;
    int oranges = 100;
    int hershey = 10;
    int twix = 10;
    int taffy = 10;
    int jolly_rancher = 10;
    int chicken = 50;
    int steak = 50;
    int pork_chop = 50;
    int applesTaken;
    int bananasTaken;
    int orangesTaken;
    int hersheyTaken;
    int twixTaken;
    int taffyTaken;
    int jolly_rancherTaken;
    int chickenTaken;
    int steakTaken;
    int pork_chopTaken;

    signIn(customerName);
    greetCustomer(customerName);
    displayGrocery(apples, bananas, oranges, hershey, twix, taffy, jolly_rancher, chicken, steak, pork_chop);
    customerCart(applesTaken, 
        bananasTaken, orangesTaken,
        hersheyTaken, twixTaken, taffyTaken,
        jolly_rancherTaken, chickenTaken, steakTaken,
        pork_chopTaken);
    processGrocery(apples, bananas, oranges,
        hershey, twix, taffy, jolly_rancher,
        chicken, steak, pork_chop, applesTaken,
        bananasTaken, orangesTaken,
        hersheyTaken, twixTaken, taffyTaken,
        jolly_rancherTaken, chickenTaken, steakTaken,
        pork_chopTaken);
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

void customerLogin(std::string& customerName) 
{
    std::cout << "Please enter username:"
        << std::endl;
    std::cin >> customerName;
};

void customerRegister(std::string& customerName) 
{
    std::cout << "Register" << std::endl;
};

void greetCustomer(std::string customerName) 
{
    std::cout << "Welcome to Gurinder's Gurocer, " 
        << customerName 
        << "!" 
        << std::endl;
};

void displayGrocery(int apples, int bananas, int oranges, 
    int hershey, int twix, int taffy, 
    int jolly_rancher, int chicken, 
    int steak, int pork_chop) 
{
    system("cls");
    std::cout << "Here is the available grocery:"
        << std::endl
        << "Apples: " << apples
        << std::endl
        << "Bananas: " << bananas
        << std::endl
        << "Oranges: " << oranges
        << std::endl
        << "Hershey: " << hershey
        << std::endl
        << "Twix: " << twix
        << std::endl
        << "Taffy: " << taffy
        << std::endl
        << "Jolly Ranchers: " << jolly_rancher
        << std::endl
        << "Chicken: " << chicken
        << std::endl
        << "Steak: " << steak
        << std::endl
        << "Pork Chops: " << pork_chop
        << std::endl;
};

void customerCart(int& applesTaken,
    int& bananasTaken, int& orangesTaken,
    int& hersheyTaken, int& twixTaken, int& taffyTaken,
    int& jolly_rancherTaken, int& chickenTaken, int& steakTaken,
    int& pork_chopTaken)
{
    std::cout << "Enter your desired amount:"
        << std::endl
        << "Apples: ";
    std::cin >> applesTaken;
    std::cout
        << std::endl
        << "Bananas: ";
    std::cin >> bananasTaken;
    std::cout
        << std::endl
        << "Oranges: ";
    std::cin >> orangesTaken;
    std::cout
        << std::endl
        << "Hershey: ";
    std::cin >> hersheyTaken;
    std::cout
        << std::endl
        << "Twix: ";
    std::cin >> twixTaken;
    std::cout
        << std::endl
        << "Taffy: ";
    std::cin >> taffyTaken;
    std::cout
        << std::endl
        << "Jolly Ranchers: ";
    std::cin >> jolly_rancherTaken;
    std::cout
        << std::endl
        << "Chicken: ";
    std::cin >> chickenTaken;
    std::cout
        << std::endl
        << "Steak: ";
    std::cin >> steakTaken;
    std::cout
        << std::endl
        << "Pork Chops: ";
    std::cin >> pork_chopTaken;
};

void processGrocery(int apples, int bananas, int oranges,
    int hershey, int twix, int taffy, int jolly_rancher,
    int chicken, int steak, int pork_chop, int applesTaken,
    int bananasTaken, int orangesTaken,
    int hersheyTaken, int twixTaken, int taffyTaken,
    int jolly_rancherTaken, int chickenTaken, int steakTaken,
    int pork_chopTaken)
{
    std::cout << "Should take the inventory and remove what the customer took." 
        << std::endl;
}

void checkoutCustomer() 
{
    std::cout << "Need to create balance that is deducted" 
        << std::endl;
};

void exitStore() 
{
    std::cout << "Thank you for shopping with us! Have a nice day." 
        << std::endl;
};