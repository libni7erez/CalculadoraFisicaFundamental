#include<iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

using namespace std;
#define pi 3.1416

#define gravedad 9.8

void menu();
void mov_dimen ();
void trigonometria();
//vectores----------------------
void vectores();

void com_x();
void com_y();
void despla();
void des_x();
void des_y();

//caida libre
void cad_lib();
void altura();
void velocidadini1();
void vel_fin1();
void tiempo1();

//MOv unimensional aceleracion----------
void mov_uni();
void dist();
void velocidadini();
void vel_fin();
void acel();
void tiempo();
//--------------------------------
struct comparar
{
    char ncomp[25];     
}   comparacion[5];

//Declaro Variables
float    FueNew,        MasNew,        AceNew,        PesNew;
char  varFueNew[25], varMasNew[25], varAceNew[25], varPesNew[25];

//Funciones
void LeyesNewton();
void safp();


int main (){
menu();
return 0;
}

void menu()
{
int r;
	system ("cls");
		int op;
	cout<<"\n              Menu Principal"<<endl<<endl;
	cout<<" 1. Trigonometria"<<endl;
	cout<<" 2. Mov Unimensional"<<endl;
	cout<<" 3. Caida Libre"<<endl;
	cout<<" 4. Vectores"<<endl;
	cout<<" 5. Mov. en Una Dimension"<<endl;
	cout<<" 6. Leyes de Newton "<<endl;
	
	cout<<endl;	
	 cout<<" Ingrese Opcion: ";
	cin>>op;
	switch(op)
	{
		case 1:{
			system (" cls");
			trigonometria();
			menu();
			break;
		}
		case 2:{
			system (" cls");
			mov_uni();
			menu();
			break;
		}
		case 3:{
			system (" cls");
			cad_lib();
			menu();
			break;
		}
		case 4:{
			system (" cls");
			vectores ();
			menu();
			break;
		}
		case 5:{
			mov_dimen ();
			menu();
			break;
		}
		case 6:{
			LeyesNewton();
			system("PAUSE");
			menu();
			break;
		}
	}	
}



void mov_dimen()
{ 

float medio=0.5; 
char opcion; 
float x2,x,v1,v2,a,a1,t,vm,t1,t2; 
int n1;  
system("cls"); 


printf("************"); 
printf("BIENVENIDO"); 
printf("*************"); 
printf("\n* a:distancia 1: *"); 
printf("\n* b:distancia 2:"); 
printf("\n* c:velocidad 1: *"); 
printf("\n* d:velocidad 2: *"); 
printf("\n* e:velocidad media 1: *"); 
printf("\n* f:velocidad media 2: *"); 
printf("\n* g:aceleracion media : *");  
printf("\n***********************************"); 
printf("\ningrese opcion:"); 
scanf("%s",&opcion); 
switch(opcion) 
{ case 'a': 
system("cls"); 
printf("ingrese los datos para calcular distancia: "); 
  
 
printf("\nIngrese velocidad media o velocidad : "); 
scanf("%f",&vm); 
printf("Ingrese tiempo :"); 
scanf("%f",&t); 
x=vm/t; 
printf("La Distancia es : %f",x); 


getch(); 
system("cls"); 
printf("Otra operacion =1"); 
printf("\nSalir= S"); 
scanf("%f",&a); 
if (a==1) 
{ 
//goto X; 
} 
break; 

case 'b': 
system("cls"); 
printf("ingrese valosres para calcular distancia:"); 

printf("\nIngrese velocidad inicial:"); 
scanf("%f",&v1); 
printf("Ingrese aceleracion :"); 
scanf("%f",&a1); 
printf("Ingrese tiempo:"); 
scanf("%f",&t); 
x2=(v1*t)+ (medio*a1*t*t) ;  
printf("La Resta Es: %f",x2); 
 

getch(); 
system("cls"); 
printf("Otra operacion=1"); 
printf("\nSalir=S"); 
scanf("%f",&a); 
if (a==1) 
{ 
//goto X; 
} 
break; 

case 'c': 
system("cls"); 
printf("ingrese valosres para calcular velocidad:"); 
 
printf("\nIngrese velocidad inicial:"); 
scanf("%f",&v1); 
printf("Ingrese aceleracion :"); 
scanf("%f",&a1); 
printf("Ingrese tiempo:"); 
scanf("%f",&t); 
vm=(v1)+ (a1*t) ;  
printf("La Resta Es: %f",vm); 
 
 
getch(); 
system("cls"); 
printf("Otra operacion=1"); 
printf("\nSalir=S"); 
scanf("%f",&a); 
if (a==1) 
{ 
//goto X; 
} 
break; 

case 'd': 
system("cls"); 
printf("Ingrese Numeros Para Calcular Velocidad 2"); 
printf("\nIngrese velocidad inicial:"); 
scanf("%f",&v1); 
printf("\nIngrese aceleracion:"); 
scanf("%f",&a1);
printf("\nIngrese distancia:"); 
scanf("%f",&x); 
v2=(v1*v1)+ (2*a1*x); 
printf("la respuesta es:%f",&v2); 
getch(); 
system("cls"); 
printf("Otra operacion=1"); 
printf("\nSalir=S"); 
scanf("%f",&a); 
if (a==1) 
{ 
//goto X; 
} 
break; 

case 'e': 
system("cls"); 
printf("Ingrese Numeros para Calcular Velocidad media 1:"); 
printf("\nIngrese velocidad inicial:"); 
scanf("%f",&v1);
printf("\nIngrese velocidad final:"); 
scanf("%f",&v2);
vm=(v1+v2) / 2;
getch(); 
system("cls"); 
printf("Otra operacion=1"); 
printf("\nSalir=S"); 
scanf("%f",&a); 
if (a==1) 
{ 
//goto X; 
} 
break; 

case 'f': 
system("cls"); 
printf("Ingrese Numeros para caluclar velocidad media 2:"); 
printf("\nIngrese delta de distancia:"); 
scanf("%f",&x);
printf("\nIngrese velocidad final:"); 
scanf("%f",&t); 
vm=x/t; 
printf("La velocidad media  Es: %f",vm); 
getch(); 
system("cls"); 
printf("Otra operacion=1"); 
printf("\nSalir=S"); 
scanf("%f",&vm); 
if (a==1) 
{ 
//goto X; 
} 
break; 

case 'g': 
system("cls"); 
printf("Ingrese Numeros para calcular aceleración media:"); 
printf("\nIngrese delta de velocidad:"); 
scanf("%f",&v1);
printf("\nIngrese delta de tiempo:"); 
scanf("%f",&t); 
a1=v1/t; 
printf("la aceleración media es :%f",a); 
getch(); 
system("cls"); 
printf("Otra operacion=1"); 
printf("\nSalir=S"); 
scanf("%f",&a); 
if (a==1) 
{ 
//goto X; 
} 
break; 







}
}





