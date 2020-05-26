#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
#include <iomanip>

class Logger
{
    private:
        std::string _filename;

        void logToConsole(std::string const& message);
        void logToFile(std::string const& message);
        std::string makeLogEntry(std::string message);
    public:
        Logger(std::string filename);
        ~Logger(void);
        void log(std::string const &dest, std::string const& message);
};