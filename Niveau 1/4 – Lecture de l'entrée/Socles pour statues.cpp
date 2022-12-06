#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
   int bas, haut, somme = 0;
   cin >> bas >> haut;

   for( int i = bas; i >= haut; i-- )
   {
      somme += i * i;
   }

   cout << somme << '\n';

   // End of the program
   return 0;
}