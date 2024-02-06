//esto es un ejemplo de cómo y dónde inicializar los miembros de una clase
#ifndef SAMPLE2_CLASS_H
# define SAMPLE2_CLASS_H

class Sample2
{
public:
    char    a1;
    int     a2;
    float   a3;

    Sample2(char _a1, int _a2, float _a3);
    ~Sample2(void);

};

#endif