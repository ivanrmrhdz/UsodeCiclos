#include<iostream>
using namespace std;

	// declaracion de la funcion   
	void l();//void no retorna datos 
	int sumar(int a ,int aux);//las que si retornan datos se declaran con el tipo de dato que retorna

main (){
	
	float u; 
	float aux; // variable auxiliar
	float num=1; // contador
	float a = 0; // acumulador

	do{
	l();
	cout<<"Cuantos numeros desea sumar: "; 
	cin>>u;
	
	}while(u<2 || u>4);
	
	while(num<=u){
		l();
		cout<<"Ingrese el numero "<<num<<": "<<endl;
		cin>>aux;
		a =sumar(a,aux);
		num++;
		cout<<endl;
	}
	
	l();
	cout<<"El resultado de la suma de los "<<u<<" numeros es igual a: "<<a<<endl;

	return 0;
}
void l() {
		system("cls");
	}	
	
int sumar(int a , int aux){
	
	return a+aux;
}
