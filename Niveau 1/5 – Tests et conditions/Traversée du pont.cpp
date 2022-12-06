#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
   int a, b;
   cin >> a >> b;

   if( a + b >= 10 )
   {
      cout << "Taxe spéciale !\n36\n"; 
   }
   else
   {
      cout << "Taxe régulière\n" << 2 * ( a + b ) << '\n';
   }

   // End of the program
   return 0;
}