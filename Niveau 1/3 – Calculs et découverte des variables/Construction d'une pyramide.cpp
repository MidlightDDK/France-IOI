#include <iostream>

using namespace std;

int main()
{
   unsigned short somme = 0;
   for( unsigned short i = 1; i <= 17; i += 2 )
   {
      somme += i * i * i;
   }
   cout << somme << '\n';

   // End of the program
   return 0;
}