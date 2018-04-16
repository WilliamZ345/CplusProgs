#include <iostream>
using namespace std;

int averaging()
{
   double average;
   int n; 
   cout << "how many numbers are you averaging? " << endl;
   cin >> n;
   cout << "please input your numbers: " << endl;
   
   for(int i = 0; i < n; i++)
   {
      int value;
      cin >> value;
      average += value;
   }
   average /= n;
   cout << "the average is " <<  average << endl;
}

int main()
{
   averaging();
   
   int m (1);
   cout << "m is " << m << endl;

}

