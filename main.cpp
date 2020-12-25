#include <iostream>

int main() {
  bool singleDeck[1] = {1};
  bool twoDeck[2] = {1, 1};
  bool threeDeck[3] = {1, 1, 1};
  bool fourDeck[4] = {1, 1, 1, 1};

  std::cout << "Однопалубники\t\t" << sizeof(singleDeck) / sizeof(bool) << "\n";
  std::cout << "Двухпалубники\t\t" << sizeof(twoDeck) / sizeof(bool) << "\n";
  std::cout << "Трехпалубники\t\t" << sizeof(threeDeck) / sizeof(bool) << "\n";
  std::cout << "Четырехпалубники\t" << sizeof(fourDeck) / sizeof(bool) << "\n";
}