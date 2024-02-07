/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   staticVariables.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:45:50 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/01 14:20:45 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

using namespace std;

class Test {
public:
    int y;
    static int x;
};

int Test::x = 10;

int main() {
    Test t1, t2;

    t1.y = 20;
    t2.y = 30;

    t1.x = 40;
    t2.x = 50;
    t1.x = 80;

    cout << "t1.y: " << t1.y << ", t2.y: " << t2.y << endl;
    cout << "t1.x: " << t1.x << ", t2.x: " << t2.x << endl;
}