//AREA DE FUNCIONES
void trigonometria()
{
	double hip,a,b,ang;
	int op,r;
	while (r)
	{
	cout<<" BIENVENIDO AL MENU DE LA TRIGONOMETRIA"<<endl;
	cout<<" 1. Hipotenusa"<<endl;
	cout<<" 2. Cateto Opuesto"<<endl;
	cout<<" 3. Cateto Adyacente"<<endl;
	cout<<" 4. Encontrar Angulo"<<endl;
	cout<<" Digite Operacion que desea Realizar: ";
	cin>>op;
	switch (op)
	{
		case 1:{
			system ("cls");
			cout<<" \nA Ingresado al area del Calculo de la Hipotenusa"<<endl;
			cout<<"\n\n Ingrese los Datos que se le solicitan"<<endl;
			cout<<" Angulo 0: ";
			cin>>ang;
			cout<<" Lado Opuesto o Cateto Opuesto [a]: ";
			cin>>a;
			cout<<" Lado Adyacente o Cateto Adyacente [b]: ";
			cin>>b;
			if(a==0)
			{
			a=(tan(ang*pi/180))*b;
			hip=sqrt((pow(a,2)+pow(b,2)));
			cout<<" El cateto Opuesto vale: "<<a<<endl;
			
			cout<<" La Hipotenusa vale: "<<hip<<endl;	
			}
				if(b==0)
			{
			b=a/(tan(ang*pi/180));
			hip=sqrt((pow(a,2)+pow(b,2)));
			cout<<" El cateto adyacente vale: "<<b<<endl;
			
			cout<<" La Hipotenusa vale: "<<hip<<endl;	
			}
			if(ang==0)
			{
				hip=sqrt((pow(a,2)+pow(b,2)));
			cout<<"La Hipotenusa vale: "<<hip<<endl;	
			}
			break;
		}
		case 2:{
			system ("cls");
			cout<<" \nA Ingresado al area del Calculo del lado Opuesto [a]"<<endl;
			cout<<"\n\n Ingrese los Datos que se le solicitan"<<endl;
			cout<<" Angulo 0: ";
			cin>>ang;
			cout<<" Lado Opuesto o Cateto adyacente [b]: ";
			cin>>b;
			cout<<" Hipotenusa [c]: ";
			cin>>hip;
			
				if(b==0)
			{
			b=(cos(ang*pi/180))*hip;
			a=sqrt((pow(hip,2)-pow(b,2)));
			cout<<" El cateto Adyacente es: "<<b<<endl;
			
			cout<<" El cateto Opuesto es: "<<a<<endl;	
			}
				if(hip==0)
			{
			hip=b/(cos(ang*pi/180));
			a=sqrt((pow(hip,2)-pow(b,2)));
			cout<<" La Hipotenusa es: "<<hip<<endl;
			
			cout<<" El cateto Opuesto es : "<<a<<endl;	
			}
			if(ang==0)
			{
				a=sqrt((pow(hip,2)-pow(b,2)));
			cout<<"La Cateto Opuesto es : "<<a<<endl;	
			}
			break;
		}
		
		case 3:{
			system ("cls");
			cout<<" \nA Ingresado al area del Calculo de la Adyacente [b]"<<endl;
			cout<<"\n\n Ingrese los Datos que se le solicitan"<<endl;
			cout<<" Angulo 0: ";
			cin>>ang;
			cout<<" Lado Opuesto [a]: ";
			cin>>a;
			cout<<" Hipotenusa [c]: ";
			cin>>hip;
			
			if(a==0)
			{
			a=(sin(ang*pi/180))*hip;
			b=sqrt((pow(hip,2)-pow(a,2)));
			
			cout<<" El cateto Opuesto es: "<<a<<endl;
			cout<<" El cateto Adyacente es: "<<b<<endl;
				
			}
				if(hip==0)
			{
			hip=a/(sin(ang*pi/180));
			b=sqrt((pow(hip,2)-pow(a,2)));
			cout<<" La Hipotenusa es: "<<hip<<endl;
			
			cout<<" El cateto Adyacente es: "<<b<<endl;	
			}
			if(ang==0)
			{
			b=sqrt((pow(hip,2)-pow(a,2)));
			cout<<"La Cateto Adyacente es: "<<b<<endl;	
			}
			break;
		}
		case 4:{
			system ("cls");
			float ang1, r;
			cout<<"\nA Ingresado al Area de Calcular el Angulo"<<endl;
			cout<<"Ingrese La Hipotnusa: ";
			cin>>hip;
			cout<<" Ingrese el Cateto Opuesto: ";
			cin>>a;
			cout<<" Ingrese Cateto Adyacente: ";
			cin>>b;
			
			if(a!=0 && hip!=0)
			{
				ang=a/hip;
				ang1=asin(ang);
				
				
				cout<<" El angulo es: "<<ang1<<endl;
			}
			break;
		}
	}
	cout<<" Desea Regresar al Menu de Trigonometria? SI=1 NO=0: ";
	cin>>r;
	system("cls");	
	}
}




