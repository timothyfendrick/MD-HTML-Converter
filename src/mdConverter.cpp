#include "mdConverter.h"

void MDConverter::FileConverter()
{
  ifstream inputFile("../markdown-sample.md");

  if (!inputFile.is_open())
  {
    cout << "Error opening file." << endl;
    return;
  }

  ofstream outputFile("output.txt");
}