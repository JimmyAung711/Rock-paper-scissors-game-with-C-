#include <iostream>

char playerChoice();
char computerChoice();
void showChoice(char choice);
void showWinner(char player,char computer);

int main(){
          std::cout << "\n";
          std::cout << "Rock Paper Scissors game\n";
          char player;
          char computer;
          char again;
          do{

                    player = playerChoice();
                    std::cout << "Your choice: ";
                    showChoice(player);

                    computer = computerChoice();
                    std::cout << "Computer's choice: ";
                    showChoice(computer);

                    showWinner(player,computer);
                    std::cout << "Do you want to play again(Y/N): ";
                    std::cin >> again;
          }while(again != 'N' && again != 'n');
          std::cout << "Thanks for playing";
          return 0;
};

char playerChoice(){
          char choice;
          do{
                    std::cout << "-----------------------------\n";
                    std::cout << "Choose the following options\n";
                    std::cout << "-----------------------------\n";
                    std::cout << "'r for rock\n";
                    std::cout << "'p' for paper\n";
                    std::cout << "'s' for scissors\n";
                    std::cout << "Enter: ";
                    std::cin >> choice;

          }while(choice != 'r' && choice != 'p' && choice != 's');
          return choice;
};

char computerChoice(){
          srand(time(0));
          int choice = (rand() % 3) + 1;
          switch(choice){
                    case 1: return 'r';
                    case 2: return 'p';
                    case 3: return 's';
          };
          return 0;
};

void showChoice(char choice){
          switch(choice){
                    case 'r': std::cout << "Rock\n";
                              break;
                    case 'p': std::cout << "Paper\n";
                              break;
                    case 's': std::cout << "Scissors\n";
                              break;
          };
};

void showWinner(char player, char computer){
          switch(player){
                    case 'r': if(computer == 'r'){
                                        std::cout << "It is a tie.\n";
                              }else if(computer == 'p'){
                                        std::cout << "You lose.\n";
                              }else if(computer = 's'){
                                        std::cout << "You win.\n";
                              };
                              break;
                    case 'p': if(computer == 'r'){
                                        std::cout << "You win\n";
                              }else if(computer == 'p'){
                                        std::cout << "It is a tie.\n";
                              }else if(computer = 's'){
                                        std::cout << "You lose.\n";
                              };
                              break;
                    case 's': if(computer == 'r'){
                                        std::cout << "You lose.\n";
                              }else if(computer == 'p'){
                                        std::cout << "You win.\n";
                              }else if(computer = 's'){
                                        std::cout << "It is a tie.\n";
                              };
                              break;          

          }
};