//-LEYES DE NEWTON---------------------------------------------------------------------------------------------




void LeyesNewton(){
	system("cls");
		    //Declaro contenido de ncomp
	    strcpy(comparacion[1].ncomp,"n");
//inicio
	    printf("[En caso de no Ingresar Datos escriba (%s) ]\n",comparacion[1].ncomp);
        printf("Ingrese Masa [Kg]: ");
        gets(varMasNew);
        if( (strcmp(comparacion[1].ncomp,varMasNew) == 0) ){
        	printf("Ingrese fuerza [N]: ");
        	gets(varFueNew);
        	if( (strcmp(comparacion[1].ncomp,varFueNew) == 0) ){
        		printf("Ingrese aceleracion[m/seg2]: ");
        		gets(varAceNew);
        		if( (strcmp(comparacion[1].ncomp,varAceNew) == 0) ){
        			printf("Ingrese peso[N]: ");
        			gets(varPesNew);
        			if( (strcmp(comparacion[1].ncomp,varPesNew) == 0) ){
        				printf("No se puede realizar operacion");
					}else{
						//si hay peso
						PesNew= atof(varPesNew);
						MasNew= PesNew/gravedad;
						printf("El peso es: %8.2f N",PesNew);
						printf("\nLa masa es: %8.2f Kg",MasNew);
					}
				}else{
					//si hay aceleraacion 
					printf("Ingrese Peso [N]: ");
					gets(varPesNew);
					if( (strcmp(comparacion[1].ncomp,varPesNew) == 0) ){
						AceNew= atof(varAceNew);
						printf("La Aceleracion es: %8.2f [m/s^2]",AceNew);
					}else{
						AceNew= atof(varAceNew);
						PesNew= atof(varPesNew);
						MasNew=(PesNew/gravedad);
						FueNew=MasNew*AceNew;
						safp();
					}					
				}
        		
			}else{
				//si hay fuerza 3
				printf("Ingrese Aceleracion [m/s^2]: ");
				gets(varAceNew);
				if( (strcmp(comparacion[1].ncomp,varAceNew) == 0) ){
					printf("Ingrese Peso [N]: ");
					gets(varPesNew);
					if( (strcmp(comparacion[1].ncomp,varPesNew) == 0) ){
						FueNew= atof (varFueNew);
						printf("La Fuerza es: %8.2f [N]",FueNew);
					}else{
						FueNew= atof (varFueNew);
						PesNew= atof (varPesNew);
						MasNew= PesNew/gravedad;
						AceNew= FueNew/MasNew;
						safp();						
					}
				}else{
					//si hay miniaceleracion
					printf("Ingrese Peso [N]: ");
					gets(varPesNew);
					if( (strcmp(comparacion[1].ncomp,varPesNew) == 0) ){
						FueNew= atof (varFueNew);
						AceNew= atof (varAceNew);
						MasNew=FueNew/AceNew;
						PesNew=MasNew*gravedad;
						safp();
					}else{
						FueNew= atof (varFueNew);
						AceNew= atof (varAceNew);
						PesNew= atof (varPesNew);
						MasNew=FueNew/AceNew;
						safp();
					}
				}
			}
			
		}else{
			//si hay masa todo lo demas************************************************************************************************************
			printf("Ingrese Fuerza [N]: ");
			gets(varFueNew);
			if( (strcmp(comparacion[1].ncomp,varFueNew) == 0) ){
				printf("Ingrese Aceleracion [m/s^2]: ");
				gets(varAceNew);
				if( (strcmp(comparacion[1].ncomp,varAceNew) == 0) ){
					printf("Ingrese Peso [N]: ");
					gets(varPesNew);
					if( (strcmp(comparacion[1].ncomp,varPesNew) == 0) ){
						MasNew= atof(varMasNew);
						PesNew=MasNew*gravedad;
						printf("\nLa Masa es: %8.2f [kg]",MasNew);
						printf("\nEl Peso es: %8.2f [N]",PesNew);
					}else{
						//si hay peso
						MasNew= atof(varMasNew);
						PesNew= atof(varPesNew);
						printf("\nLa Masa es: %8.2f [kg]",MasNew);
						printf("\nEl Peso es: %8.2f [N]",PesNew);
					}
				}else{
					//si hay aceleracion 
					printf("Ingrese Peso [N]: ");
					gets(varPesNew);
					if( (strcmp(comparacion[1].ncomp,varPesNew) == 0) ){
						MasNew= atof (varMasNew);
						AceNew= atof (varAceNew);
						PesNew=MasNew*gravedad;
						FueNew=MasNew*AceNew;
						safp();
					}else{
						//si hay peso
						MasNew= atof (varMasNew);
						AceNew= atof (varAceNew);
						PesNew= atof (varPesNew);
						FueNew=MasNew*AceNew;
						safp();
					}
				}
			}else{
				//si hay Fuer3
				printf("Ingrese Aceleracion [m/s^2]: ");
				gets(varAceNew);
				if( (strcmp(comparacion[1].ncomp,varAceNew) == 0) ){
					printf("Ingrese Peso [N]: ");
					gets(varPesNew);
					if( (strcmp(comparacion[1].ncomp,varPesNew) == 0) ){
						MasNew= atof(varMasNew);
						FueNew= atof(varFueNew);
						PesNew=MasNew*gravedad;
						AceNew=FueNew/MasNew;
						safp();
					}else{
						//si hay peso
						MasNew= atof(varMasNew);
						FueNew= atof(varFueNew);
						PesNew= atof(varPesNew);
						AceNew=FueNew/MasNew;
						safp();
					}
				}else{
					//si hay ace
					
					printf("Ingrese Peso [N]: ");
					gets(varPesNew);
					if( (strcmp(comparacion[1].ncomp,varPesNew) == 0) ){
						MasNew= atof(varMasNew);
						FueNew= atof(varFueNew);
						PesNew=MasNew*gravedad;
						AceNew= atof(varAceNew);
						safp();
					}else{
						//si hay peso
						MasNew= atof(varMasNew);
						FueNew= atof(varFueNew);
						PesNew= atof(varPesNew);
						AceNew= atof(varAceNew);
						safp();
					}
					
				}
			}
			//**************************************************************************************************************************************			
		}
			
}


