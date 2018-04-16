#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
   fstream myfile;
   myfile.open ("testing1.txt", ios::app);
   myfile << "Hello there. I am now in a file. \n";
   myfile << "," << 3 << "\n";
   myfile << "3"<< 4 << "5"<< "\n";
   myfile.close();
   return 0;
}

