#ifndef CANONICAL_CLASS_H
# define CANONICAL_CLASS_H

#include <iostream>

class CanonicalClass {
    public:
        CanonicalClass(void);
        CanonicalClass(int const n);
        CanonicalClass(CanonicalClass const& src);
        ~CanonicalClass(void);

        CanonicalClass& operator=(CanonicalClass const& rhs);

        int getFoo(void) const;

    private:
        int _foo;
};

std::ostream& operator<<(std::ostream& p, CanonicalClass const& m);

#endif