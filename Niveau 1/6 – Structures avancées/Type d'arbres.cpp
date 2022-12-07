#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
	int hauteur, nbFolioles;
	cin >> hauteur >> nbFolioles;

	if( hauteur <= 8 )
	{
		if( nbFolioles >= 8  )
		{
			cout << "Tinuviel\n";
		}
		else
		{
			cout << "Falarion\n";
		}
	}
	else
	{
		if( nbFolioles >= 10  )
		{
			cout << "Calaelen\n";
		}
		else
		{
			cout << "Dorthonion\n";
		}
	}
	
	return 0;
}