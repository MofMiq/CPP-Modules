/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   staticVariblesPrivate.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:18:56 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/01 17:54:08 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

using namespace std;

class Test {
private:
    int _y;
    static int _x;

public:
    int getY(void);
    void setY(int z);
    static int getX(void);
    static void setX(int z);
};

int Test::getY(void) {
    return this->_y;
}

void Test::setY(int z) {
    this->_y = z;
}

int Test::_x = 0;

int Test::getX(void) {
    return Test::_x;
}

void Test::setX(int z) {
    Test::_x = z;
}

int main() {
    Test t1, t2;

    t1.setY(20);
    t2.setY(30);

    t1.setX(40);
    t2.setX(50);
    t1.setX(60);

    cout << "t1.y: " << t1.getY() << ", t2.y: " << t2.getY() << endl;
    cout << "t1.x: " << t1.getX() << ", t2.x: " << t2.getX() << endl;
}