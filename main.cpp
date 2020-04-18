#include <iostream>

int main()
{
    int money;
    
    double price;
    

    std::cout << "Welcome to the Coffee Shop. What would you like to order?" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "1- Frappe(6.25), 2- Regular Coffee(1.99), 3- Latte(4.95)" << std::endl;
    int num;
    std::cin >> num;
   
   if(num == 1)
   {
       price = 6.25;
       std::cout << "That'll be $6.25. (Give Money)";
       std::cin >> money;
       std::cout << money - price << std::endl;

   }
   if(num == 2)
   {
       price = 1.99;
       std::cout << "That'll be $1.99. (Give Money)";
       std::cin >> money;
       std::cout << money - price << std::endl;

   }
   if(num == 3)
   {
       price = 4.95;
       std::cout << "That'll be $4.95. (Give Money)";
       std::cin >> money;
       std::cout << money - price << std::endl;

   }
   else
   {


   }
//price of items need to be a variable so i can do math
    return 0;
}