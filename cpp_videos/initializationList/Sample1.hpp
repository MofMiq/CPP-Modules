//esto es un ejemplo de cómo y dónde inicializar los miembros de una clase
#ifndef SAMPLE1_CLASS_H
# define SAMPLE1_CLASS_H

class Sample1
{
public:
    char    a1;
    int     a2;
    float   a3;

    Sample1(char _a1, int _a2, float _a3);
    ~Sample1(void);

};

#endif