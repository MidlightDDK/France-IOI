#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
   int nbJoueur;
   int sommeA = 0, sommeB = 0;
   cin >> nbJoueur;

   repeat( nbJoueur )
   {
      int a, b;
      cin >> a >> b;

      sommeA += a;
      sommeB += b;
   }

   if( sommeA > sommeB )
   {
      cout << "L'équipe 1 a un avantage\n";
   }
   else
   {
      cout << "L'équipe 2 a un avantage\n";
   }
   
   cout << "Poids total pour l'équipe 1 : " << sommeA << '\n';
   cout << "Poids total pour l'équipe 2 : " << sommeB << '\n';

   // End of the program
   return 0;
}