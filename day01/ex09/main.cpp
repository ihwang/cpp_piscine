#include "Logger.hpp"

int main(void)
{
    Logger logger("log.txt");

    logger.log("console", "Program starting");
    logger.log("file", "Program starting (file)");
    logger.log("console", "nice");
}