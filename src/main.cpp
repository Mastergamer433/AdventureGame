#include "iostream"
#include "player.cpp"

using adventure::Player;
using std::cin;
using std::cout;
using std::string;

int initGame(Player player){

  return 0;  
}

int savePlayer(){

  return 0;
}

int startGame(Player player){
  while (!player.gameOver) {
    cout << "Hi mr. dumbson, what can i do for you today?\n\nohhh it's you, yes, i need some metal, tree and obsidian. Can you fix that?\n\n";
    char tmp;
    cin >> tmp;
    if(tmp == 'y'){
      player.quest = 1;
    }
    if (player.quest) {
      
    }
  }
  return 0;
}

int mainMenu(Player player) {
  string done;
  while (done != "Y") {
    std::cout << "Character setup: ";
    cout << "[M]ale/[F]emale? ";
    cin >> player.sex;
    cout << "Character class([R]ouge/[M]age): ";
    cin >> player.Class;
    cout << "Character age: ";
    cin >> player.age;
    cout << "Is this good? You cant change it later!";
    cout << "\nAge: " << player.age;
    cout << "\nClass: ";
    if (player.Class == 'M')
      cout << "Mage\n";
    else
      cout << "Rouge\n";

    cout << "Sex: ";
    if (player.sex == 'M')
      cout << "Male\n";
    else
      cout << "Female\n";
    cout << "Y/n: ";
    cin >> done;
    if (done == "") {
      done = "Y";
    }
  }
  //  savePlayer(player);
  return 0;
  
}

int main() {
  Player player;
  string done;
  initGame(player);
  mainMenu(player);
  startGame(player);
  return 0;
};

