#include <iostream>
#include <thread>

// Beginning of path - Login, Register, and Guest paths offered
void signIn(std::string& customerName, float& customerBalance);

// Login Path
void customerLogin(std::string& customerName, float& customerBalance);

// Register Path
void customerRegister(std::string& customerName, float& customerBalance);

// Guest Path
void initializeGuest(std:: string& customerName, float& customerBalance);

// Greeting displayed after path is chosen
void greetCustomer(std::string customerName, float customerBalance);

// Displays Grocery available for the day
void displayGrocery(int apples, int bananas, int oranges, 
    int hershey, int twix, int taffy, 
    int jolly_rancher, int chicken, 
    int steak, int pork_chop, float customerBalance);

// Displays customers cart after selections
void customerCart(int& applesTaken,
    int& bananasTaken, int& orangesTaken,
    int& hersheyTaken, int& twixTaken, int& taffyTaken,
    int& jolly_rancherTaken, int& chickenTaken, int& steakTaken,
    int& pork_chopTaken, std::string confirmationSelection);

void displayCart(int applesTaken,
    int bananasTaken, int orangesTaken,
    int hersheyTaken, int twixTaken, int taffyTaken,
    int jolly_rancherTaken, int chickenTaken, int steakTaken,
    int pork_chopTaken, std::string confirmationSelection);

// Processes inventory to adjust for customer shopping
void processGrocery(int apples, int bananas, int oranges,
    int hershey, int twix, int taffy, int jolly_rancher,
    int chicken, int steak, int pork_chop, int applesTaken,
    int bananasTaken, int orangesTaken,
    int hersheyTaken, int twixTaken, int taffyTaken,
    int jolly_rancherTaken, int chickenTaken, int steakTaken,
    int pork_chopTaken);

// Allows customer to discard grocery from cart
void discardGrocery();

// Deducts grocery cost from customer balance
void checkoutCustomer(int applesTaken,
    int bananasTaken, int orangesTaken,
    int hersheyTaken, int twixTaken, int taffyTaken,
    int jolly_rancherTaken, int chickenTaken, int steakTaken,
    int pork_chopTaken);

// Exits store
void exitStore();

