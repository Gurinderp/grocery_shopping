#include <iostream>
#include <thread>

void signIn(std::string& customerName);
void customerLogin(std::string customerName);
void customerRegister(std::string customerName);
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
void checkoutCustomer(int applesTaken,
    int bananasTaken, int orangesTaken,
    int hersheyTaken, int twixTaken, int taffyTaken,
    int jolly_rancherTaken, int chickenTaken, int steakTaken,
    int pork_chopTaken);
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
    checkoutCustomer(applesTaken,
        bananasTaken, orangesTaken,
        hersheyTaken, twixTaken, taffyTaken,
        jolly_rancherTaken, chickenTaken, steakTaken,
        pork_chopTaken);
    exitStore();
}

void signIn(std::string& customerName) {
    int sign_in_selection;

    std::cout << "Please choose one of the following options:" 
        << std::endl
        << "Sign In (1), Register (2), Guest (3)" 
        << std::endl;
    std::cin >> sign_in_selection;

    switch (sign_in_selection) {
    case 1:
        customerLogin(customerName);
        break;
    case 2:
        customerRegister(customerName);
        break;
    case 3:
        greetCustomer(customerName = "Guest");
    }
}

void customerLogin(std::string customerName) 
{
    std::cout << "Please enter username:"
        << std::endl;
    std::cin >> customerName;
    greetCustomer(customerName);
};

void customerRegister(std::string customerName) 
{
    std::cout << "Please enter username:"
        << std::endl;
    std::cin >> customerName;
    greetCustomer(customerName);
};

void greetCustomer(std::string customerName) 
{
    std::cout << "Welcome to Gurinder's Gurocer, " 
        << customerName 
        << "!" 
        << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
};

void displayGrocery(int apples, int bananas, int oranges, 
    int hershey, int twix, int taffy, 
    int jolly_rancher, int chicken, 
    int steak, int pork_chop) 
{
    system("cls");
    std::cout << "Here is the available grocery:"
        << std::endl
        << "\n FRUITS"
        << std::endl
        << "Apples: " << apples
        << std::endl
        << "Bananas: " << bananas
        << std::endl
        << "Oranges: " << oranges
        << std::endl
        << "\n CANDY"
        << std::endl
        << "Hershey: " << hershey
        << std::endl
        << "Twix: " << twix
        << std::endl
        << "Taffy: " << taffy
        << std::endl
        << "Jolly Ranchers: " << jolly_rancher
        << std::endl
        << "\n MEAT"
        << std::endl
        << "Chicken: " << chicken
        << std::endl
        << "Steak: " << steak
        << std::endl
        << "Pork Chops: " << pork_chop
        << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
};

void customerCart(int& applesTaken,
    int& bananasTaken, int& orangesTaken,
    int& hersheyTaken, int& twixTaken, int& taffyTaken,
    int& jolly_rancherTaken, int& chickenTaken, int& steakTaken,
    int& pork_chopTaken)
{
    std::cout 
        << "\n Enter your desired amount:" 
        << std::endl 
        << "\n FRUITS" 
        << std::endl
        << "Apples: ";
    std::cin >> applesTaken;
    std::cout << "Bananas: ";
    std::cin >> bananasTaken;
    std::cout << "Oranges: ";
    std::cin >> orangesTaken;
    std::cout << "\n CANDY" 
        << std::endl 
        << "Hershey: ";
    std::cin >> hersheyTaken;
    std::cout << "Twix: ";
    std::cin >> twixTaken;
    std::cout << "Taffy: ";
    std::cin >> taffyTaken;
    std::cout << "Jolly Ranchers: ";
    std::cin >> jolly_rancherTaken;
    std::cout << "\n MEAT"
        << std::endl
        << "Chicken: ";
    std::cin >> chickenTaken;
    std::cout << "Steak: ";
    std::cin >> steakTaken;
    std::cout << "Pork Chops: ";
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
    system("cls");
    std::cout << "Your cart:"
        << std::endl
        << "\n FRUITS"
        << std::endl
        << "Apples: " << applesTaken
        << std::endl
        << "Bananas: " << bananasTaken
        << std::endl
        << "Oranges: " << orangesTaken
        << std::endl
        << "\n CANDY"
        << std::endl
        << "Hershey: " << hersheyTaken
        << std::endl
        << "Twix: " << twixTaken
        << std::endl
        << "Taffy: " << taffyTaken
        << std::endl
        << "Jolly Ranchers: " << jolly_rancherTaken
        << std::endl
        << "\n MEAT"
        << std::endl
        << "Chicken: " << chickenTaken
        << std::endl
        << "Steak: " << steakTaken
        << std::endl
        << "Pork Chops: " << pork_chopTaken
        << std::endl;
}

void checkoutCustomer(int applesTaken,
    int bananasTaken, int orangesTaken,
    int hersheyTaken, int twixTaken, int taffyTaken,
    int jolly_rancherTaken, int chickenTaken, int steakTaken,
    int pork_chopTaken)
{
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "Need to create balance that is deducted" 
        << std::endl;
};

void exitStore() 
{
    std::cout << "Thank you for shopping with us! Have a nice day." 
        << std::endl;
};