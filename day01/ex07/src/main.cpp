#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::string filename = av[1];
        std::string outfile = filename + ".replace";
        std::string s1 = av[2];
        std::string s2 = av[3];
        std::string buff;

        std::ifstream input_file(filename);
        if (!input_file.is_open())
        {
            std::cout << "Failed to open the given file" << std::endl;
            return (EXIT_FAILURE);
        }
        std::ofstream output_file(outfile);
        if (!output_file.is_open())
        {
            std::cout << "Failed to create .replace file" << std::endl;
            return (EXIT_FAILURE);
        }

        input_file.seekg(0, input_file.end);
        int length = input_file.tellg();
        // Get total length of input_file
        input_file.seekg(0, input_file.beg);
        // Rewind the cursor to beginning
        char* temp = new char[length];
        input_file.read(temp, length);
        buff = temp;
        delete [] temp;
        // Store whole characters of input_file into buff

        size_t i = 0;
        while ((i = buff.find(s1, i)) != buff.npos)
            buff.replace(i, s1.length(), s2);
        // Replace s1 with s2 in buff
        output_file << buff;
    }
    else
        std::cout << "Usage : " << av[0] << " <file> <str1> <str2>" << std::endl;
    return (0);
}