#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
	int nbMarchand, pos, minPrix;
	cin >> nbMarchand;

	for( int i = 1; i <= nbMarchand; i++ )
	{
		int prix;
		cin >> prix;

		if( i == 1 || prix <= minPrix )
		{
			minPrix = prix;
			pos = i;
		}
	}

	cout << pos << '\n';
	
	return 0;
}