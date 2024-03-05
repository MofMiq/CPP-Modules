#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource()
{   
    //std::cout << "\033[32mMateriaSource constructor called\033[0m" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_slots[i] = NULL;
    this->_count = 0;
    return;
}

MateriaSource::MateriaSource(const MateriaSource &rhs)
{
    //std::cout << "\033[32mMateriaSource copy constructor called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->_count = rhs._count;
        for (int i = 0; i < 4; i++)
        {
            if (rhs._slots[i] != NULL)
                this->learnMateria(rhs._slots[i]->clone());
            else
                this->_slots[i] = NULL;
        }
    }
    return;
}

MateriaSource::~MateriaSource()
{
    //std::cout << "\033[31mMateriaSource destructor called\033[0m" << std::endl;
    for (int i = 0; i < 4; i++)
        delete this->_slots[i];
    return;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
    //std::cout << "\033[32mMateriaSource copy constructor called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->_count = rhs._count;
        for (int i = 0; i < 4; i++)
        {
            delete this->_slots[i];
            if (rhs._slots[i] != NULL)
                this->learnMateria(rhs._slots[i]->clone());
            else
                this->_slots[i] = NULL;
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (m == NULL)
    {
        std::cout << "Error: Can't learn a NULL pointer materia" << std::endl;
        return;
    }
    if (this->_count >= 4)
    {
        std::cout << "Error: Can't learn more Materias because there isn't more space available" << std::endl;
        delete m;
        return;
    }
    if (this->_slots[this->_count] == NULL)
    {
        this->_slots[this->_count] = m;
        this->_count++;
    }
    return;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
    for (int i = 0; i < this->_count; i++)
    {
        if (this->_slots[i] && this->_slots[i]->getType() == type)
            return _slots[i]->clone();
    }
    return 0;
}
