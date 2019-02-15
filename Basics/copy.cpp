/*
This code prints each line from an input file and copies its content into out.txt
*/

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]){
    std::string line;
    std::ifstream infile (argv[1]);
    std::ofstream outfile ("copy.txt");

    if(infile.is_open()){
        while(getline(infile, line)){
            std::cout << line << std::endl;
            outfile << line.substr(0,line.size()) << std::endl; 
        }
        infile.close();
        outfile.close();
    }
    else std::cout << "Unable to open file" << std::endl;

    return 0;
}