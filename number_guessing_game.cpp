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

    int g;
    int p1, p2 , p3;

    public:
        void get_the_number_from_guesser(){
            Guesser g1;
            g = g1.takeguesserinput();
        }
        int get_the_number_from_player(){

        }

        int print_the_result(){

        }
        

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