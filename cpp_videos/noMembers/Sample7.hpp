#ifndef SAMPLE7_CLASS_H
# define SAMPLE7_CLASS_H

class Sample7
{
public:

    Sample7(void);
    ~Sample7(void);

    static int getNbObj(void);

private:
    static int _nbObj;
};

#endif