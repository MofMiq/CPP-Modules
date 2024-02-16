#include "polimorfism.hpp"

int main(void)
{
    Polimorfism obj;

    obj.bar('a');
    obj.bar(5);
    obj.bar(2.2f);
    obj.bar(obj);
}