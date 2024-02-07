/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramComstructor.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 12:20:49 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/02 12:33:04 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

class Box {
    public:
        double length;
        double width;
        double height;

    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }
};

int main()
{
    Box b1(3.3, 1.2, 1.5);
    Box b2(8.5, 6.9, 0.4);

    //let's calculate b1 volume
    double volume = b1.length * b1.width * b1.height;
    cout << "Volume of b1: " << volume << endl;

    volume = b2.length * b2.width * b2.height;
    cout << "Volume of b2: " << volume << endl;
}