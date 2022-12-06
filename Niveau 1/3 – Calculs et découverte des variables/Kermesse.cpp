#include <iostream>

using namespace std;

int main()
{
   int somme = 0;
   for( int i = 1; i <= 50; i++ )
   {
      somme += i;
      cout << somme << '\n';
   }

   // End of the program
   return 0;
}