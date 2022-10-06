//ANGEL EMANUEL MENDOZA REYES 
//22110083
//PROGRAMACION ORIENTADA A OBJETOS 
//PARCIAL 2
//LUIS MANUEL MORALES MEDINA
//CETI COLOMOS 
#include <iostream>
using namespace std;
class Numeros_primos{
	private:
		int n=0;
			int c=0;
				int c2=0;
					int res=0;
						int nc=0;
				
		public:
			void num_primo_rango();
};
void Numeros_primos::num_primo_rango(){
  cout<<":::::::::::::::::::::::::::::::::::::::::::"<<endl;
  cout<<"INTRODUCE EL LIMITE DE LOS NUMEROS PRIMOS: "<<endl;
  cout<<":::::::::::::::::::::::::::::::::::::::::::"<<endl;
  cin>>n;
  for(c=1;c<=n;c++){
  for(c2=1;c2<=c;c2++){
  res=c%c2;
  if(res==0){
  nc=nc+1;
  }
  }
  if(nc==2){
   cout<<" "<<c;
  }
  nc=0;
  }
}
int main(){
	int opc;
	int menu=1;
	Numeros_primos primo;
	
	while (menu!=0){

	cout<<"BIENVENIDO AL PROGRAMA DE NUMEROS PRIMOS"<<endl;
	cout<<"::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"1-MOSTRAR LISTA DE NUMEROS PRIMOS"<<endl;
	cout<<":::::::::::::::::::::::::::::::::"<<endl;
	cin>>opc;
	switch (opc){
		case 1:
				primo.num_primo_rango();
					break;
	}
	cout<<"\n::::::::::::::::::::::::::::"<<endl;
	cout<<"1-DESEA CONTINUAR DEL MENU"<<endl;
	cout<<"::::::::::::::::::::::::::::"<<endl;
	cout<<"0-DESEA SALIR DEL MENU"<<endl;
	cin>>menu; 		
	}
	return 0;	
}
	


