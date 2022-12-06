#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
   int heure, prix = 10;
   cin >> heure;
   prix += 5 * heure;
   if( prix > 53 )
   {
      prix = 53;
   }

   cout << prix << '\n';

   // End of the program
   return 0;
}