void safp(){
	
	printf("\nLa Masa es: %8.2f [kg]",MasNew);
    printf("\nLa Fuerza es: %8.2f [N]",FueNew);
    printf("\nLa Aceleracion es: %8.2f [m/s^2]",AceNew);
	printf("\nEl Peso es: %8.2f [N]",PesNew);
	
	cout<<endl<<endl;

}

//FIN LEYES DE NETON----------------------------------------------------------------


//Movimiento Unimensional aceleracion----------------
void mov_uni()
{	int op, r;

	do{system("cls");
	float vi,vf,a,x,t,g, v,resultado;

	cout<<"                Movimiento Unimensional"<<endl;
	cout<<"               Con Aceleracion Constante"<<endl;
	cout<<"Que desea Calcular:"<<endl;
	cout<<"1. Velocidad Inicial"<<endl;
	cout<<"2. Velocidad Final"<<endl;
	cout<<"3. Aceleracion"<<endl;
	cout<<"4. Distancia"<<endl;
	cout<<"5. Tiempo"<<endl<<endl;
	cout<<" Digite Opcion:  ";
	cin>>op;
	switch(op)
	{
		case 1:{
			 velocidadini();
			system (" PAUSE");
		 mov_uni();
		  menu();
			break;
		}

		case 2:{
			vel_fin();
			system (" PAUSE");
			 mov_uni();
			 	 menu();
			break;
		}
		
		
		case 3:{
			acel();
			system (" PAUSE");
				 mov_uni();
				 menu();
			break;
		}
		
		case 4:{
			dist();
			system (" PAUSE");
			 mov_uni();
			 	 menu();
			break;
		
	}
	case 5:{
		tiempo();
		system (" PAUSE");
		mov_uni();
			 menu();
		break;
	}
	default:{
 		    	cout<<"Opcion no valida!!";
 		    	 menu();
				break;	
	cout<<"\n \tOtra operacion\n si [1] / no [0]";
	cin>>r;
}
}

	}while (r !=0);
		 menu();
}


