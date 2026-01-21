#include <iostream>
#include "mdConverter.h"
#include <string>
#include <sstream>
#include <fstream>

using namespace std;
int main() 
{

    ifstream inputFile("markdown-sample.md");

    if (!inputFile.is_open()) 
    {
        cerr << "Error opening file." << endl;
        return 1;
    }

    ofstream outputFile("output.txt");


    return 0;
}