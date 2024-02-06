#ifndef SAMPLE_CLASS_3H
# define SAMPLE_CLASS_3H

class Sample3
{
public:
    int publicFoo;

    Sample3(void);
    ~Sample3(void);

    void publicBar(void) const;

private:
    int _privateFoo;

    void _privateBar(void) const;
};

#endif