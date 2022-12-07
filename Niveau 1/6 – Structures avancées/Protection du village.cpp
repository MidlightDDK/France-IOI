#include <iostream>

#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

using namespace std;

int main()
{
	int nbMaison, xMin = 1000001, xMax = -1000001, yMin = 1000001, yMax = -1000001;
	cin >> nbMaison;

	repeat( nbMaison )
	{
		int x, y;
		cin >> x >> y;

		if( x < xMin )
		{
			xMin = x;
		}
		if( x > xMax )
		{
			xMax = x;
		}
		if( y < yMin )
		{
			yMin = y;
		}
		if( y > yMax )
		{
			yMax = y;
		}
	}

	cout << 2 * ( ( xMax - xMin ) + ( yMax - yMin ) ) << '\n';
	
	
	return 0;
}