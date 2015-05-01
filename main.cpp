#include <cstdlib>
#include <iostream>
#include <conio.h>	//Para getch y kbhit

#define KEY_UNO 49
#define KEY_DOS 50
#define KEY_TRES 51
#define KEY_CUATRO 52
#define KEY_ESC 27

/* Trabajo Practico TP3
Re requiere realizar un juego de preguntas y respuestas
ingresar al programa y se le pide que eliga la tematica
de lo que quiere responder.
Depues de la preunta para responder con numero o texto.
Una vez que el usuario ingresa la respuesta, se le debe
enunciar si es correcta.

Alumno: Adriel CHAMBI
Algoritmos y estructura de datos
Ciclo Lectivo 2015
*/
using namespace std;

int TeclaPresionada(int KeyPress) {
    if (KeyPress == KEY_UNO) {
        cout<<"1"<<endl;
        return 0;
        }
    if (KeyPress == KEY_DOS) {
        cout<<"2"<<endl;
        return 1;
        }
    if (KeyPress == KEY_TRES) {
        cout<<"3"<<endl;
        return 2;
        }
    if (KeyPress == KEY_CUATRO) {
        cout<<"4"<<endl;
        return 3;
        }
    if (KeyPress == KEY_ESC) {
        cout<<"ESC"<<endl;
        return 99;
        }
}

