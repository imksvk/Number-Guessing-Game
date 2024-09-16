#include<bits/stdc++.h>
using namespace std;


class Guesser{
    int guessed_num;
    public:
        int takeguesserinput(){
            cout<<"Give the number for the guesser"<<endl;
            int x;
            cin>>x;
            guessed_num = x;
            return guessed_num;
        }
};

class Umpire{

};

class Player{
    
    int playernum;
    public:
        int takeplayerinput(){
            int p;
            cout<<"Give the number guessed by the player :"<<endl;
            cin>>p;
            playernum = p;
            return playernum;
        }

};


int main(){
    
    cout<<"Welcome to Number Guessing Game"<<endl;
    cout<<"Let's Start the Game "<<endl;

     



     




    cout<<"Let's End the Game"<<endl;
    return 0;
}