void velocidadini(){
	
		system (" cls");
	float vi,vf,a,x,t,g, v,resultado;
	
		
			cout<<" Ingrese los Datos Para calcular La Velocidad Incial"<<endl<<endl;
			
			cout<<" Ingrese Velocidad Final [m/s]:  ";
			cin>>vf;
			cout<<" Ingrese Distancia: ";
			cin>>x;
			cout<<" Ingrese Aceleracion  [m/s^2]:";
			cin>>a;
			cout<<" Ingrese Tiempo [seg]:  ";
			cin>>t;
		
			if(t==0){
			
			
			float s;
			s=2*(a*x);
			 vi=sqrt(pow(vf,2)-s);
			//cout<<" La velocidad Incial es: "<<vi<<"[m/s]"<<endl;
		      
		      }
			if( x==0)
			{	
		 vi=(vf- (a*t));
		//	cout<<" La velocidad Incial es: "<<vi<<"[m/s]"<<endl;
			}
			if( a==0)
			{
			 vi=(2*(x/t)-vf);
		//	cout<<" La velocidad inicial es: "<<vi<<" [m/s]"<<endl;	
			}
			if (vf==0)
			{
			vi=((x/t)-(a*t/2));
			//cout<<" La velocidad Final es: "<<vi<<" [m/s]"<<endl;	
			}
			
			cout<<" La velocidad Incial es: "<<vi<<"[m/s]"<<endl;
			cout<<endl<<endl;
			cout<<"               Ir al Menu Principal "<<endl;		
}




void vel_fin()
{

	float vi,vf,a,x,t,g, v,resultado;
			system("cls");
			
			cout<<" Ingrese los datos para calcular la VELOCIDAD FINAL"<<endl<<endl;
		
			cout<<" Ingrese Velocidad Incial [m/s]:  ";
			cin>>vi;
			cout<<" Ingrese aceleracion  [m/s^2]:";
			cin>>a;
			cout<<" Ingrese Distancia[m]:  ";
			cin>>x;
			cout<<" Ingrese Tiempo [s]: ";
			cin>>t;
			
			
		  if(vf=='?')
		  {
		  if(x==0)	
		  {
		  
		  float vf=(vi+(a*t));
		  //cout<<" La Velocidad Final es: "<<vf<<" [m/s^2]"<<endl;
	}
		  }
		  else
		  { 
		  if(vf=='?'&& x!=0){
		  float vf=(vi+(a*t));
		 // cout<<" La Velocidad Final es: "<<vf<<" [m/s^2]"<<endl;
	}
	}
		  if(vf=='?' && a==0)
		  {
			float vf=(2*(x/t)-vi);
		//	cout<<" La velocidad Final es: "<<vf<<" [m/s]"<<endl;	
		  }
		  if(vf=='?' && t==0)
		  {
		  float s;
			s=2*(a*x);
		 float vf=sqrt((vi*vi)+s);
		 //cout<<"La Velocidd Final es: "<<vf<<" [m/s]"<<endl;
		  }
		  
		  cout<<" La Velocidad Final es: "<<vf<<" [m/s^2]"<<endl;	
}

