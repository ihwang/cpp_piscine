#include "Logger.hpp"

Logger::Logger(std::string filename) : _filename(filename)
{
    return ;
}

Logger::~Logger(void) {}

void Logger::logToConsole(std::string const& message)
{
    std::cout << makeLogEntry(message);
}

void Logger::logToFile(std::string const& message)
{
    std::ofstream of(this->_filename, std::ofstream::out | std::ofstream::app);

    of << makeLogEntry(message);
    of.close();
}

std::string Logger::makeLogEntry(std::string message)
{
    std::stringstream ss;
    time_t t = time(NULL);
    tm* timePtr = localtime(&t);

    ss << "["
            << std::setw(2) << std::right << std::setfill('0')
            << timePtr->tm_mday << "/"
            << std::setw(2) << std::right << std::setfill('0')
            << timePtr->tm_mon + 1 << "/"
            << std::setw(2) << std::right << std::setfill('0')
            << timePtr->tm_year + 1900 << " "
            << std::setw(2) << std::right << std::setfill('0')
            << timePtr->tm_hour << ":"
            << std::setw(2) << std::right << std::setfill('0')
            << timePtr->tm_min
            << "] " << message << std::endl;
    
    return ss.str();
}

void Logger::log(std::string const& dest, std::string const& message)
{
    typedef void(Logger::*Logger_functions)(std::string const&);

    std::string name[2] =
    {
        "file", "console"
    };
    Logger_functions funcs[2] =
    {
        &Logger::logToFile, &Logger::logToConsole
    };

    for (int i = 0; i < 2; i++)
        if (name[i] == dest)
            (this->*funcs[i])(message);
}