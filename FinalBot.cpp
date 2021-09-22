//Universidad Católica San Pablo
//curso: Ciencias de la Computación CCOMP2 -1
//Grupo:
//    - Alexander Rafael Murillo Castillo
//    - Jaime Mateo Gutierrez Muñoz
//    - Emmanuel Del Piero Martinez Salcedo
//Profesor:
//    - DSc. Manuel Eduardo Loaiza Fernández 
//Semestre 2021 - II
//Arequipa - Perú
//
//GITHUB: https://github.com/JaimeGutierrezM/Tres-en-Raya

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std; 


int main() { //Introducción de variables
  int game_turns = 0,turno_inicial_random, coord_bot = 0; 
  char x1(' '),x2(' '),x3(' '), x4(' '),x5(' '),x6(' '),x7(' '), x8(' '),x9(' '),letra(' '),numero(' '),simbolo_1,simbolo_2,p1[50],p2[50];
  bool player_1(true),game(true),turn(true),prioridad_bot(true),jugada_random(true);
  srand(time(0));
  std::cout << "\n\n       BIENVENIDO A TRES EN RAYA\n\n";

  //seleccion de nombre   """get solución"""""
  cout << "\nJugador, ingrese su nombre: ";
  cin.getline(p1,50);


  while (true) {   //loop para la seleccion de simbolos correctos
    cout << p1<< ", con que simbolo va jugar (X/O): ";
    cin >> simbolo_1;
    if (simbolo_1=='X'||simbolo_1=='x') {
      simbolo_1 = 'X'; // si se ingresa con x minúscula 
      simbolo_2 = 'O'; // si se escoge un símbolo entonces al siguiente jugador se ele asigna el que queda
      cout << "Bien, Bot jugará con "<< simbolo_2;
      break;

    } else {
      cout << "Por favor, seleccione el simbolo X o O\n";
    }
  }

  // selección random de quién hace la primera jugada   
  turno_inicial_random = rand()%2;
  if (turno_inicial_random == 0) {
      player_1 = true;
      cout << "\n Primera jugada la inicia " << p1 << endl; 
  } 
  else {
      player_1 = false;
      cout << "\n Primera jugada la inicia Bot "<< endl;
  }

  //loop del juego para imprimir el tablero e identificar las posibles ganadas por cada turno; y un loop dentro para el ingreso de coordenadas e identificar sus errores 
  cout << "\n\n          EMPECEMOS\n";
  while(game){ 
    //tablero
    std::cout << "\n\n           A   B   C\n";
    std::cout << "        1  "<<x1 <<" | "<< x2<<" | "<<x3<<"\n";
    std::cout << "           __|___|__\n";
    std::cout << "        2  "<<x4 <<" | "<< x5<<" | "<<x6<<"\n";
    std::cout << "           __|___|__\n";
    std::cout << "        3  "<<x7 <<" | "<< x8<<" | "<<x9<<"\n";

    //posibles jugadas a ganar
    if (x1==x2 && x2==x3)
    { // identifica el jugador ganador
      if (x1==simbolo_1) { 
      cout << "Felicidades: " << p1 << " ganaste!!!" <<"\n";
      break; // rompe el loop game
      } 
      else if (x1 == simbolo_2) {
      cout << "Felicidades: Bot ganaste!!!" <<"\n";
      break; // rompe el loop game
      }
    } 
    else if (x1==x4 && x4==x7)
    { // identifica el jugador ganador
      if (x1==simbolo_1) {
      cout << "Felicidades: " << p1 << " ganaste!!!" <<"\n";
      break;
      } 
      else if (x1 == simbolo_2) {
      cout << "Felicidades: Bot ganaste!!!" <<"\n";
      break;
      }
    } 
    else if (x1==x5 && x5==x9)
    { // identifica el jugador ganador
      if (x1==simbolo_1) {
      cout << "Felicidades: " << p1 << " ganaste!!!" <<"\n";
      break;
      } 
      else if (x1 == simbolo_2) {
      cout << "Felicidades: Bot ganaste!!!" <<"\n";
      break;
      }
    } 
    else if (x2==x5 && x5==x8)
    { // identifica el jugador ganador
      if (x2==simbolo_1) {
      cout << "Felicidades: " << p1 << " ganaste!!!" <<"\n";
      break;
      } 
      else if (x2 == simbolo_2) {
      cout << "Felicidades: Bot ganaste!!!" <<"\n";
      break;
      }
    } 
    else if (x3==x6 && x6==x9)
    { // identifica el jugador ganador
      if (x3==simbolo_1) {
      cout << "Felicidades: " << p1 << " ganaste!!!" <<"\n";
      break;
      } 
      else if (x3 == simbolo_2) {
      cout << "Felicidades: Bot ganaste!!!" <<"\n";
      break;
      }
    }
    else if (x3==x5 && x5==x7)
    { // identifica el jugador ganador
      if (x3==simbolo_1) {
      cout << "Felicidades: " << p1 << " ganaste!!!" <<"\n";
      break;
      } 
      else if (x3 == simbolo_2) {
      cout << "Felicidades: Bot ganaste!!!" <<"\n";
      break;
      }
    } 
    else if (x4==x5 && x5==x6)
    { // identifica el jugador ganador
      if (x4==simbolo_1) {
      cout << "Felicidades: " << p1 << " ganaste!!!" <<"\n";
      break;
      } 
      else if (x4 == simbolo_2) {
      cout << "Felicidades: Bot ganaste!!!" <<"\n";
      break;
      }
    } 
    else if (x7==x8 && x8==x9)
    { // identifica el jugador ganador
      if (x7==simbolo_1) {
      cout << "Felicidades: " << p1 << " ganaste!!!" <<"\n";
      break;
      } 
      else if (x7 == simbolo_2) {
      cout << "Felicidades: Bot ganaste!!!" <<"\n";
      break;
      }
    }
    // cuenta los turnos y se terminan al llenar las 9 casillas 
    if (game_turns != 9)
    {
      game_turns += 1;
    } 
    else {
      cout << "EMPATE";
      break;
    }


    // loop para el ingreso de coordenadas según los turnos  
    turn = true;    
    while(turn){
      if (player_1 == true) { //coordenadas de numeros según el turno de jugador 
        std::cout <<"\n"<<p1 <<", ingrese el número de coordenada: ";
        std::cin >> numero;  
        std::cout << "\nIngrese la letra de coordenada: "; //ingreso de la coordenada de letra 
        std::cin >> letra;
        //identificar la coordenada por letra y número para cambiar la variable y se muestre en el tablero
        switch (numero) { 
            case '1': //case para el numero de coordenada
                if (letra =='A'||letra=='a') { //identificar la letra de coordenada
                    if (x1 != ' ') {  //identificar si la coordenada ya esta ocupada.
                    std::cout << "\n\nEsta casilla ya esta ocupada\n\n";
                    } 
                    else { //Cambia la variable según la coordenada y el jugador
                    x1 = simbolo_1;
                    player_1 = false;
                    turn = false;
                    }
                } 
                else if (letra =='B'||letra=='b'){ //identificar la letra de coordenada
                    if (x2 != ' ') {
                    std::cout << "\n\nEsta casilla ya esta ocupada\n\n";
                    } 
                    else { //Cambia la variable según la coordenada y el jugador
                    x2 = simbolo_1;
                    player_1 = false;
                    turn = false;
                    }
                } 
                else if (letra =='C'||letra=='c'){ //identificar la letra de coordenada
                    if (x3 != ' ') {
                    std::cout << "\n\nEsta casilla ya esta ocupada\n\n";
                    } 
                    else { //Cambia la variable según la coordenada y el jugador
                    x3 = simbolo_1;
                    player_1 = false;
                    turn = false;
                    }
                } 
                else { // si el número  es correcto pero no la letra
                    std::cout << "\n\ningrese una letra correcta\n\n";
                }
                break;
            case '2':
                if (letra =='A'||letra=='a') { //identificar la letra de coordenada
                    if (x4 != ' ') {
                    std::cout << "\n\nEsta casilla ya esta ocupada\n\n";
                    } 
                    else { //Cambia la variable según la coordenada y el jugador
                    x4 = simbolo_1;
                    player_1 = false;
                    turn = false;
                    }
                } 
                else if (letra =='B'||letra=='b'){ //identificar la letra de coordenada
                    if (x5 != ' ') {
                    std::cout << "\n\nEsta casilla ya esta ocupada\n\n";
                    } 
                    else { //Cambia la variable según la coordenada y el jugador
                    x5 = simbolo_1;
                    player_1 = false;
                    turn = false;
                    }
                } 
                else if (letra =='C'||letra=='c'){ //identificar la letra de coordenada
                    if (x6 != ' ') {
                    std::cout << "\n\nEsta casilla ya esta ocupada\n\n";
                    } 
                    else { //Cambia la variable según la coordenada y el jugador
                    x6 = simbolo_1;
                    player_1 = false;
                    turn = false;
                    }
                } 
                else { // si el número  es correcto pero no la letra
                    std::cout << "\n\ningrese una letra correcta\n\n";
                }
                break;
            case '3':
                if (letra =='A'||letra=='a') { //identificar la letra de coordenada
                    if (x7 != ' ') {
                    std::cout << "\n\nEsta casilla ya esta ocupada\n\n";
                    } 
                    else { //Cambia la variable según la coordenada y el jugador
                    x7 = simbolo_1;
                    player_1 = false;
                    turn = false;
                    }
                } 
                else if (letra =='B'||letra=='b'){ //identificar la letra de coordenada
                    if (x8 != ' ') {
                    std::cout << "\n\nEsta casilla ya esta ocupada\n\n";
                    } 
                    else { //Cambia la variable según la coordenada y el jugador
                    x8 = simbolo_1;
                    player_1 = false;
                    turn = false;
                    }
                } 
                else if (letra =='C'||letra=='c'){ //identificar la letra de coordenada
                    if (x9 != ' ') {
                    std::cout << "\n\nEsta casilla ya esta ocupada\n\n";
                    } 
                    else { //Cambia la variable según la coordenada y el jugador
                    x9 = simbolo_1;
                    player_1 = false;
                    turn = false;
                    }
                } 
                else { // si el número  es correcto pero no la letra
                    std::cout << "\n\ningrese una letra correcta\n\n";
                }
                break;
            default: // si la letra como en número de coordenada ingresado es incorrecto
                if (letra =='A'||letra=='a') {
                    std::cout << "\n\ningrese un número de coordenada correcto\n\n";
                } 
                else if (letra =='B'||letra=='b'){
                    std::cout << "\n\ningrese un número de coordenada correcto\n\n";
                } 
                else if (letra =='C'||letra=='c'){
                    std::cout << "\n\ningrese un número de coordenada correcto\n\n";
                } 
                else {
                    std::cout << "\n\ningrese la letra y el número de coordenada correctos\n\n";
                }
        }
      } 
      else {
            jugada_random = true;
            prioridad_bot = false;
            if (x1==x2 && x3==' ' && x1!=' ' && prioridad_bot==false) {
                if (x3 == simbolo_1) {prioridad_bot=false;} 
                else {prioridad_bot=true;}
                numero='1'; letra='C'; 
                jugada_random = false;
            } 
            if (x1==x3 && x2==' ' && x1!=' ' && prioridad_bot==false) {
                if (x1 == simbolo_1) {prioridad_bot=false;} 
                else {prioridad_bot=true;}
                numero='1';letra='B'; 
                jugada_random = false;
            } 
            if (x2==x3 && x1==' ' && x2!=' ' && prioridad_bot==false) {
                if (x2 == simbolo_1) {prioridad_bot=false;} 
                else {prioridad_bot=true;}
                numero='1';letra='A'; 
                jugada_random = false;
            } 

            if (x4==x5 && x6==' ' && x4!=' ' && prioridad_bot==false) {
                if (x4 == simbolo_1) {prioridad_bot=false;} 
                else {prioridad_bot=true;}
                numero='2';letra='C'; 
                jugada_random = false;
            } 
            if (x4==x6 && x5==' ' && x4!=' ' && prioridad_bot==false) {
                if (x4 == simbolo_1) {prioridad_bot=false;} 
                else {prioridad_bot=true;}
                numero='2';letra='B'; 
                jugada_random = false;
            } 
            if (x5==x6 && x4==' ' && x5!= ' ' && prioridad_bot==false) {
                if (x5 == simbolo_1) {prioridad_bot=false;} 
                else {prioridad_bot=true;}
                numero='2';letra='A'; 
                jugada_random = false;
            } 

            if (x7==x8 && x9==' ' && x7!= ' ' && prioridad_bot==false) {
                if (x7 == simbolo_1) {prioridad_bot=false;} 
                else {prioridad_bot=true;}
                numero='3';letra='C'; 
                jugada_random = false;
            } 
            if (x7==x9 && x8==' ' && x7!=' ' && prioridad_bot==false) {
                if (x7 == simbolo_1) {prioridad_bot=false;} 
                else {prioridad_bot=true;}
                numero='3';letra='B'; 
                jugada_random = false;
            } 
            if (x8==x9 && x7==' ' && x8!=' ' && prioridad_bot==false) {
                if (x8 == simbolo_1) {prioridad_bot=false;} 
                else {prioridad_bot=true;}
                numero='3';letra='A';
                jugada_random = false;
            } 

            if (x1==x4 && x7==' ' && x1!=' ' && prioridad_bot==false) {
                if (x1 == simbolo_1) {prioridad_bot=false;} 
                else {prioridad_bot=true;}
                numero='3';letra='A';
                jugada_random = false;
            } 
            if (x1==x7 && x4==' ' && x1!=' ' && prioridad_bot==false) {
                cout << "asdasd" << endl;
                if (x1 == simbolo_1) {prioridad_bot=false;} 
                else {prioridad_bot=true;}
                numero='2';letra='A'; 
                jugada_random = false;
            } 
            if (x4==x7 && x1==' ' && x4!=' ' && prioridad_bot==false) {
                if (x4 == simbolo_1) {prioridad_bot=false;} 
                else {prioridad_bot=true;}
                numero='1';letra='A'; 
                jugada_random = false;
            } 

            if (x2==x5 && x8==' ' && x2!=' ' && prioridad_bot==false) {
                if (x2 == simbolo_1) {prioridad_bot=false;} 
                else {prioridad_bot=true;}
                numero='3';letra='B'; 
                jugada_random = false;
            } 
            if (x2==x8 && x5==' ' && x2!=' ' && prioridad_bot==false) {
                if (x2 == simbolo_1) {prioridad_bot=false;} 
                else {prioridad_bot=true;}
                numero='2';letra='B'; 
                jugada_random = false;
            } 
            if (x5==x8 && x2==' ' && x5!=' ' && prioridad_bot==false) {
                if (x5 == simbolo_1) {prioridad_bot=false;} 
                else {prioridad_bot=true;}
                numero='1';letra='B'; 
                jugada_random = false;
            } 
                
            if (x3==x6 && x9==' ' && x3!=' ' && prioridad_bot==false) {
                if (x3 == simbolo_1) {prioridad_bot=false;} 
                else {prioridad_bot=true;}
                numero='3';letra='C';
                jugada_random = false;
            } 
            if (x3==x9 && x6==' ' && x3!=' ' && prioridad_bot==false) {
                if (x3 == simbolo_1) {prioridad_bot=false;} 
                else {prioridad_bot=true;}
                numero='2';letra='C'; 
                jugada_random = false;
            } 
            if (x6==x9 && x3==' ' && x6!=' ' && prioridad_bot==false) {
                if (x6 == simbolo_1) {prioridad_bot=false;} 
                else {prioridad_bot=true;}
                numero='1';letra='C'; 
                jugada_random = false;
            } 

            if (x1==x5 && x9==' ' && x1!=' ' && prioridad_bot==false) {
                if (x1 == simbolo_1) {prioridad_bot=false;} 
                else {prioridad_bot=true;}
                numero='3';letra='C'; 
                jugada_random = false;
            } 
            if (x1==x9 && x5==' ' && x1!=' ' && prioridad_bot==false) {
                if (x1 == simbolo_1) {prioridad_bot=false;} 
                else {prioridad_bot=true;}
                numero='2';letra='B'; 
                jugada_random = false;
            } 
            if (x5==x9 && x1==' ' && x5!=' ' && prioridad_bot==false) {
                if (x5 == simbolo_1) {prioridad_bot=false;} 
                else {prioridad_bot=true;}
                numero='1';letra='A';
                jugada_random = false;
            } 

            if (x3==x5 && x7==' ' && x3!=' ' && prioridad_bot==false) {
                if (x3 == simbolo_1) {prioridad_bot=false;} 
                else {prioridad_bot=true;}
                numero='3';letra='A';
                jugada_random = false;
            } 
            if (x3==x7 && x5==' ' && x3!=' ' && prioridad_bot==false) {
                if (x3 == simbolo_1) {prioridad_bot=false;} 
                else {prioridad_bot=true;}
                numero='2';letra='B'; 
                jugada_random = false;
            } 
            if (x5==x7 && x3==' ' && x5!=' ' && prioridad_bot==false) {
                if (x5 == simbolo_1) {prioridad_bot=false;} 
                else {prioridad_bot=true;}
                numero='1';letra='C'; 
                jugada_random = false;
            } 

            while (jugada_random) { //loop para jugadas random de la máquina
                coord_bot = 1 + (rand()%9);
                if (coord_bot==1 && x1==' ') {x1=simbolo_2; prioridad_bot=false; break;}
                else if (coord_bot==2 && x2==' ') {x2=simbolo_2; prioridad_bot=false; break;}
                else if (coord_bot==3 && x3==' ') {x3=simbolo_2; prioridad_bot=false; break;}
                else if (coord_bot==4 && x4==' ') {x4=simbolo_2; prioridad_bot=false; break;}
                else if (coord_bot==5 && x5==' ') {x5=simbolo_2; prioridad_bot=false; break;}
                else if (coord_bot==6 && x6==' ') {x6=simbolo_2; prioridad_bot=false; break;}
                else if (coord_bot==7 && x7==' ') {x7=simbolo_2; prioridad_bot=false; break;}
                else if (coord_bot==8 && x8==' ') {x8=simbolo_2; prioridad_bot=false; break;}
                else if (coord_bot==9 && x9==' ') {x9=simbolo_2; prioridad_bot=false; break;}
            }
        
            
            // comprobar la jugada del con prioridad o sin prioridad
            if (jugada_random==false) {
                if (numero=='1') {
                    if (letra=='A') {x1=simbolo_2;}
                    else if (letra=='B') {x2=simbolo_2;}
                    else if (letra=='C') {x3=simbolo_2;}
                }
                else if (numero=='2') {
                    if (letra=='A') {x4=simbolo_2;cout << "true" << endl;}
                    else if (letra=='B') {x5=simbolo_2;}
                    else if (letra=='C') {x6=simbolo_2;}
                }
                else if (numero=='3') {
                    if (letra=='A') {x7=simbolo_2;}
                    else if (letra=='B') {x8=simbolo_2;}
                    else if (letra=='C') {x9=simbolo_2;}
                }
            }

            turn=false; player_1=true;
            std::cout <<"\nBot hizo su jugada "<<endl;
        
      }
        
    }
  
  }
}