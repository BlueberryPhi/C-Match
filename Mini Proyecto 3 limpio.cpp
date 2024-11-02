#include <stdio.h>
#include <string.h>
#include <math.h>
int busquedaLineal_V1(int[],int[], int, int,int);
int busquedaLineal_VC(char[][], int, char);
void buscaTodos(char[][15],int[],float[],int[],int,int,float,float,int,char[10],char[][28],char[][20],char[][12],char[8][20],int[8],int[7],char[7][20]);

main ()
{
//Declaracion de variables que estaremos usando	
int age1,age2,s;
float h1,h2;
  char sex[10];
//Arreglos en base en la encuesta.
int Edad []={19,19,20,18,19,20,18,19,18,19,19,18,18,18,19,20,18,19,18,19,20,19,18,18,20,20,19,19,18,21,19,20};
float Estatura []= {1.76,1.75,1.61,1.77,1.93,1.8,1.73,1.8,1.79,1.7,1.83,1.81,1.77,1.74,1.7,1.68,1.65,1.77,1.75,1.6,1.5,1.805,1.72,1.58,1.59,1.8,1.65,1.6,160,1.77,170,1.91,1.7};
int Sexo[]= {1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 2, 2, 1, 2, 2, 2, 1, 2, 2, 2, 1, 1, 1, 1};
char Musica [] [20]= {"Corridos","Electronica","Electronica","Todo menos Regueton","Pop","Electrónica","Rock","Pop","Corridos","Corridos","Regueton","Metal","Regueton","Todos","Corridos","Pop","Pop","Metal","Electronica","Pop","Pop","Rock","Pop","Pop","Pop","Rap","Pop","Rock","Kpop","Regueton","Electronica","Regueton","Rock"};

char Estudios [] [28]= {"Dirección financiera","Arquitectura","Administracion de Empresas","Derecho","Trabajo","Finanzas","Fisioterapia","Formacion en Yoga","Administración de empresas","Diseño industrial","Contabilidad","Administracion de empresas","Ingeneria mecánica","Ingenieria de Software","Ingenieria de Software","La universidad","Administracion de empresas","Ciencia de Datos","Actuaría","Ingeniería Mecatrónica"};

char Nombre [][15]= {"Emir", "Emilio", "Ana Sofia", "Yoltic Peláez", "Jack", "Augusto", "Andrea", "Striker", "Luis1chu", "Rickyfloo", "Gustavo", "ggimh", "Cesar", "Javier", "Maik", "Ariam", "Sofi", "Figueroa", "CastShark", "Hannia", "Karoll Musatye", "ALSACH", "Jenny", "Lili", "July", "Andres", "Fabi", "Lola", "Ana Paula", "Luis", "Jose", "Javier", "Rasmus"};

char Pasatiempos [] [12]= {"Cocinar", "Videojuegos", "Leer", "Videojuegos", "Estrés", "Videojuegos", "Leer", "Leer", "Leer", "Deporte", "Videojuegos", "Programar", "Videojuegos", "Deporte", "Videojuegos", "Deporte", "Leer", "Deporte", "Leer", "Dormir", "Leer", "Videojuegos", "Dormir", "Deporte", "Leer", "Videojuegos", "Leer", "Leer", "Caminar", "Deporte", "Videojuegos", "Deporte", "Leer"};//

//inicio de los print y scan de cada categoría
//Sexo
  printf("Bienvenido/a a Azteca Match :)");
   printf("\nQue buscas?\n(1) Hombre\n(2) Mujer\n");
   scanf("%d",&s);
   if(s!=1&&s!=2){
   printf("Respuesta invalida");
   return 0;}
//Si la respuesta no es 1 o 2, o sea no hay género definido, el programa se finaliza. Se pudo haber hecho un loop pero ya andamos cansados

  //La función strcpy sirve para asignar esta cadena de texto a una variable
if(s==1)
 strcpy(sex, "Hombre");
else if(s==2)
 strcpy(sex, "Mujer");
printf("%s",sex);
  //La función strcpy sirve para asignar esta cadena de texto a una variable
//Aquí estamos cambiando el valor de la variable "s" dependiendo de la respuesta dada. Si se respondió por hombre se cambia el valor de s a hombre

//Eleccion de edad
  printf("\nEmpecemos por la edad, En que edad minima estas intersad@?\n");
  printf("18-21\n0) No es importante\n");
  scanf("%d",&age1);
  if(age1!=0){
  printf("\nQue edad maxima?\n");
scanf("%d",&age2);}


if(age1==0)
age1=18,age2=21;


//Eleccion de estatura
printf("\nAhora, cual es tu rango preferencia para estatura (en metros)?\n");
printf("Minimo 1.5 mts\nMaximo 1.93 mts\n0 si no importa");
printf("\nComencemos con la estatura minima: ");  
scanf("%f",&h1);
    if(h1!=0){
    printf("\nEstatura maxima?\n");
  	scanf("%f",&h2);}
	
	if(h1==0)
	h1=1.5,h2=1.97;



//Eleccion de preferencias musicales
  printf("\nMuy bien! Seleccione ahora el tipo de música que le agrade");
  printf("\n1) Corridos\n2) Electronica\n3) Pop\n4) Rock\n5) Regueton\n6) Metal\n7)Rap\n8)Kpop\n0)No es importante\n");

    int music[8]={0,0,0,0,0,0,0,0};
    char musique[8][20];
    int i=0,valor=0,total=8;

    scanf("%d",&music[0]);
//Aquí se checa si la respuesta no es 0 para preguntar más preferencias de la lista. Porque si no es importante
//desde el inicio, no hay necesidad de preguntar por más. Así que este condicional evita entrar en el loop de
//preguntar repetidamente
    if(music[0]!=10&&music[0]!=0){
      printf("Otro mas? (0 para no)\n");
      for(i=1;i<total;i++){
      scanf("%d",&music[i]);
      if(music[i]==0||music[i]==10)
      break; //Se termina el bucle gracias a este break
    }
  }
   //En este ciclo estamos convertiendo nuestras respuestas numéricas a un arreglo
  //de palabras que tomará el texto de la opción según el valor de la lista
  //La función strcpy sirve para asignar esta cadena de texto a una variable
for(i=0;i<8;i++){
	if(music[i]==1)
 	strcpy(musique[i],"Corridos");
 		else if(music[i]==2)
		strcpy(musique[i],"Electronica");
 			else if(music[i]==3)
 			strcpy(musique[i],"Pop");
 				else if(music[i]==4)
 				strcpy(musique[i],"Rock");
 					else if(music[i]==5)
 					strcpy(musique[i],"Regueton");
 						else if(music[i]==6)
 						strcpy(musique[i],"Metal");
 						 	else if(music[i]==7)
 							strcpy(musique[i],"Rap");
 							 	else if(music[i]==8)
 								strcpy(musique[i],"Kpop");
 				
}
 printf("\nEleccion:");
  for(int i=0;i<total;i++)
  printf("%s, ",musique[i]);


//Eleccion de pasatiempos
printf("Muy bien! Ahora, que pasatiempos son de tu preferencia?");
printf("\n1)Cocinar\n2)Videojuegos\n3)Leer\n4)Deporte\n5) Programar\n6)Dormir\n7)Caminar\n0)No es importante\n");

    int hobbies[7]={0,0,0,0,0,0,0};
    //Se tienen 8 posibles respuestas, pero siempre tendremos un arreglo que no llena los 8 espacios
    //asumiendo que no se repitan respuestas
    char pass[7][20];
    //De las 8 posibles respuestas se asignó el tamaño máximo de 20 porque el máximo es el de videojuegos
    //pero ya no quise contar las letras. Aparte, funciona de cualquier manera y no parece afectar
    //en el rendimiento
    
    //Son 2 arreglos. El primero para registrar las respuestas de manera numerica y la segunda
    //para convertir las respuestas numericas a respuestas de texto
    i=0,valor=0,total=7;

    scanf("%d",&hobbies[0]);
//Aquí se checa si la respuesta no es 0 para preguntar más preferencias de la lista. Porque si no es importante
//desde el inicio, no hay necesidad de preguntar por más. Así que este condicional evita entrar en el loop de
//preguntar repetidamente
    if(hobbies[0]!=8&&hobbies[0]!=0){
      printf("Otro mas? (0 para no)\n");
      for(i=1;i<total;i++){
      scanf("%d",&hobbies[i]);
      if(hobbies[i]==0||hobbies[i]==8)
      break; //Se termina el bucle gracias a este break al poner como respuesta 0
    }
  }
  //En este ciclo estamos convertiendo nuestras respuestas numéricas a un arreglo
  //de palabras que tomará el texto de la opción según el valor de la lista
  //La función strcpy sirve para asignar esta cadena de texto a una variable
  for(i = 0; i < 7; i++) {
    if(hobbies[i] == 1)
        strcpy(pass[i], "Cocinar");
    else if(hobbies[i] == 2)
        strcpy(pass[i], "Videojuegos");
    else if(hobbies[i] == 3)
        strcpy(pass[i], "Leer");
    else if(hobbies[i] == 4)
        strcpy(pass[i], "Deporte");
    else if(hobbies[i] == 5)
        strcpy(pass[i], "Programar");
    else if(hobbies[i] == 6)
        strcpy(pass[i], "Dormir");
    else if(hobbies[i] == 7)
        strcpy(pass[i], "Caminar");
}
printf("\nEleccion:");
  for(int i=0;i<total;i++)
  printf("%s, ",pass[i]);
 printf("\n\n"); 
	buscaTodos(Nombre,Edad,Estatura,Sexo,age1,age2,h1,h2,s,sex,Estudios,Musica,Pasatiempos,musique,music,hobbies,pass);
} 

