#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    if(argc != 4)
    {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream infile(filename);
    std::ofstream outfile(filename + ".replace");
    if(!infile.is_open() || !outfile.is_open())
    {
        std::cout << "Error opening file" << std::endl;
        return 1;
    }
    std::string line;
    while (std::getline(infile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            std::string tmp = line.substr(0, pos);
            std::string tmp2 = line.substr(pos + s1.length(), line.length());
            line = tmp + s2 + tmp2;
            
            
            pos += s2.length();
        }
        outfile << line << std::endl;
    }
    infile.close();
    outfile.close();
    return 0;
}
