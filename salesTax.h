
#include <iostream>
#include <iomanip>

 void salesTax(){
   
    double salesTax, itemCost;
    
    std::cout << "What the current sales tax percent for your area?: ";
    
    do {
        std::cin >> salesTax;
        if (salesTax  > 12 || salesTax < 0 ){
            std::cout << "Please enter a valid sales tax percent from 0 - 12.0 \n";
        }
    } while (salesTax > 12 || salesTax < 0);
    
    std::cout << "How much was the item you purchased?: $";
    std::cin >> itemCost;
    
    salesTax = salesTax * itemCost * .01;
    itemCost = itemCost + salesTax;
    
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout <<"\nYour sales tax is $" << salesTax << std::endl;
    std::cout <<"Your total price to pay is $"  <<itemCost;
    
}
