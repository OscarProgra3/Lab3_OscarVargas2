#include <iostream>
#include <string>
#include <bitset>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
//..
using namespace std;

char** inicializarMatriz(int);
void imprimirLaberinto(char** matriz, int size);

int main()
{
	srand(time(NULL));
	int opc=9;
	while(opc!=3)
	{
		cout<<endl<<"Bienvenido\n1.-Ejercicio\n2.-Ejercicio\nIngrese su opcion: ";
		cin>>opc;
		cout<<endl;

		if (opc==1)
		{
			
			string numerosmalos="";
			int num,n;
		    
		    cout<<"Ingrese hasta que numero el numero\n";
		    cin >> n;

		    cout<<endl<<"Los numeros malvados son :"<<endl;
		    int cont=0;
		    for (int i =0 ; i <=n; ++i)
		    {	
		    	 cont=0;

		    	string binario = bitset<8>(i).to_string();
		    //	cout<<endl<<"binario de "<<i<<" es: "<<binario<<endl;

		    	for (int j = 0; j < binario.size(); ++j)
		    	{
		    		if (binario[j]=='1')
		    		{
		    			cont++;
		    		}
		    	}


			    if (cont%2==0)
			    {
			    	
			    	cout<<i<<",";
			    }
			} 

			cout<<endl;

		}
		//---------------------------------------------------------------------
		if (opc==2)
		{
			int tam;
			cout<<endl<<"Ingrese el tamaño de la matriz: ";
			cin>>tam;

			char** matrix = new char*[tam];
			
			for (int i = 0; i < tam; ++i)
			{
				for (int j = 0; j < tam; ++j)
				{
					matrix[i][j]=rand()% 100 +1;
				}
			}

			imprimirLaberinto(matrix,tam);

		}

	}


	return 0;
}

long abinario(long num){
 if(num < 2)
  return num;
 else
  return num%2 + (10 * abinario(num/2));
}

void imprimirLaberinto(char** matriz, int size) {
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			cout << matriz[i][j]<<" ";
		}
		cout << endl;
	}
}