void acel()
{

	float vi,vf,a,x,t,g, v,resultado;
				float s;
			system("cls");
		
			cout<<" Ingrese Velocidad Incial [m/s]:  ";
			cin>>vi;
			cout<<" Ingrese Velocidad Final [m/s]: ";
			cin>>vf;
			cout<<" Ingrese Distancia[m]:  ";
			cin>>x;
			cout<<" Ingrese Tiempo [s]: ";
			cin>>t;
			if(a=='?')
			{
			if(t==0){
			float a=(pow(vf,2)-pow(vi,2))/(2*x);
			//	cout<<" La Aceleracion es: "<<a<<" [m/^2]"<<endl;
			}
		}
		else
		{
			if(t!=0)
			{
				 a=(vf-vi)/t;
			//	cout<<" La Aceleracion es: "<<a<<" [m/^2]"<<endl;	
			}
		}
			if(a=='?' && x==0 )
			{
			x=(0.5*(vf+vi))*t;
		//	cout<<"\nLa distancia es: "<< x<<"[m]"<<endl;	
		  float a=((x-(vi*t))*2)/pow(t,2);
	//	cout<<"La Aceleracion es: "<<a<<" [m/^2]"<<endl;
				}
			if(a=='?' && vf==0)
			{
				vf=x/(0.5*t)-vi;
				//cout<<" La velocidad final es: "<<vf<<"[m/s]"<<endl;
	            vf=((vf-vi)/t);
				//cout<<" La Aceleracion es: "<<vf<<" [m/^2]"<<endl;
				}
					if(a=='?' && vi==0)
			{
				vi=(2*(x/t))-vf;
			//	cout<<" La velocidad inicial es: "<<vi<<"[m/s]"<<endl;
	             vi=(x-(vi*t))*2/pow(t,2);
			//	cout<<" La Aceleracion es: "<<vi<<" [m/^2]"<<endl;
				}	
				
				cout<<" La Aceleracion es: "<<a<<" [m/^2]"<<endl;	
}

void tiempo()
{
	
system("cls");

	float vi,vf,a,x,t,g, v,resultado;
			cout<<" Ingrese los datos para calcular la Distancia"<<endl<<endl;
			cout<<" Ingrese Velocidad Incial [m/s]:  ";
			cin>>vi;
			cout<<" Ingrese aceleracion  [m/s^2]:";
			cin>>a;
			cout<<" Ingrese Velocidad Final [m/s]: ";
			cin>>vf;
			cout<<" Ingrese Distancia[m]:  ";
			cin>>x;
			cout<<" Ingrese Tiempo [s]: ";
			cin>>t;
			float s;
			if(t==0)
			{
			
			if(a==0){
			s=pow(vf,2)-pow(vi,2);
			a=(s/(2*x));
			t=((vf-vi)/a);
		//	cout<<"El tiempo es:"<<t<<"[seg]"<<endl;
			}
			else{
		
				t=((vf-vi)/a);
				cout<<"El tiempo es:"<<t<<"[seg]"<<endl;
        }
		}
		if(t==0 && x==0)
		{	
			t=((vf-vi)/a);
			
		//	cout<<"El tiempo es:"<<t<<"[seg]"<<endl;
		}
		
			cout<<"El tiempo es:"<<t<<"[seg]"<<endl;
	
}

void dist()
{
	
	float vi,vf,a,x,t,g, v,resultado;
			system("cls");		
			cout<<" Ingrese Velocidad Incial [m/s]:  ";
			cin>>vi;
			cout<<" Ingrese aceleracion  [m/s^2]:";
			cin>>a;
			cout<<" Ingrese Velocidad Final [m/s]: ";
			cin>>vf;
			cout<<" Ingrese Tiempo [s]: ";
			cin>>t;
			
		if(t==0)
		{
			t=((vf-vi)/a);
			cout<<"El tiempo es [s]: "<<t<<endl;
			x=(vi*t)+(0.5*(a*pow(t,2)));
		//	cout<<"La distancia es: "<< x<<"[m]"<<endl;
		}
		if(a==0)
		{
			a=(vf-vi)/t;
		//	cout<<"La Aceleracion es de: "<<a<<"[m/s^2]"<<endl;
			x=(pow(vf,2)-pow(vi,2))/(2*a);
		//	cout<<"La distancia es: "<< x<<"[m]"<<endl;	
		}
		if(vi==0)
		{
			vi=vf-(a*t);
	//	cout<<"La velocidad Inicial es : "<<vi<<"[m/s]"<<endl;
			x=(vi*t)+(0.5*(a*pow(t,2)));
		//	cout<<"La distancia es: "<< x<<"[m]"<<endl;
		}
		if(vf==0)
		{
			vf=vi+(a*t);
		//	cout<<" La velocidad Final es de: " <<vf<<"[m/s] "<<endl;
		x=((vi*t)+(0.5*(a*pow(t,2))));
		//	cout<<"La distancia es: "<< x<<"[m]"<<endl;
		}
		
			cout<<"La distancia es: "<< x<<"[m]"<<endl;
}



