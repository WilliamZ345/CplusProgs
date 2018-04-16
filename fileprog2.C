#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ofstream myfile ("testing1.txt");
   if (myfile.is_open()) 
   {
      myfile << "Hello there. \n";
      myfile << "Hey guys its me.. \n";
      myfile.close();
   }
   else cout << "Unable to open file, sorry";
   return 0;
}
