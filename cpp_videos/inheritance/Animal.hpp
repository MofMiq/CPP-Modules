#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class Animal {
    private:
        int _numberOfLegs;
    public:
        Animal();
        Animal(const Animal& rhs);
        ~Animal();

        Animal& operator=(const Animal& rhs);

        void run(int distance);
        void walk(int distance);
        void call();
        void eat(const std::string& target);
};

class Otter : public Animal {
    public:
        Otter();
        Otter(const Otter& rhs);
        ~Otter();

        Otter& operator=(const Otter& rhs);
};

class Cat : public Animal {
    public:
        Cat();
        Cat(const Cat& rhs);
        ~Cat();

        Cat& operator=(const Cat& rhs);

        void scornSomeone(const std::string& target);
};

class Pony : public Animal {
    public:
        Pony();
        Pony(const Pony& rhs);
        ~Pony();

        Pony& operator=(const Pony& rhs);

        void doMagic(const std::string& target);
};

#endif