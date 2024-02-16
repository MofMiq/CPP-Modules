#ifndef H_POLIMORFISM_H
# define H_POLIMORFISM_H

/* el polimorfismo es sobrecarga de funciones, es decir, nombrar de 
la misma manera varias funciones pero recogiendo diferentes parametros,
lo cual es lo que las hace diferentes entre si realmente*/

class Polimorfism {
    public:
        Polimorfism();
        ~Polimorfism();

        void bar(char const c) const;
        void bar(int const n) const;
        void bar(float const z) const;
        void bar(Polimorfism const &i) const;
} ;

#endif