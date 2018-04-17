#include <iostream>
#include <cmath>
using namespace std;
const int n = 100000;
float G = 10.0; //Constante de gravitación.
float M = 1000.0; // Masa M del objeto inmovil.
float m; // Masa m del objeto movil.
float x0; // Posición inicial del objeto en movimiento.
float v0; // Velocidad inicial del objeto movil.
float x[n]; // Lista de posiciones.
float v[n]; // Lista de velocidades.
float t[n]; // Lista de tiempos
float h; //
int diferencial(float Posin, float Vin, float m, float h);
int main()
{
	m = 8;
	x0 = 200; 
	v0 = 100;
	h = 0.01;
	diferencial(x0, v0, m, h );
	return 0;
}

//Función que evoluciona el sistema de ecuaciones acopladas.
int diferencial(float Posin, float Vin, float m, float h )
{
	float max = (Posin)*(0.01);
	for (int i = 1; i < n; i++)
	{
		t[0] = 0.0;
		v[0] = Vin;
		x[0] = Posin;
		x[i] = max;
		if (x[i-1] >= max) 
		{ 
			t[i] = i*h;
			v[i] = h*((x[i-1])) + v[i-1];
			x[i] = -h*sqrt((G*M)/(x[i-1])) + x[i-1];
			cout << x[i] << " " << v[i] << " " << t[i] << endl;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}
