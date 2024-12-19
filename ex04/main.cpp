
#include <iostream>
#include <fstream>

using std::cin;
using std::cerr;
using std::cout;
using std::string;
using std::endl;
using std::ofstream;
using std::ifstream;

int main(int ac, char **av)
{
    if(ac != 4)
    {
        cout << "Invalid argument number"<< endl;
        return(1);
    }
    string _filename = av[1];
    string _string1 = av[2]; 
    string _string2 = av[3]; 
    string output_filename = _filename + ".replace";
    string line;

    if (_filename.empty() || _string1.empty() || _string2.empty()) 
    {
        cerr << "Filename, s1, and s2 cannot be empty" << endl;
        return 1;
    }

    ifstream infile(_filename.c_str());
    if (!infile.is_open()) 
    {
        cerr << "Could not open the file" << _filename << endl;
        return 1;
    }

    ofstream outfile(output_filename.c_str());
    if (!outfile.is_open()) 
    {
        cerr << "Could not create the file" << output_filename << endl;
        infile.close();
        return 1;
    }

    while (std::getline(infile, line)) 
    {
        size_t pos = 0;
        while ((pos = line.find(_string1, pos)) != string::npos) 
        {
            line.erase(pos, _string1.length());
            line.insert(pos, _string2);
            pos += _string2.length();
        }
        outfile << line << "\n";
    }

    infile.close();
    outfile.close();
    cout << "File processing complete. Output written to " << output_filename << endl;
    return(0);
}
