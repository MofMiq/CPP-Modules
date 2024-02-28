/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poly1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:05:42 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/28 13:46:05 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Character {
    public:
        virtual void sayHello(const std::string& target);
};

class Warrior : public Character {
    public:
        virtual void sayHello(const std::string& target);
};

class Cat {
    //[...]
};

void Character::sayHello(const std::string& target)
{
    std::cout << "Hello " << target << " !" << std::endl;
}

void Warrior::sayHello(const std::string& target)
{
    std::cout << "F*** off " << target << ", I don't like you !" << std::endl;
}

int main()
{
    //This is OK, obviously, Warrior IS a Warrior
    Warrior* a = new Warrior();

    //This is also OK because Warrior IS a character
    Character* b = new Warrior();

    /* This would NOT be ok because Character IS NOT a WArrior
    (Although they ARE related, and W IS-A C, the reverse is untrue
    Warrior* c = new Character()) */

    /* This would NOT be ok either because Cat IS NOT a Character
    (They are not even related
    Character* d = new Cat()) */

    a->sayHello("b****");
    b->sayHello("World");
    b->Character::sayHello("World");
    return 0;
}