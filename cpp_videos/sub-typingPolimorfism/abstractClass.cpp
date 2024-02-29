#include <string>
#include <iostream>

/*clase abstracta: dos caracteristicas: 1)funcion pura: no se hace ninguna implementacion de esta funcion,
lo que supone que no podremos instanciar la clase. Por tanto, sera una clase abstracta ya que 
la funcion no existe realmente. un objeto de esa clase jamas podra usar esa funcion por si mimso.
(es una convencion marcar las clase abstractas con una 'A' antes del nombre tal que asi: ASample).
2) para poder instanciar una clase que hereda de una clase abstracta, deberemos implementar la 
funcion pura que su clase padre no puede instanciar. debemos hacer esto por que si no no podremos
instanciar la clase hija tampoco*/
class ACharacter {
    private:
        std::string _name;
    public:
        virtual void attack(const std::string& target) = 0; //funcion pura
        void sayHello(const std::string& target);
};

class Warrior : public ACharacter {
    public:
        virtual void attack(const std::string& target);
};

void ACharacter::sayHello(const std::string& target)
{
    std::cout << "Hello " << target << " !" << std::endl;
}

void Warrior::attack(const std::string& target)
{
    std::cout << "*attacks " << target << " with a sword*" << std::endl;
}

/*Interface: no pueden tener atributos(variables), solo metodos.
tienen que tener una funcion pura para ser abstractas. Las interfaces
se usan cuando queremos definir "comportamientos" pero no sabemos que
tipo de paramatros recibimos o devolvemos?.una interfaz tambien sirve para
manipular un array con tipos de datos diferentes pero eso mejor para mas
adelante.*/

class ICoffeeMaker
{
    public:
        virtual void fillWaterTank(IWaterSource* src) = 0;
        virtual ICoffee* makeCoffee(const std::string& type) = 0;
};

int main()
{
    ACharacter* a = new Warrior();

    /* This a would NOT be ok because Acharacter is abstract
    ACharacter* b = new ACharacter(); */

    a->sayHello("students");
    a->attack("roger");
}