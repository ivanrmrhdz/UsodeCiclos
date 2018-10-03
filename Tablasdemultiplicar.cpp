#include<iostream>

using namespace std;

int main (){

	int multi;
	
	for(int i=1;i<=10;i++){
		cout<<endl;
		cout << "Tabla del "<<i<<" :"<<endl<<endl;
		for (int s=1;s<=10;s++){
			multi = i * s;
			cout<<i<<" * "<<s<<" = "<<multi<<endl;
		}
		
	}
	
	return 0;
}

