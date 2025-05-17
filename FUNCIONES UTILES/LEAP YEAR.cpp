//Un año es bisiesto si es divisible entre 4 pero no entre 100, 
//tambien son bisiestos los años divisibles entre 100 
//pero deben ser ademas divisibles entre 400 (excepcion)  

/*Ejemplos:
2024? Bisiesto (divisible entre 4, no entre 100).
2000? Bisiesto (divisible entre 100 y 400).
1900? No bisiesto (divisible entre 100 pero no entre 400).
*/

#include<iostream>

bool leapyear(int _year);

int main(){//Segun las reglas de C++ las instrucciones 
           //van dentro de una seccion de codigo llamado int main()
           
	float year;
	do{
		std::cout<<"Year: ";std::cin>>year;	
	}while(year!=int(year) || year<=0);
	
	if(leapyear(year)){
		std::cout<<year<<" it is a leap year"<<std::endl;
	}
	else{
		std::cout<<year<<" it is not leap year"<<std::endl;
	}
	
	//system("pause"); //si se ejecuta el programa desde el archivo .exe 
	                  //esta sentencia evita que se cierre abruptamente la ventana de ejecucion cuando finaliza el programa
	                  //pero si solo se va a ejecutar el programa desde el IDE esta puede omitirse
	
	return 0;//en C++11 y versiones posteriores, en un int main() esta sentencia puede omitirse 
			 //pero sigue siendo buena practica agregarlo para mayor claridad y compatibilidad
}

//Todo año divisible entre 400 es tambien divisible entre 100 y por tanto es bisiesto
//Entonces un año divisible entre 400 es directamente bisiesto

bool leapyear(int _year){
												   //Un año es bisiesto si es divisible entre 4 pero no entre 100 o si es divisible entre 400
	return(_year%4==0 && _year%100!=0 || _year%400==0);//Un año es bisiesto si es divisible entre 4 pero no entre 100 a menos que sea tambien divisible entre 400
			                                           //(quiere decir que si es divisible entre 100 tambien lo debe ser entre 400 para que sea bisiesto)
}

//Una excepcion en este sentido es como un "rescate de los excluidos"
//Ejemplo de excepcion:
//Un paraguayo no puede acceder al servicio de salud publica de Argentina "a menos que" tenga tambien naciolidad Argentina
//Un paraguayo no puede acceder al servicio de salud publica de Argentina "a no ser" que tenga tambien nacionalidad Argentina