int main(int argc, char *argv[])
{
    //Variables que necesitare:
    const char *ListaTemario[3] = {"Redes","Programacion","Base de Datos"};
    const char *Pregunta[3][10] = {{"La direccion ip 172.16.19.25/30 tiene la mascara:",
                                   "Cuantos puertos tiene disponible una Direccion IP?",
                                   "Que protocolo relaciona las Direcciones IP y Las Direcciones MAC",
                                   "De cuanto es la velocidad de FAST ETHERNET?",
                                   "Que significa las siglas IEEE?",
                                   "En los 7 niveles OSI, cual de todos es el nivel 5?",
								   "Cual protocolo es orientado a la conexion y fiable?",
								   "Dada la IP 172.191.0.0/16, con 14 SubRedes configuradas, Cuantos Host puedo direccionar por SubRed?",
								   "Dada la IP 172.16.32.27/16 cual es la direccion de BROADCAST a la que pertenece?",
								   "Cual de las siguientes direcciones IP es valida para un Host?"},
                                      {"Que tipo de dato le darias al DNI de un Usuario?",
									  "El termino de Polimorfismo a que paradigma de programacion pertenece?",
									  "Que programa informatico utilizan los navegadores Web?",
									  "Como se denominan las Variables que almacenan direcciones de Memoria?",
									  "En C++ a que nos referimos con la palabra reservada VOID",
									  "Una Cola es una estructura de datos en la que...",
									  "Que hace un pseudocodigo?",
									  "Que tipo de Algoritmo es BURBUJA",
									  "Un Metodo de un Objeto es:",
									  "Que es JSON?"},
									     "Las bases de datos relacionales se normalizan para:",
										 "Una relacion 1:M entre 2 tablas (A y B), da lugar a:",
										 "En cuanto Integridad Referencial, se pueden producir errores si...",
										 "A que se refiere el concepto de atomicidad de una transaccion",
										 "La Clave Primaria permite...",
										 "Los Indices...",
										 "La mineria de datos sirve para...",
										 "Cual de los siguientes no es un Motor de Bade de Datos?",
										 "Cual de las siguientes es verdadera?",
										 "Cual de las siguientes es verdadera?"};
    const char *Respuesta1[3][10] = {{"255.255.255.252",
                                     "49152",
                                     "DNS",
                                     "1000 Mbit/s",
                                     "Instituto de Informaticos, Electronicos y Electricistas",
                                     "Sesion",
									 "UDP",
									 "2046",
									 "172.16.0.0",
									 "178.50.18.255/20"},
                                    {"int",
									 "Programacion Estructurada",
									 "Interprete",
									 "Punteros",
									 "Funcion",
									 "que solo se pueden hacer extracciones, pero nunca inserciones",
									 "Una situacion cotidiana",
									 "Agoritmo de busqueda",
									 "Un objeto no puede tener un metodo",
									 "Un formato ligero para el intercambio de datos empleado en JavaScript"},
									 {"Duplicar intencionalmente columnas en varias tablas",
									  "3 tablas: Tabla A, Tabla B y tabla R (la resultante de la relacion)",
									  "Si borro una fila de la tabla principal y ese registro no tiene 'hijos'",
									  "Significa que se deben ejecutar todas sus operaciones o ninguna",
									  "Estan compuestas por solo un campo",
									  "Identifican un registro de forma univoca",
									  "Normalizar la Tabla",
									  "Php",
									  "La clave primaria es una Fila de la Tabla",
									  "La clave foranea es si o si univoca"}};
    const char *Respuesta2[3][10] = {{"255.255.255.0",
                                     "1024",
                                     "ARP",
                                     "10 Mbit/s",
                                     "Instituto de Ingenieros Informaticos y Electronicos",
                                     "Transporte",
									 "ARP",
									 "8190",
									 "172.16.255.255",
									 "127.34.25.189/8"},
                                    {"long",
									 "Programacion dirigida por eventos",
									 "Compilador",
									 "Registros",
									 "Tipo de Variable",
									 "que solo se pueden realizar inserciones, pero nunca extracciones",
									 "Un software de computadora",
									 "Algoritmo de ordenamiento",
									 "Un estado del objeto",
									 "Un servidor de aplicaciones basado en JavaScript"},
									 {"Evitar la redundancia de los datos",
									  "Tabla B igual. Tabla A se agrega la clave primaria de la entidad B",
									  "Si modificamos la Clave Principal de un registro que no tiene 'hijos'",
									  "Significa que la puede cometer un solo usuario",
									  "El campo debe llamarse del mismo nombre que sus Claves Foraneas",
									  "Permiten ordenar una tabla por un Campo",
									  "descubrir patrones en grandes volumenes de conjuntos de datos",
									  "SQL Server",
									  "La Clave Primaria es uno de los Registros",
									  "Si o si debemos indicar una clave Foranea por Tabla"}};
    const char *Respuesta3[3][10] = {{"255.255.255.248",
                                     "256",
                                     "TCP",
                                     "100 Mbit/s",
                                     "Instituto de Ingenieros Electricos y Electronicos",
                                     "Fisico",
									 "TCP",
									 "4096",
									 "172.16.32.0",
									 "195.234.253.0/24"},
                                    {"char",
									 "Programacion Imperativa",
									 "Ensamblador",
									 "Enteras",
									 "Operador",
									 "las inserciones y extracciones se realizan por el mismo extremo",
									 "Representa la solucion a un Algoritmo",
									 "Algorimo de Camino Corto",
									 "Una función del objeto",
									 "Un lenguaje de programacion orientado a objetos basado en JavaScript"},
									 {"Mejorar la velocidad de las consultas",
									  "Tabla A igual. Tabla B igual",
									  "Si borro una fila de la tabla secundaria que apunta a la tabla principal",
									  "Significa que respeta la integridad",
									  "Identificar un registro de forma unica",
									  "Solo se le puede aplicar al Campo de la Clave Primaria",
									  "Disminuir el espacio que ocupa la Base de Datos",
									  "MySQL",
									  "Las tablas estan compuestas por Campos(Columnas) y Registros(Filas)",
									  "Si o si una Clave Foranea tiene que tener el mismo Nombre que la Clave Primaria"}};
    const char *Respuesta4[3][10] = {{"255.255.255.240",
                                     "65535",
                                     "UDP",
                                     "10 Gbit/s",
                                     "Instituto de Ingenieros en Sistemas Electricos y Electronicos",
                                     "Aplicacion",
									 "ICMP",
									 "4094",
									 "172.16.32.255",
									 "178.50.79.127 /25"},
                                    {"bool",
									 "Programacion Orientada a Objetos",
									 "Recolector",
									 "Punto Flotante",
									 "Constante",
									 "las inserciones se realizan por un extremo y las extracciones por el otro extremo",
									 "Un problema de logica",
									 "Algoritmo de Calculo Diferencial",
									 "Una variable del objeto",
									 "Un cliente de aplicaciones basado en JavaScript"},
									 {"Mejorar el Rendimiento",
									  "Tabla A igual. Tabla B se agrega la clave primaria de la entidad A",
									  "Si borramos una fila de la Tabla Principal y ese registro tenia 'Hijos'",
									  "Significa que es una sola operacion",
									  "Tener valores nulos",
									  "Todos los tipos de campos pueden ser indexados",
									  "Cargar muchos datos en la Base de Datos",
									  "Oracle",
									  "Las tablas estan compuestas por Campos(Filas) y Registros(Columnas)",
									  "Una clave Foranea hace referencia a una clave primaria"}};
    const int Resultado[3][10] = {{1,4,2,3,3,1,3,4,2,1},
                                  {3,4,1,1,2,4,3,2,3,1},
								  {2,4,4,1,3,2,2,1,3,4}};
    cout<<"Elige tu Destino"<<endl;
    cout<<"===== == ======="<<endl<<endl;
    cout<<"1.   - Redes"<<endl;
    cout<<"2.   - Programacion"<<endl;
    cout<<"3.   - Base de Datos"<<endl;
    cout<<"ESC. - Abandona"<<endl<<endl;
    cout<<"Tu Respuesta es: ";
    
    // Ingreso de tecla
    int tecla;
    do{
       if(kbhit())
           tecla = getch();
    } while(tecla != KEY_UNO && tecla != KEY_DOS && tecla != KEY_TRES && tecla != KEY_ESC);
    // Ingreso 1,2,3 o ESC
    
    // Eleccion de Temario:
    int Temario = TeclaPresionada(tecla);
    if (Temario == 99) {
        //99 es escape, sale del programa
        return 0;
        }
    cout<<endl<<"Seleccionaste "<<ListaTemario[Temario]<<", ahora comienza tu camino.."<<endl<<endl;
    
    //Inicio de las 10 Preguntas segun que temario selecciono:
    float ResCorrectas = 0;
    float TotalCompletas = 0;
    int NroPregunta = -1;
    do{
    NroPregunta = NroPregunta + 1;
    cout<<"Pregunta Numero "<<NroPregunta + 1<<"/10 de "<<ListaTemario[Temario]<<":"<<endl<<endl;
    cout<<Pregunta[Temario][NroPregunta]<<endl<<endl;
    cout<<"1.   - "<<Respuesta1[Temario][NroPregunta]<<endl;
    cout<<"2.   - "<<Respuesta2[Temario][NroPregunta]<<endl;
    cout<<"3.   - "<<Respuesta3[Temario][NroPregunta]<<endl;
    cout<<"4.   - "<<Respuesta4[Temario][NroPregunta]<<endl;
    cout<<"ESC. - Abandonas"<<endl<<endl;
	cout<<"Tu Respuesta es: ";
    
    // Ingreso de tecla
    int Resp;
    do{
       if(kbhit())
           Resp = getch();
    } while(Resp != KEY_UNO && Resp != KEY_DOS && Resp != KEY_TRES && Resp != KEY_CUATRO && Resp != KEY_ESC);
    // Ingreso 1,2,3,4 o ESC
    
    // Eleccion de Respuesta:
    int RespuestaPress = TeclaPresionada(Resp);
    if (RespuestaPress == 99) {
        //99 es escape, sale del programa
        break;
    }
    
    //Ver resultado:
    RespuestaPress = RespuestaPress + 1;
    char *Eleccion;
    TotalCompletas = TotalCompletas + 1;
    if (RespuestaPress == Resultado[Temario][NroPregunta]){
		ResCorrectas = ResCorrectas + 1;
        Eleccion = "CORRECTO!!!";
    }
	else
        Eleccion = "FALLASTE!!!";
    cout<<endl<<"Seleccionaste la respuesta "<<RespuestaPress<<", y "<<Eleccion<<endl<<endl;
    
    //Reseteo la variable de teclado:
    Resp = 33;
} while (NroPregunta != 9);

	cout<<endl<<"Respondiste "<<ResCorrectas<<" de "<<TotalCompletas<<endl;
	//float Calificacion = ResCorrectas/TotalCompletas;
    if (TotalCompletas!=0) {
		float Calificacion = (ResCorrectas / TotalCompletas) * 100;
		cout<<"Has sacado un "<<Calificacion<<" en "<<ListaTemario[Temario]<<endl<<endl;
	}
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