//caida libre-----------------------------------------------------
void cad_lib()
{	int op, r;

	do{system("cls");
	float vi,vf,a,x,t,g, v,resultado;

	cout<<"                Movimiento Unimensional"<<endl;
	cout<<"               Con Aceleracion Constante"<<endl;
	cout<<"Que desea Calcular:"<<endl;
	cout<<"1. Velocidad Inicial"<<endl;
	cout<<"2. Velocidad Final"<<endl;
	cout<<"3. Altura o Distancia"<<endl;
	cout<<"4. Tiempo"<<endl<<endl;
	cout<<" Digite Opcion:  ";
	cin>>op;
	switch(op)
	{
		case 1:{
			 velocidadini1();
			system (" PAUSE");
		 cad_lib();
		 menu();
			break;
		}

		case 2:{
			vel_fin1();
			system (" PAUSE");
			 cad_lib();
			 menu();
			break;
		}
		
		case 3:{
			altura();
			system (" PAUSE");
			 mov_uni();
			 menu();
			break;
		
	}
	case 4:{
		tiempo1();
		system (" PAUSE");
		mov_uni();
		menu();
		break;
	}
	default:{
 		    	cout<<"Opcion no valida!!";
 		    	menu();
				break;	
	cout<<"\n \tOtra operacion\n si [1] / no [0]";
	cin>>r;
}
}

	}while (r !=0);
		menu();
}



void velocidadini1(){
	system (" cls");
			
	float vi,vf,h,t,g, v,resultado;
			cout<<" Ingrese los Datos Para calcular La Velocidad Incial"<<endl<<endl;
		
			cout<<" Ingrese Velocidad Final [m/s]:  ";
			cin>>vf;
			cout<<" Ingrese Distancia: ";
			cin>>h;
			cout<<" Ingrese Tiempo [seg]:  ";
			cin>>t;
			
		
		      
			if( h==0)
			{	
		     vi=vf-(-gravedad*t);
			//cout<<" La Distancia es: "<<h<<"[m]"<<endl;
			}
			if (vf==0)
			{  
				vi=(h/t)-((-gravedad*t)/2);
			//cout<<" La velocidad inicial es: "<<vi<<" [m/s]"<<endl;	
			}	
		cout<<" La velocidad inicial es: "<<vi<<" [m/s]"<<endl<<endl<<endl;		
}




void vel_fin1()
{

	float vi,vf,h,t,g, v,resultado;
			system("cls");
		
			cout<<" Ingrese los datos para calcular la VELOCIDAD FINAL"<<endl<<endl;
			cout<<" Dato a encontrar Velocidad final [m/s]:  ";
			cin>>vf;
			cout<<" Ingrese Velocidad Incial [m/s]:  ";
			cin>>vi;
			cout<<" Ingrese Distancia[m]:  ";
			cin>>h;
			cout<<" Ingrese Tiempo [s]: ";
			cin>>t;
			
			
		  
		  if(h==0)	
		  {
		 h=((vi*t)-0.5*(-gravedad*(t*t)));
		 //cout<<" La Altura es de : "<<h<<endl;
		  vf=(vi-(-gravedad*(t)));
		 //cout<<" La Velocidad Final es: "<<vf<<" [m/s^2]"<<endl;
	}
		  
		   
		  if(h!=0){
		   vf=((h/t)-(0.5*(-gravedad*t)));
		  //cout<<" La Velocidad Final es: "<<vf<<" [m/s]"<<endl;
	
	}
		  
		  if( t==0)
		  {
		  float s;
		  t=vi/(0.5*(-gravedad));
		 vf=vi-(gravedad*t);
		 //cout<<"La Velocidd Final es: "<<vf<<" [m/s]"<<endl;
		  }
		  
		  cout<<"\n\n                        La Velocidad Final es: "<<vf<<" [m/s]"<<endl;
		 // cout<<"                        El tiempo es [s]:     "<<t<<"[s]"<<endl<<endl<<endl;

}


void tiempo1()
{

	float vi,vf,h,t,g, v,resultado;

				system("cls");
			cout<<" Ingrese los datos para calcular la Distancia"<<endl<<endl;
			cout<<" Ingrese Velocidad Incial [m/s]:  ";
			cin>>vi;
			cout<<" Ingrese Velocidad Final [m/s]: ";
			cin>>vf;
			cout<<" Ingrese Altura[m]:  ";
			cin>>h;
			cout<<" Ingrese Tiempo [s]: ";
			cin>>t;
			float s;
			
			
			if(t==0)
			{
				t=vi/h;
			//	cout<<"El tiempo es:"<<t<<"[seg]"<<endl;
        }
		
		if(t==0 && h==0)
		{	
			t=((vf-vi)/(-gravedad));
			t=-1*t;
			
			//cout<<"El tiempo es:"<<t<<"[seg]"<<endl;
		}
		
		
			cout<<"El tiempo es:"<<t<<"[seg]"<<endl;
	
}

