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

class Player{
    
    int playernum;
    public:
        int takeplayerinput( int x){
            int p;
            cout<<"Give the number guessed by the player "<<x<<" :"<<endl;
            cin>>p;
            playernum = p;
            return playernum;
        }

};

class Umpire{

    public:
    int g;
    int p1num, p2num , p3num;

        void get_the_number_from_guesser(){
            Guesser g1;
            g = g1.takeguesserinput();
            // cout<<"Number guessed by guesser "<<g<<endl;
        }

        void get_the_number_from_player(){
            Player p1, p2, p3;
            p1num = p1.takeplayerinput(1);
            p2num = p2.takeplayerinput(2);
            p3num = p3.takeplayerinput(3);
        }

        void print_the_result(){

        }
        

};




int main(){
    
    cout<<"Welcome to Number Guessing Game"<<endl;
    cout<<"Let's Start the Game "<<endl;

     
    Umpire u;
    u.get_the_number_from_guesser();
    u.get_the_number_from_player();


     




    cout<<"<----------- End Game ----------->"<<endl;
    return 0;
}