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
			
			string numerosmalos="";
			int num,n;
		    string cad = "";
		    cout<<"Ingrese hasta que numero el numero\n";
		    cin >> n;
		    for (int i = 0; i < n; ++i)
		    {
		    	int cont=0;
		    	num=i;
			    if(num > 0){
			        while(num>0){
			           if(num%2 == 0)
			                cad = "0" + cad;
			            else
			                cad = "1" + cad;
			                num = num/2;
			                cont++;
			        }
			        //cout <<"Numero en binario: " <<cad;
			    }
			    /*else{
			        if(num == 0)
			            cout << "0";
			        //else
			          //  cout << "Solo numeros mayores a cero";
			    }*/
			    if (cont%2==0)
			    {
			    	stringstream ss;
			    	ss<<i;
			    	string str = ss.str(); 

			    	numerosmalos+=str+",";
			    }
			} 

			cout<<endl<<"Los numeros malvados son : "<<numerosmalos<<endl;

		}
		//---------------------------------------------------------------------
		if (opc==2)
		{
			/* code */
		}

	}


	return 0;
}