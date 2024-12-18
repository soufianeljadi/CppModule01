
#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::string;
using std::endl;

int main(int ac, char **av)
{
    if(ac != 4)
    {
        cout << "invalid argument number"<< endl;
        return(0);
    }
    string _filename = av[1];
    string _string1 = av[2]; 
    string _string2 = av[3]; 


    std::ofstream fout;

    string line;

	std::ifstream in_file;
	std::ofstream out_file;

	string fname;

	fname = av[1];

	in_file.open(fname);
	if (in_file.is_open() == false) {
		std::cout << "Error: could not open file" << std::endl;
		exit(1);
	}

	out_file.open(fname + ".replace");
	if (out_file.is_open() == false) {
		std::cout << "Error: could not open file" << std::endl;
		exit(1);
	}

    // by default ios::out mode, automatically deletes
    // the content of file. To append the content, open in ios:app
    // fout.open("sample.txt", ios::app)

    // fout.open(_filename);
    // Execute a loop If file successfully opened
    // while (fout) {

    //     // Read a Line from standard input
    //     getline(cin, line);

    //     // Press -1 to exit
    //     if (line == "-1")
    //         break;

    //     // Write line in file
    //     fout << line << endl;
    // }

    return(0);
}

// #include <iostream>
// #include <sstream>
// #include<string>
// using namespace std;

// int countWords(string str)
// {
// 	// Breaking input into word 
// 	// using string stream
  
// 	// Used for breaking words
// 	stringstream s(str); 
  
// 	// To store individual words
// 	string word; 

// 	int count = 0;
// 	while (s >> word)
// 		count++;
// 	return count;
// }

// // Driver code
// int main()
// {
// 	string s = "geeks for geeks geeks "
// 			   "contribution placements";
// 	cout << " Number of words are: " << countWords(s);
// 	return 0;
// }