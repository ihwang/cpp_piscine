#include "Cat.hpp"

Cat42::Cat42(int nb, char** files)
{
    success_or_fail = 0;
    _nb = nb - 1;
    _files = new std::string[_nb];
    for (int i = 0; i < _nb && files[i + 1]; i++)
        _files[i] = files[i + 1];
}

Cat42::~Cat42(void)
{
    delete [] _files;
}

void Cat42::read_stdin(void)
{
  //  std::istream &input(std::cin);
    std::cout << std::cin.rdbuf() << std::endl;
}

void Cat42::execute(void)
{
    if (_nb == 0)
        read_stdin();
    for (int i = 0; i < _nb; i++)
    {
        if (_files[i] == "-" || (i == 0 && _files[i] == "--"))
        {
            read_stdin();
            continue ;
        }
        std::ifstream input_file(_files[i]);
        if (!input_file.is_open())
        {
            success_or_fail = -1;
            std::cout << "cato9tails: " << _files[i] << ": " << strerror(errno) << std::endl;
        }
        else
            std::cout << input_file.rdbuf();
    }
}