void altura()
{
	
	float vi,vf,h,t,g, v,resultado;
		
			system("cls");		
			cout<<" Ingrese Velocidad Incial [m/s]:  ";
			cin>>vi;
			cout<<" Ingrese Velocidad Final [m/s]: ";
			cin>>vf;
			cout<<" Ingrese Tiempo [s]: ";
			cin>>t;
		
		if(t==0)
		{
		//	t=((vf-vi)/gravedad);
		//	cout<<"El tiempo es [s]: "<<t<<endl;
			h=(vi*t)+(0.5*(gravedad*pow(t,2)));
		//	cout<<"La distancia es: "<< h<<"[m]"<<endl;
		}
	
		if(vi==0)
		{
			vi=vf-(-gravedad*t);
	//	cout<<"La velocidad Inicial es : "<<vi<<"[m/s]"<<endl;
			h=(vi*t)+(0.5*(-gravedad*pow(t,2)));
			h=(0.5*gravedad);
			//cout<<"La distancia es: "<< h<<"[m]"<<endl;
		}
		if(vf==0)
		{
			vf=vi+(-gravedad*t);
		//	cout<<" La velocidad Final es de: " <<vf<<"[m/s] "<<endl;
		h=((vi*t)+(0.5*(-gravedad*pow(t,2))));
		h=(0.5*(-gravedad));
			//cout<<"La distancia es: "<< h<<"[m]"<<endl;
		}
		
		if(vi==0 && vf==0)
		{
			h=(0.5*gravedad);
			
			//cout<<"La distancia es: "<< h<<"[m]"<<endl;
		}
		
			cout<<"La distancia es: "<< h<<"[m]"<<endl;
}


//vectores----------------------------------------------
void vectores ()
{	int op, r;

	do{system("cls");
	
	float vi,vf,a,x,t,g, v,resultado;

cout<<" CALCULO DE COMPONENTES DE VECTORES"<<endl;
cout<<" 1. Componente en x"<<"                               Para Ir al Menu Principal preciona [0]"<<endl;
cout<<" 2. Componente en y"<<endl;
cout<<" 3. Calculo de Desplazamiento"<<endl;
	cout<<" Digite Opcion:  ";
	cin>>op;
	switch(op)
	{
		case 1:{
			 com_x();
			system (" PAUSE");
		 vectores();
		menu();
			break;
		}

		case 2:{
			com_y();
			system (" PAUSE");
			 vectores();
			menu();
			break;
		}
		
		case 3:{
			despla();
			system (" PAUSE");
			 vectores();
			 menu();
			break;
	}
	
	default:{
 		    	cout<<"Opcion no valida!!";
 		    	vectores();
				break;	
	
}
cout<<"\n \tOtra operacion\n si [1] / no [0]";
	cin>>r;

}
	}while (r !=0);
		menu();
}

void com_x()
{
	
float Ax, Ay, x,y,res,ang;
	system ("cls");
		cout<<" Ingrese el desplazamiento [m]: ";
		cin>>x;
		cout<<" Ingrese el Angulo: ";
		cin>>ang;
		res=x*(cos(ang*pi/180));
		cout<<" Componente en x es: "<<res<<"[m]"<<endl;
}

void com_y()
{

float Ax, Ay, x,y,res,ang;
		system ("cls");
		cout<<" Ingrese el desplazamiento [m]: ";
		cin>>x;
		cout<<" Ingrese el Angulo: ";
		cin>>ang;
		res=x*(sin(ang*pi/180));
		cout<<" Componente en x es: "<<res<<"[m]"<<endl;
}

void despla()
{
		char a;	int op, r;

	do{system("cls");
	
	
	cout<<" Como Desea Calcular el Desplazamiento"<<endl;
		cout<<" 1. Por medio de Componente en x [m]: "<<"               Menu Anterior presiona [0]"<<endl;
		cout<<" 2. Por medio de Componente en y [m]: "<<endl;
		cout<<" Ingrese El metodo que desea Efectuar: ";
		cin>>op;
		switch(op)
		{
			case 1:{
				system ("cls");
				des_x();
				system ("PAUSE");
				despla();
				break;
			}
			
			case 2:{
					system ("cls");
				des_y();
				system ("PAUSE");
				despla();
				break;
			}
			default:{
 		    	cout<<"Opcion no valida!!";
 		    	vectores();
				break;	
				}
			cout<<"\n \tOtra operacion\n si [1] / no [0]";
	     cin>>r;	
		}
		 
		}while (r !=0);
		vectores();
}


void des_x()
{	
			system (" cls");
			float d;
			float Ax, Ay, x,y,res,ang;
		cout<<" 1. Ingrese Componente en x [m]: ";
		cin>>x;
		cout<<" Ingrese el Angulo: ";
		cin>>ang;
		d=x/((cos(ang*pi/180)));
			
		cout<<"El desplazamiento es: "<<d<<"[m]"<<endl;
}

void des_y()
{	float d;
		system (" cls");
		
			float Ax, Ay, x,y,res,ang;
		cout<<" 2. Ingrese Componente en y [m]: ";
		cin>>y;
		cout<<" Ingrese el Angulo: ";
		cin>>ang;
		
			d=y/((cos(ang*pi/180)));
			
		cout<<"El desplazamiento es: "<<d<<"[m]"<<endl;
}

