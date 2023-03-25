#include <iostream>
using namespace std;

// Guess the Number Game in C++

int main(){

    /*print out the game rules and welcome the player to the game.*/
    cout<<"RULES -\n#1) You Have to Guess a Number Between 1-100.\n#2) You Will Get 7 Chances/guesses.\n#3) After Every Guess You Will Get a Feedback Indicating Whether You Guessed Too High Or Too Low.\n#4) Good Luck! :D\n\n";
    
    /*declare and initialize the variables used in the game*/
    int secret = 45;        // the number the player has to guess
    int ui;                 // the player's guess
    bool exit_number = 0;   // boolean variable that will be set to true if the player correctly guesses the secret number
    

    // main loop of the game. It loops through 7 times (the player gets 7 guesses) and prompts the player to enter their guess each time.
    for(int g = 1; g < 8; g++){
        cout<<"------------------\nGuess #"<<g<<"-\nEnter Your Guess: \n";
        cin>>ui;
        cout<<"\n";
        
        // If the player's guess is equal to the secret number, exit_number is set to true and the loop is exited.
        if(ui == secret){
            exit_number = 1;
            break;
        }
        // If the player's guess is not equal to the secret number, the game tells the player whether their guess was too high or too low.
        else if(ui<secret){
            cout<<"You Guessed Too Low, Try Entering a Higher Number!\n\n";
        }
        
        else{
            cout<<"You Guessed Too High, Try Entering a Lower Number!\n\n";
        }
    }

    /*if the player did not guess the secret number in 7 tries, they lose. 
    If they did guess the secret number, they win and the game tells them 
    what the secret number was. The program then returns 0, indicating that 
    it has run successfully.*/ 
    if(exit_number == 0){
        cout<<"Your 7 Guesses are over, better luck next time!";}
    else{cout<<"Congratulations You Won!!!\nThe Secret Number Was "<<secret;}
        
    
    return 0;
}

