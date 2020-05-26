#pragma once

#include <iostream>
#include <istream>
#include <fstream>
#include <string>

class Cat42
{
    std::string *_files;
    int _nb;

    public:
        int success_or_fail;
        Cat42(int nb, char** files);
        ~Cat42(void);
        void execute(void);
        void read_stdin(void);
};