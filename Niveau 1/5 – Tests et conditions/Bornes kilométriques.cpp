#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
   int a, b;
   cin >> a >> b;
   cout << ( ( a > b ) ? a - b : b - a ) << '\n';

   // End of the program
   return 0;
}