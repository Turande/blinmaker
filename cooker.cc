#include <iostream>

int main()
{

  auto eggsAmount{};
  auto eggsMin{1};
  auto milkAmount{};
  auto milkMin{200}; /* millilitres */
  auto flourAmount{};
  auto flourMin{100}; /* grams */

  std::cout << "Hello, Penny!\n";
  std::cout << "Blinmaker starting up..\n";

  std::cout << "How many eggs you have?";
  std::cin >> eggsAmount;
  //std::cout << "You have " << eggsAmount << " eggs.\n";

  std::cout << "How much milk you have?";
  std::cin >> milkAmount;
  //std::cout << "You have " << milkAmount << "ml of milk.\n";
    
  std::cout << "How much flour you have?";
  std::cin >> flourAmount;
  //std::cout << "You have " << flourAmount << "g of flour.\n";

    if (eggsAmount < eggsMin || flourAmount < flourMin || milkAmount < milkMin){
        std::cout << "No blins today :(" << '\n';
    }
    else{
        flourAmount = {flourAmount / flourMin};
        std::cout << "You have " << flourAmount << " portions of flour.\n";

        milkAmount = {milkAmount / milkMin};
        std::cout << "You have " << milkAmount << " portions of milk.\n";

        auto smallest{};
        if(eggsAmount <= milkAmount && milkAmount <= flourAmount){
            smallest = {eggsAmount};
        }
        else if(milkAmount <= flourAmount && milkAmount <= eggsAmount){
            smallest = {milkAmount};
        }
        else{
            smallest = {flourAmount};
        }

        std::cout << '\n';
        std::cout << "You can make " << smallest * 4 << " of blins\n";
        std::cout << '\n';
        std::cout << "You will need " << smallest * eggsMin << " eggs.\n";
        std::cout << "You will need " << smallest * flourMin << " grams flour.\n";
        std::cout << "You will need " << smallest * milkMin << "ml milk.\n";
        std::cout << '\n';

        std::cout << "Blinmaker shutting down..\n";
    }

    return 0;

}
