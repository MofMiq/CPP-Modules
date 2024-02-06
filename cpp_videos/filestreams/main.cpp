#include <iostream>
#include <fstream>

int main(void)
{
    std::ifstream ifs("numbers");
    unsigned int    dst1;
    unsigned int    dst2;

    ifs >> dst1 >> dst2;

    std::cout << dst1 << " " << dst2 << std::endl;
    ifs.close();
    
    //-------------------

    std::ofstream   ofs("test.out");

    ofs << "i like ponies a whole damm lot" << std::endl;
    ofs.close();
}