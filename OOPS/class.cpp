#include <iostream>

// INclude another file which has class
#include "enemy.cpp"
using namespace std;

// How to create a 'class'

class Hero{

    // Properties
    private:
    int health; 

    public:
    char level;

    // Create a Getter

    int gethealth() {
        return health;
    }

    char getlevel() {
        return level;
    }

    // Create Setters 

    void sethealth(int h) {
        health = h;
    }

    void setLevel(char level) {
        level = 'V';
    }

    

};

int main() {
    // printing 
    // creating an object from class

    Enemy e;
    Hero h;

    h.level = 'a';
    // h.health = 100;
    
    // hero type ka object 'h1' bana diya
    cout << "size of H1 : " << sizeof(h) << endl;

    // access a property / Data Member
    // using dot ( . ) operator

    cout << "Health is : " << h.gethealth() << endl;
    cout << "Level is : " << h.level <<endl;

    // SETTING VALUES

    h.sethealth(40);

    cout << "Health is : " << h.gethealth() << endl;
    cout << "Level is : " << h.level <<endl;


    /* cout << "Health is : " << h.health <<endl;
    cout << "Level is : " << h.level <<endl;
    cout << "Name is : " << h.name <<endl;
    */
    // This gives an error : health & name are private members !!

    // Accessing modifiers : 
    /* 
         > Private
         > Public
         > Protected

         By default : access modifier is PRIVATE 

        TO ACCESS ANYWHERE : USE PUBLIC
         public:
         int health; 
         char level;
        
        Private :
         >  Cannot access outside of class


         */


}