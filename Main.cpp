#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	int opc=9;
	while(opc!=3)
	{
		cout<<endl<<"Bienvenido\n1.-Ejercicio\n2.-Ejercicio\nIngrese su opcion: ";
		cin>>opc;
		cout<<endl;

		if (opc==1)
		{
			
			int num;
		    string cad = "";
		    cout<<"Ingrese el numero\n";
		    cin >> num;
		    if(num > 0){
		        while(num>0){
		           if(num%2 == 0)
		                cad = "0" + cad;
		            else
		                cad = "1" + cad;
		                num = num/2;
		        }
		        cout <<"Numero en binario: " <<cad;
		    }
		    else{
		        if(num == 0)
		            cout << "0";
		        else
		            cout << "Solo numeros mayores a cero";
		    }
		}
		//---------------------------------------------------------------------
		if (opc==2)
		{
			/* code */
		}

	}


	return 0;
}