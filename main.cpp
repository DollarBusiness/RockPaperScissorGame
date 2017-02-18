#include <iostream>
#include <cstdlib>

using namespace std;

int game()
{
    int rock = 1;
    int paper = 2;
    int scissor = 3;
    int user;
    int comp = rand() % 3 + 1;
    string answer;

    cout << "Rock (1), Paper (2), Scissor (3): ";
    cin >> user;

    //CREATE CONDITION BASED ON USER AND COMP TIES THEN PRINT OUT WHAT THEY CHOSE
    if(user == comp)
    {
        cout << "TIE!" << endl;
    }
    else if(user == rock && comp == paper)
    {
        cout << "YOU LOSE!" << endl;
        cout << "Computer choice: Paper" << endl;
    }
    else if(user == rock && comp == scissor)
    {
        cout << "YOU WIN!" << endl;
        cout << "Computer choice: Scissor" << endl;
    }
    else if(user == paper && comp == rock)
    {
        cout << "YOU WIN!" << endl;
        cout << "Computer choice: Rock" << endl;
    }
    else if(user == paper && comp == scissor)
    {
        cout << "YOU LOSE!" << endl;
        cout << "Computer choice: Scissor" << endl;
    }
    else if(user == scissor && comp == rock)
    {
        cout << "YOU LOSE!" << endl;
        cout << "Computer choice: ROCK" << endl;
    }
    else if(user == scissor && comp == paper)
    {
        cout << "YOU WIN!" << endl;
        cout << "Computer choice: Paper" << endl;
    }
    else
    {
        cout << "Error occured." << endl; //THIS SHOULD NEVER POP UP, IF IT DOES THEN THERE IS AN ISSUE WITH CODE
    }

    cout << "Play again? If so, press (y): ";
    cin >> answer;
    cout << "\n";
    while(answer == "Y" || answer == "y")
    {
        game();
    }
    return 0;
}

int main()
{
    cout << "*** WELCOME TO ROCK, PAPER, SCISSOR! TRY YOUR LUCK!! ***\n" << endl;
    game();


    return 0;
}
