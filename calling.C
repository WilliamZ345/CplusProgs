// Include the unix standard lib,
// for sleep() api
#include <unistd.h>

#include <iostream>

using namespace std;

int A();
int B();
int C();

int A()
{
   cout << "A: A has been called. " << endl; 
   sleep(3);
   cout << "A: waken up after 3 seconds ...; call B now " << endl; 
   B();
}

int B()
{
   cout << "B: B has been called. " << endl; 
   sleep(5);
   cout << "B: waken up after 5 seconds ...; call C now " << endl; 
   C();
} 

int C()
{
   cout << "C: C has been called. " << endl; 
   sleep(7);
   cout << "C: waken up after 7 seconds ...; call A now " << endl; 
   A();
}

int main()
{
   A();
}
