#include <iostream>
#include <string>

#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

enum class Choice{rock, paper, scissors};

Choice favorite;
Choice second_favorite;
Choice third_favorite;

void set_favorites();





Choice player_choice; // HOlds user's move
Choice computer_choice; // HOlds computer's move


string words[3] = {"rock", "paper", "scissors"};

Choice get_computer_choice(); // return type is enum Choice

void decide_winner();
string get_msg(Choice winner);
int rand0toN1(int n);





int main(int argc, char *argv[])

{
    set_favorites();

    srand( time(NULL) ) ; //Set seed for randomization
    string input_str;

    int c;

    while(true)
    {
        cout << "Enter Rock, Paper, Scissors or Exit: ";
        getline(cin, input_str);

        if(input_str.size() < 1)
        {
            cout << "Invalid input." << endl;
            continue;
        }

        c = input_str[0];

        if(c == 'R' || c=='r')
            player_choice = Choice::rock;
        else if(c == 'P' || c == 'p')
            player_choice = Choice::paper;
        else if (c == 'S' || c == 's')
            player_choice = Choice::scissors;

        else if(c == 'E' || c== 'e')
            break;
        else
        {
            cout << "INvalid input." <<endl;
            continue;

        }

        computer_choice = get_computer_choice();
        int p = (int) player_choice;
        int c = (int) computer_choice;

        cout<< "You chose " << words[p];
        cout << "," << endl;

        cout << "I chose " << words[c];
        cout << "," << endl;

        decide_winner();
    }



    return 0;
}

void set_favorites()
{
    int n = rand0toN1(3);
    favorite = static_cast<Choice>(n);

    int m = rand0toN1(2); // m will be 0 or 1

    if(m == 0)
    {
        second_favorite = static_cast<Choice>((n+1) % 3);
        third_favorite = static_cast<Choice>((n+2) % 3);

    }

    else
    {
        second_favorite = static_cast<Choice>((n+2) % 3);
        third_favorite = static_cast<Choice>((n+1) % 3);
    }
}

Choice get_computer_choice()

{
    int n = rand0toN1(20);

    if(n >= 0 && n <= 10);
        return favorite;
    if(n >= 11 && n <= 16)
        return second_favorite;
    return third_favorite;


}

void decide_winner()
{
    if(player_choice == computer_choice)
    {
        cout << "Result is a tie." << endl;
        return;
    }

    int p = static_cast<int>(player_choice);
    int c = static_cast<int>(computer_choice);

    if(p - c == 1 || p - c == -2)
    {
        cout << get_msg(player_choice);
        cout << "YOU Win!" << endl;
    }

    else
    {
        cout << get_msg(computer_choice);
        cout << "I win!" << endl;

    }

    cout << endl;

}

string get_msg(Choice winner)
{
    if(winner == Choice::rock)
        return string("Rock smashers scissor...");

    else if(winner == Choice::paper)
        return string("Paper covers rock...");
    else
        return string("Scissors cuts paper...");

}

int rand0toN1(int n)
{

    return rand() % n;
}

