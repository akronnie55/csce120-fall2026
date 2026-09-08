#include <iostream>
#include <string>

class Player {
  std::string player_name;
  unsigned int jersey_number;
  std::string position;

 public:
  // Constructors - these define what ways to build the object are allowed
  Player() : player_name{""}, jersey_number{0}, position{""} {}
  Player(const std::string name, const unsigned int num, const std::string pos)
    : player_name{name}, jersey_number{num}, position{pos} {}

  // Getter Methods
  std::string GetName() const { return player_name; }
  unsigned int GetJerseyNumber() const { return jersey_number; }
  std::string GetPosition() const { return position; }

  // Setter Methods - only provide these if you trust the rest of the code!
  void SetName(const std::string s) { player_name = s; }
  void SetJerseyNumber(const unsigned int n) { jersey_number = n; }
  void SetPosition(const std::string s) { position = s; }

  // Prints to cout, later we will learn how to generalize to any output method
  void Print() const {  // output the player's name, jersey number, and position
    std::cout << player_name << ", " << jersey_number << ", " << position << std::endl;
  }
};

int main() {
  Player goalie("Miss Rev", 1, "goalie");  // create a player object
  goalie.SetJerseyNumber(12);  // Miss Rev is the 12th man!
  goalie.Print();
}