/////////////////////////////////////
void buscaTodos(char Nombre [][15],int Edad[],float Estatura[],int Sexo[],int age1, int age2, float h1, float h2,int s,char sex[10],char Estudios [][28],char Musica [][20],char Pasatiempos [][12],char musique[8][20],int music[0],int hobbies[7],char pass[7][20])
{
  int i,contador=0,choice=0;
	bool Match=false;
//booleano tiene unicamente valor falso o verdadero
//se utilizará como una mauske-herramienta para más tarde
//Es para determinar si se logró un match o no. En caso de que no
//se lanza el mensaje apropiado
for (i=0;i<32;i++){
            if (Sexo[i] == s && Edad[i] >= age1 && Edad[i] <= age2 && Estatura[i] >= h1 && Estatura[i] <= h2){
    				if (music[0] != 0)
            {
                for (int j = 0; j < 8; j++)
                {
                    if (strcmp(Musica[i], musique[j]) == 0)
                    if (hobbies[0] != 0)
                    {
                for (int k = 0; k < 8; k++)
                {
                    if (strcmp(Pasatiempos[i], pass[k]) == 0)
                    {
                      Match = true;

                  	}
                  	
                  }
              }
              else
                    {
                         Match = true;
                  	}
                  	
                  }
              }
              else if (hobbies[0] != 0)
              {
                for (int k = 0; k < 8; k++)
                {
                    if (strcmp(Pasatiempos[i], pass[k]) == 0)
                    {
                        Match = true;
                  	}
                  	
                  }
              }
              else
                  	{
                                              Match = true;
                  	}
              }
}
if(Match=true)
printf("\nHiciste Match!!\n");
     for (i=0;i<32;i++){
            if (Sexo[i] == s && Edad[i] >= age1 && Edad[i] <= age2 && Estatura[i] >= h1 && Estatura[i] <= h2){
    				if (music[0] != 0)
            {
                for (int j = 0; j < 8; j++)
                {
                    if (strcmp(Musica[i], musique[j]) == 0)
                    if (hobbies[0] != 0)
                    {
                for (int k = 0; k < 8; k++)
                {
                    if (strcmp(Pasatiempos[i], pass[k]) == 0)
                    {
                        choice = 0;
                        //choice iba a ser utilizado para hacer un sistema para guardar los perfiles aceptados. 					Pero no he dormido en 4 dias
                        //Se dejó como una manera de interactuar con el usuario, aunque no se guarde nada
						Match = true;
                        printf("\n%s\nEdad:%d\nMide %0.2f\nCarrera:%s\nGustos musicales:%s\nPasatiempos:%s\n\n\n", Nombre[i], Edad[i], Estatura[i], Estudios[i], Musica[i], Pasatiempos[i]);
                        printf("1)Si\t2)Nah\n");
						scanf("%d",&choice);
                  	}
                  	
                  }
              }
              else
                    {
                        choice = 0;
                        //choice iba a ser utilizado para hacer un sistema para guardar los perfiles aceptados. 					Pero no he dormido en 4 dias
                        //Se dejó como una manera de interactuar con el usuario, aunque no se guarde nada
                        Match = true;
                        printf("\n%s\nEdad:%d\nMide %0.2f\nCarrera:%s\nGustos musicales:%s\nPasatiempos:%s\n\n\n", Nombre[i], Edad[i], Estatura[i], Estudios[i], Musica[i], Pasatiempos[i]);
                        printf("1)Si\t2)Nah\n");
						scanf("%d",&choice);
                  	}
                  	
                  }
              }
              else if (hobbies[0] != 0)
              {
                for (int k = 0; k < 8; k++)
                {
                    if (strcmp(Pasatiempos[i], pass[k]) == 0)
                    {
                        choice = 0;
                        //choice iba a ser utilizado para hacer un sistema para guardar los perfiles aceptados. 					Pero no he dormido en 4 dias
                        //Se dejó como una manera de interactuar con el usuario, aunque no se guarde nada
                        Match = true;
                        printf("\n%s\nEdad:%d\nMide %0.2f\nCarrera:%s\nGustos musicales:%s\nPasatiempos:%s\n\n\n", Nombre[i], Edad[i], Estatura[i], Estudios[i], Musica[i], Pasatiempos[i]);
                        printf("1)Si\t2)Nah\n");
						scanf("%d",&choice);
                  	}
                  	
                  }
              }
              else
                  	{
                        choice = 0;
                        //choice iba a ser utilizado para hacer un sistema para guardar los perfiles aceptados. 					Pero no he dormido en 4 dias
                        //Se dejó como una manera de interactuar con el usuario, aunque no se guarde nada
                        Match = true;
                        printf("\n%s\nEdad: %d\nMide %0.2f\nCarrera:%s\nGustos musicales:%s\nPasatiempos:%s\n\n\n", Nombre[i], Edad[i], Estatura[i], Estudios[i], Musica[i], Pasatiempos[i]);
                        printf("1)Si\t2)Nah\n");
						scanf("%d",&choice);
                  	}
              }
}
 if(Match==false)
	 printf("\nNo hiciste match :(\nEres bien exigente");
 }