int main()
{
    // Customer Information
    std::string customerName = "Guest";
    float customerBalance;

    // GROCERY STOCK VAIRABLES
    // Fruit variables
    int apples = 100;
    int bananas = 100;
    int oranges = 100;
    // Candy variables
    int hershey = 10;
    int twix = 10;
    int taffy = 10;
    int jolly_rancher = 10;
    // Meat variables
    int chicken = 50;
    int steak = 50;
    int pork_chop = 50;

    // CUSTOMER CART VARIABLES
    // Fruit variables
    int applesTaken;
    int bananasTaken;
    int orangesTaken;
    // Candy variables
    int hersheyTaken;
    int twixTaken;
    int taffyTaken;
    int jolly_rancherTaken;
    // Meat variables
    int chickenTaken;
    int steakTaken;
    int pork_chopTaken;

    // ETC
    std::string confirmationSelection;

    signIn(customerName, customerBalance);
    displayGrocery(apples, bananas, oranges, hershey, twix, taffy, jolly_rancher, chicken, steak, pork_chop, customerBalance);
    customerCart(applesTaken, 
        bananasTaken, orangesTaken,
        hersheyTaken, twixTaken, taffyTaken,
        jolly_rancherTaken, chickenTaken, steakTaken,
        pork_chopTaken, confirmationSelection);
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

// Beginning of path - Login, Register, and Guest paths offered
void signIn(std::string& customerName, float& customerBalance) {
    int sign_in_selection;
    // Prompt to choosing path
    std::cout << "Please choose one of the following options:" 
        << std::endl
        << "Sign In (1), Register (2), Guest (3)" 
        << std::endl;
    // Selection for path
    std::cin >> sign_in_selection;

    switch (sign_in_selection) {
    case 1:
        // Begins Login path
        customerLogin(customerName, customerBalance);
        break;
    case 2:
        // Begins Register path
        customerRegister(customerName, customerBalance);
        break;
    case 3:
        // Begins Guest path
        initializeGuest(customerName, customerBalance);
    }
}

// Login Path -- NEEDS WORK
void customerLogin(std::string& customerName, float& customerBalance)
{
    std::cout << "Please enter username:"
        << std::endl;
    std::cin >> customerName;
};

// Register Path -- NEEDS WORK
void customerRegister(std::string& customerName, float& customerBalance)
{
    std::cout << "Please enter username:"
        << std::endl;
    std::cin >> customerName;
};

// Guest Path
void initializeGuest(std::string& customerName, float& customerBalance) 
{
    customerName = "Guest";
    customerBalance = 200.00;
    greetCustomer(customerName, customerBalance);
}

// Greeting displayed after path is chosen
void greetCustomer(std::string customerName, float customerBalance) 
{
    // Greets customer by name
    std::cout << "Welcome to Gurinder's Gurocer, "
        << customerName
        << "!"
        << std::endl
        << "Your Balance: $"
        << customerBalance
        << std::endl;
    // 2 second delay before executing displayGrocery
    std::this_thread::sleep_for(std::chrono::seconds(2));
};


// Displays Grocery available for the day
void displayGrocery(int apples, int bananas, int oranges, 
    int hershey, int twix, int taffy, 
    int jolly_rancher, int chicken, 
    int steak, int pork_chop, float customerBalance) 
{
    // clears console
    system("cls");
    // Lists available grocery
    std::cout
        << "Your Balance: $"
        << customerBalance
        << std::endl
        << "Here is the available grocery:"
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
    // 2 second delay before executing customerCart
    std::this_thread::sleep_for(std::chrono::seconds(2));
};

// Displays customers cart after selections
// Needs confirmation selection
void customerCart(int& applesTaken,
    int& bananasTaken, int& orangesTaken,
    int& hersheyTaken, int& twixTaken, int& taffyTaken,
    int& jolly_rancherTaken, int& chickenTaken, int& steakTaken,
    int& pork_chopTaken, std::string confirmationSelection)
{
    // Prompts user to enter the amount of food they want
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
    displayCart(applesTaken,
        bananasTaken, orangesTaken,
        hersheyTaken, twixTaken, taffyTaken,
        jolly_rancherTaken, chickenTaken, steakTaken,
        pork_chopTaken, confirmationSelection);
};

void displayCart(int applesTaken,
    int bananasTaken, int orangesTaken,
    int hersheyTaken, int twixTaken, int taffyTaken,
    int jolly_rancherTaken, int chickenTaken, int steakTaken,
    int pork_chopTaken, std::string confirmationSelection)
{
    // Clears console
    system("cls");
    // Displays items in customers cart
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
        << std::endl
        << "Is this correct? (Y/N): ";
    std::cin >> confirmationSelection;
    // 3 second delay before executing checkoutCustomer
    std::this_thread::sleep_for(std::chrono::seconds(3));
}

// Processes inventory to adjust for customer shopping -- NEEDS WORK
void processGrocery(int apples, int bananas, int oranges,
    int hershey, int twix, int taffy, int jolly_rancher,
    int chicken, int steak, int pork_chop, int applesTaken,
    int bananasTaken, int orangesTaken,
    int hersheyTaken, int twixTaken, int taffyTaken,
    int jolly_rancherTaken, int chickenTaken, int steakTaken,
    int pork_chopTaken)
{
    
}

// Allows customer to discard grocery from cart
void discardGrocery() 
{

}

// Deducts grocery cost from customer balance -- NEEDS WORK
void checkoutCustomer(int applesTaken,
    int bananasTaken, int orangesTaken,
    int hersheyTaken, int twixTaken, int taffyTaken,
    int jolly_rancherTaken, int chickenTaken, int steakTaken,
    int pork_chopTaken)
{
    std::cout << "Need to create balance that is deducted" 
        << std::endl;
};

// Exits store -- NEEDS WORK
void exitStore() 
{
    std::cout << "Thank you for shopping with us! Have a nice day." 
        << std::endl;
};