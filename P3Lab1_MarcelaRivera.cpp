#include <iostream>
using namespace std;

int primo(int x){
	int divi=1;
	for(int j=0;j<x;j++){
	if(j%divi==0){
		divi++;
		}
	}	
	int xx=0;		
	if(divi==2){
	cout<<"Es primo"<<endl;
	xx= 1;
	}
	return xx;
}

int main()
{
  int num;
  cout << "Ingrese un numero del 1 al 100: ";
  cin>>num;
  if(num>100 || num<1){
  	cout<< "El numero sale de los limites establecidos";
  }else{
  	for(int i=2;i<num;i++){
  		
  		if(i%2==0){
  			bool sigue=true;
  			while(sigue){
  			int num1=i,num2=num-1;
  			if (primo(num1) && primo (num2)){
  			if(num1+num2==i){
  				 sigue=false;
  				 cout <<num1<< " + " <<num2<< " = " << i << endl;
			  }
			  }		
		  }else{
		  	
		   }
	}
  		}
  	}
  	
 		 
  	}		
   

  return 0;
}



