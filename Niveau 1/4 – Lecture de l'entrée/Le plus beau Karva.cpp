#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
   int n;
   cin >> n;

   repeat( n )
   {
      int poids, age, longeur, haut;
      cin >> poids >> age >> longeur >> haut;

      cout << longeur * haut + poids << '\n';
   }

   // End of the program
   return 0;
}