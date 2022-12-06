#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
   int age;
   cin >> age;

   if( age < 21 )
   {
      cout << "Tarif réduit\n";
   }
   else
   {
      cout << "Tarif plein\n";
   }

   // End of the program
   return 0;
}