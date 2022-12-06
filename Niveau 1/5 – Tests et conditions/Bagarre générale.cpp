#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
   int arignon, evaran;
   cin >> arignon >> evaran;

   if( arignon - evaran > 10 )
   {
      cout << "La famille Arignon a un champ trop grand\n";
   }
   if( arignon - evaran < -10 )
   {
      cout << "La famille Evaran a un champ trop grand\n";
   }

   // End of the program
   return 0;
}