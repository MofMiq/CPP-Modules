#include <iostream>

class Quadruped { //Can access name, run() and legs
    private:
        std::string _name; //Only accesible from an Quadruped object
    protected:
        Leg legs[4]; //Accesible from an Quadruped object or derived object
    public:
        void run(); //Accesible from wherever
};

class Dog : public Quadruped { //Can access run() and legs

};

int main() { //Can only access run();
    
}
