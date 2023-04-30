#include<bits/stdc++.h>
using namespace std;
int Suma(string texto);
int main(){
	string texto;
	cout<<"Ingrese una palabra:"<<endl;
	cin>>texto;
	int S=Suma(texto);
	cout<<"La suma es:"<<S<<endl;
	return 0;
}
int Suma(string texto){
	int suma,i=0;     
	while(i<=texto.size()){
		texto [i] = tolower (texto [i]);
		if(texto[i]=='a'|| texto[i]=='e'){
			suma+=1;
		}                        
		if(texto[i]=='o' || texto[i]=='s'){
			suma+=2;                         
	    }
		if(texto[i]=='d' || texto[i]=='i' || texto[i]=='n' || texto[i]=='r'){
			suma+=3;                                                           
	    }
		if(texto[i]=='c' || texto[i]=='l' || texto[i]=='t' || texto[i]=='u'){
			suma+=4;   
		}
		if(texto[i]=='m' || texto[i]=='p'){
			suma+=5;                         
	    }
		if(texto[i]=='b' || texto[i]=='f' || texto[i]=='g' || texto[i]=='h' || texto[i]=='j' || texto[i]=='q' || texto[i]=='v' || texto[i]=='x' || texto[i]=='y' || texto[i]=='z'){
			suma+=6;
	    }
       	if(texto[i]=='k' || texto[i]=='w'){
			suma+=7;                  
		}
		i++;
	}
	return suma;
  }