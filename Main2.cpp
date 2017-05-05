#include <iostream.h>

void main(){
	// Declaración de variables que utilizaremos en todo el programa
	int decimal_1;		//=> almacenara el numero decimal que ingrese el usuario
	int decimal_2;		//=> sera una copia del numero que ingrese el usuario con la cual
						//	 utilizaremos para mostrar en el mensaje final
	int residuo[100];	//=> almacenara los residuos de las divisiones del numero ingresado por el usuario entre 2
						//	 esta variable es un arreglo que almacena enteros
	int indice = 0;		//=> este sera un contador para los indice del arreglo que guarda los residuos de cada division realizada
						//	 su valor de inicio sera cero
	
	// Mensaje al iniciar el programa
	cout<<"Convertir un numero del sistema decimal a binario 1.0 (Victor Aguilar) "<<endl<<endl;
	
	// Le pedimos al usuario que ingrese un numero decimal
	cout<<"Ingrese un numero decimal: ";
	// Leemos el numero ingresado por el usuario y lo almacenamos en la variable "decimal"
	cin>>decimal_1;
	
	// Copiamos el numero decimal ingresado en otra variable
	decimal_2 = decimal_1;
	
	// Ahora procedemos a convertir el numero decimal a binario
	// Mientras el numero que se encuentra en "decimal_1" sea mayor a uno
	// se ejecutara el ciclo siguiente
	while(decimal_1 > 1){
		// Se obtiene el residuo de la división del numero decimal ingresado entre 2
		residuo[indice] = decimal_1 % 2;
		// Se divide entre dos para obtener el cociente de la division anterior
		decimal_1 = decimal_1 / 2;
		
		// Aumenta en uno el indice del arreglo que mantiene el residuo de cada division
		indice = indice + 1;
		
		
	}
	// fin del ciclo
	
	// Se obtiene por ultima vez el residuo de la división del valor resultante del decimal entre 2
	residuo[indice] = decimal_1 % 2;
	
	// Mostramos el resultado al usuario
	cout<<endl<<"El número "<<decimal_2<<" es equivalente a ";
	
	// Se hace un ciclo para imprimir los ceros y unos que hemos almacenado en el ciclo anterior
	// en orden contrario, es decir, desde el ultimo hasta el primero
	for(int i=indice; i>=0; i--){
		// imprimimos el digito (cero ó uno)
		cout<<residuo[i];
	}
	
	// continuamos con el mensaje mostrado al usuario
	cout<<" en el Sistema Binario";
	
	// Fin del programa
}

