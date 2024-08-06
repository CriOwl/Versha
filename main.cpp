#include <iostream>
#include <string>
#include <windows.h>
#include <cctype>
#include <cstdlib>
#include "colors.hpp"
#include <limits>

#include <cstdlib>
#include <fstream>
using namespace std;

//---------------------------------------------------------------------------------------------
//Funciones de los logos del juego
void Logo1(){
    cout<<"\n"
        <<"\t\t\t ....##.. \n"
        <<"\t\t\t ..####.. \n"
        <<"\t\t\t ....##.. \n"
        <<"\t\t\t ....##.. \n"
        <<"\t\t\t ....##.. \n"
        <<"\t\t\t ....##.. \n"
        <<"\t\t\t ..###### \n"
    <<"\n ";

}

void Logo2(){
    cout<<"\n"
        <<"\t\t\t ..#######. \n"
        <<"\t\t\t .##.....## \n"
        <<"\t\t\t ........## \n"
        <<"\t\t\t ..#######. \n"
        <<"\t\t\t .##....... \n"
        <<"\t\t\t .##....... \n"
        <<"\t\t\t .######### \n"
    <<"\n";
}

void Logo3(){
    cout<<"\n "
        <<"\t\t\t ..#######. \n "
        <<"\t\t\t .##.....## \n "
        <<"\t\t\t ........## \n "
        <<"\t\t\t ..#######. \n "
        <<"\t\t\t ........## \n "
        <<"\t\t\t .##.....## \n "
        <<"\t\t\t ..#######. \n "
    <<"\n";
}

void LogoGo(){
    cout<<"\n"
        <<"\t\t\t ..######....#######..#### \n"
        <<"\t\t\t .##....##..##.....##.#### \n"
        <<"\t\t\t .##........##.....##.#### \n"
        <<"\t\t\t .##...####.##.....##..##. \n"
        <<"\t\t\t .##....##..##.....##..... \n"
        <<"\t\t\t .##....##..##.....##.#### \n"
        <<"\t\t\t ..######....#######..#### \n"
    <<"\n";
}

void Personaje(){
cout<<"\n"
    <<"\t\t\t                                     \n"
    <<"\t\t\t             .:;xXXXXx+.             \n"
    <<"\t\t\t          .:$$$$$$$$$$x.             \n"
    <<"\t\t\t        .;$$$$$$$$$$$$$$$;.          \n"
    <<"\t\t\t       .x$$$$$$$$$$$$$$$$$x.         \n"
    <<"\t\t\t      .;$$$$$$$$$$$$$$$$$$$.         \n"
    <<"\t\t\t      .+$$;:::;;;;;;::::;$&:.        \n"
    <<"\t\t\t      .x$+:::::::::::::::X&:.        \n"
    <<"\t\t\t      .x$+:::::::::::::::$$.         \n"
    <<"\t\t\t      .+X::+XXX$:::$XXX+:+$.         \n"
    <<"\t\t\t      .;X::::$;:::::+X::::$.         \n"
    <<"\t\t\t      .:+:::::::::::::::::;:.        \n"
    <<"\t\t\t      .:;+:::::::::::::::X:.         \n"
    <<"\t\t\t        .$X;+xXx;:;X$X++$x.          \n"
    <<"\t\t\t        .x$$$$x.....x$$$$:.          \n"
    <<"\t\t\t        .:$$$$$$$X$$$$$$X.           \n"
    <<"\t\t\t         .:$$$$$$$$$$$$x.            \n"
    <<"\t\t\t            .x$$$$$$$;.              \n"
    <<"\t\t\t           .:+x:::::x+:.             \n"
    <<"\t\t\t        .:+xxx:.....;xxx+:.          \n"
    <<"\t\t\t    .;xXXXxxxx:.....:xxxxXXXxx+;.    \n"
    <<"\t\t\t  .;XXxXXXXXXX:... .;XxXXXXXXXXXx.   \n"
    <<"\t\t\t  .XxXXXXXXXXX:..  .;XXXXXXXXXXXX+.  \n"
    <<"\t\t\t .;XXXXXXXXXXX:..  .;XXXXXXXXXXXXx.  \n"
    <<"\t\t\t .xXXXXXXXXXXX:... .;XXXXXXXXXXXXX;. \n"
    <<"\t\t\t.:XXXXXXXXXXXX:.....;XXXXXXXXXxXXXx..\n"
    <<"\t\t\t.+XXXXXXXXXxxx:.....;XXXXXXXxxXXXXX;.\n"
    <<"\n";

}

void LogoPuntaje(){
cout<<"\n"
    <<"\t\t.########..##.....##.##....##.########.##.....##.......##.########..######. \n"
    <<"\t\t.##.....##.##.....##.###...##....##....##.....##.......##.##.......##....#. \n"
    <<"\t\t.##.....##.##.....##.####..##....##....##.....##.......##.##.......##...... \n"
    <<"\t\t.########..##.....##.##.##.##....##....##.....##.......##.######....######. \n"
    <<"\t\t.##........##.....##.##..####....##....##.....##.##....##.##.............#. \n"
    <<"\t\t.##........##.....##.##...###....##....##.....##.##....##.##.......##....#. \n"
    <<"\t\t.##.........#######..##....##....##.....#######...######..########..######. \n"
    <<"\n";
}


void logoQuien(){
cout<<"  \n"
    <<"\t\t      ..#######..##.....##.####.########.##....##       \n"
    <<"\t\t      .##.....##.##.....##..##..##.......###...##       \n"
    <<"\t\t      .##.....##.##.....##..##..##.......####..##       \n"
    <<"\t\t      .##.....##.##.....##..##..######...##.##.##       \n"
    <<"\t\t      .##..##.##.##.....##..##..##.......##..####       \n"
    <<"\t\t      .##....##..##.....##..##..##.......##...###       \n"
    <<"\t\t      ..#####.##..#######..####.########.##....##       \n"
    <<"  \n";
}

void logoQuiere(){
cout<<"  \n"
    <<"\t\t      ..#######..##.....##.####.########.########..########       \n"
    <<"\t\t      .##.....##.##.....##..##..##.......##.....##.##......       \n"
    <<"\t\t      .##.....##.##.....##..##..##.......##.....##.##......       \n"
    <<"\t\t      .##.....##.##.....##..##..######...########..######..       \n"
    <<"\t\t      .##..##.##.##.....##..##..##.......##...##...##......       \n"
    <<"\t\t      .##....##..##.....##..##..##.......##....##..##......       \n"
    <<"\t\t      ..#####.##..#######..####.########.##.....##.########       \n"
    <<"  \n";
}

void logoSer(){
cout<<"  \n"
    <<"\t\t\t      ..######..########.########.     \n"
    <<"\t\t\t      .##....##.##.......##.....##     \n"
    <<"\t\t\t      .##.......##.......##.....##     \n"
    <<"\t\t\t      ..######..######...########.     \n"
    <<"\t\t\t      .......##.##.......##...##..     \n"
    <<"\t\t\t      .##....##.##.......##....##.     \n"
    <<"\t\t\t      ..######..########.##.....##     \n"
    <<"  \n";
}

void logoMillonario(){
cout<<" \n"
    <<"\t .##.....##.####.##.......##........#######..##....##....###....########..####..#######...#######. \n"
    <<"\t .###...###..##..##.......##.......##.....##.###...##...##.##...##.....##..##..##.....##.##.....## \n"
    <<"\t .####.####..##..##.......##.......##.....##.####..##..##...##..##.....##..##..##.....##.......##. \n"
    <<"\t .##.###.##..##..##.......##.......##.....##.##.##.##.##.....##.########...##..##.....##.....###.. \n"
    <<"\t .##.....##..##..##.......##.......##.....##.##..####.#########.##...##....##..##.....##....##.... \n"
    <<"\t .##.....##..##..##.......##.......##.....##.##...###.##.....##.##....##...##..##.....##.......... \n"
    <<"\t .##.....##.####.########.########..#######..##....##.##.....##.##.....##.####..#######.....##.... \n"
    <<"  \n";
}


void LogoPrincipal(){

    // Códigos de escape ANSI para colores
    const string RESET = "\033[0m";
    const string LINE_COLOR = "\033[0;33m"; // Amarillo


    cout<<"\033[0;32m"
    <<" #################################################################################################### \n"
    <<" #################################################+++################################################ \n"
    <<" #####################################+++++++++++++--+++++++++++++################################### \n"
    <<" #########++################+++++++++++--.---++---....--+++---.--+++++++++++#################+####### \n"
    <<" ########-.-##############+++----------......----......--+-.....-+++++-----+++##############+.-###### \n"
    <<" ########-..-############+++--.....---+-....------....------...--++--.....--+++############-.--###### \n"
    <<" #######--+...-+##+++++++--+++-.....-----+++#####+....+#####+++-----.....-++++++++++++###-.---+-##### \n"
    <<" #######+..+-....++++-....---+++----+############+....+############+---++++--.....-++++..---#-.-##### \n"
    <<" #######-+-..-#+----.--......---+#########+--..............--+#########+---......--..---+#+..-+-##### \n"
    <<" #######+..-+-..-++++---...--+##########-........-....-........-##########+---..---++++-..-+-..+##### \n"
    <<" #######+-++..-+++----+#++--+--...-+###-......-###...-###+-....-####+-...--+--++#+-..-+++-.--+-+##### \n"
    <<" #########-----+#++--+++#++.---++++-.-#-.......+##...-############+..+#++--..-+#++---++#+-----+###### \n"
    <<" #########+--+++++++++++++++-----++---##+............-+###########+--++--...-++++++++-++++++-+####### \n"
    <<" ############+----++++++---++..--+++--+####+-.......-------.-+####--+#+-...-#+---+++++-----+######### \n"
    <<" ############+---+++++++----+#+---+++#############----.----------###++--.-##+----++++++++-+########## \n"
    <<" ############+++#+-----+++++++++##++++############----###+--------++++###++++++++++---+#+++########## \n"
    <<" ##########++++---.....---++#+-+++++++-------#####----####+----+--++#++++-+#+++--......--++++######## \n"
    <<" #########+++----.....--++++++++++++##---+-+---###--++##+--+++++-+##++++++++#+++--.....----+++####### \n"
    <<" ############+++++++--....--+###########+--++++++++++++++++++-++###########++-.....-+++++++########## \n"
    <<" ###############+++--.....--+--+#############+----++++---++#############++-++-......-++++############ \n"
    <<" ##############+++++--++--.....---++##############-+++##############++---.....--+--++++++############ \n"
    <<" ###################++++--.....--------++++#######++++#########++--------......--+++################# \n"
    <<" ####################+++-++++++-......-++--------+++++++++-----++-......-++++++++++################## \n"
    <<" ##########################++++--..--+--......-+--....--+-......--+--...-+++######################### \n"
    <<" ############################++++++++++--...--++--....--++--...--++++++++++########################## \n"
    <<" #####################################+++-++++++++----++++++++-+++################################### \n"
    <<" #################################################++++############################################### \n"
    <<" #################################################################################################### \n"
    <<"\033[0m ";

    Sleep(3000);
    system("cls");
    cout<<LINE_COLOR;
    logoQuien();
    Sleep(700);
    system("cls");
    logoQuiere();
    Sleep(700);
    system("cls");
    logoSer();
    Sleep(700);
    system("cls");
    logoMillonario();
    cout<<RESET<<endl;
    Sleep(700);
    system("cls");
}

void LogoMenu(){
    // Códigos de escape ANSI para colores
    const string RESET = "\033[0m";
    const string LINE_COLOR = "\033[0;33m"; // Amarillo
    cout<<LINE_COLOR<<"\n"
        <<"\t\t .##.....##.########.##....##.##.....## \n"
        <<"\t\t .###...###.##.......###...##.##.....## \n"
        <<"\t\t .####.####.##.......####..##.##.....## \n"
        <<"\t\t .##.###.##.######...##.##.##.##.....## \n"
        <<"\t\t .##.....##.##.......##..####.##.....## \n"
        <<"\t\t .##.....##.##.......##...###.##.....## \n"
        <<"\t\t .##.....##.########.##....##..#######. \n"
        <<RESET<<"\n";
}

void LogoSalir(){
cout<<" \n"
    <<"\t\t..######.....###....##.......####.########.##....##.########...#######. \n"
    <<"\t\t.##....##...##.##...##........##..##.......###...##.##.....##.##.....## \n"
    <<"\t\t.##........##...##..##........##..##.......####..##.##.....##.##.....## \n"
    <<"\t\t..######..##.....##.##........##..######...##.##.##.##.....##.##.....## \n"
    <<"\t\t.......##.#########.##........##..##.......##..####.##.....##.##.....## \n"
    <<"\t\t.##....##.##.....##.##........##..##.......##...###.##.....##.##.....## \n"
    <<"\t\t..######..##.....##.########.####.########.##....##.########...#######. \n"
    <<"\n";
}

void LogoCreditos(){
    cout<<"\t..######..########..########.########..####.########..#######...######. \n"
        <<"\t.##....##.##.....##.##.......##.....##..##.....##....##.....##.##....## \n"
        <<"\t.##.......##.....##.##.......##.....##..##.....##....##.....##.##...... \n"
        <<"\t.##.......########..######...##.....##..##.....##....##.....##..######. \n"
        <<"\t.##.......##...##...##.......##.....##..##.....##....##.....##.......## \n"
        <<"\t.##....##.##....##..##.......##.....##..##.....##....##.....##.##....## \n"
        <<"\t..######..##.....##.########.########..####....##.....#######...######. ";
    cout<<" "<<endl;


}

//Funciones de animaciones
void AnimacionCreditos(){
    // Códigos de escape ANSI para colores
    const string RESET = "\033[0m";
    const string LINE_COLOR = "\033[0;33m"; // Amarillo

    //Simula un parpadeo
    for(int i = 0; i<=5; i++){
        system("cls");
        cout<<LINE_COLOR;
        LogoCreditos();
        cout<<RESET;
        Sleep(700);
    }
}

void AnimacionSalir(){
    // Códigos de escape ANSI para colores
    const string RESET = "\033[0m";
    const string LINE_COLOR = "\033[0;31m"; // Amarillo

    //Simula un parpadeo
    for(int i = 0; i<=5; i++){
        system("cls");
        cout<<LINE_COLOR;
        LogoSalir();
        cout<<RESET;
        Sleep(700);
    }
}

void AnimacionIniciarJuego(){
    // Códigos de escape ANSI para colores
    const string RESET = "\033[0m";
    const string LINE_COLOR = "\033[0;33m"; // Amarillo
    cout<<"\n"<<endl;
    system("cls");
    cout<<LINE_COLOR;
    Logo3();
    Sleep(700);
    system("cls");
    Logo2();
    Sleep(700);
    system("cls");
    Logo1();
    Sleep(700);
    system("cls");
    LogoGo();
    Sleep(700);
    system("cls");
    cout<<RESET;
}

void AnimacionPuntaje(){
    // Códigos de escape ANSI para colores
    const string RESET = "\033[0m";
    const string LINE_COLOR = "\033[0;33m"; // Amarillo

    system("cls");
    cout<<LINE_COLOR;
    LogoPuntaje();
    Sleep(700);
    system("cls");
    LogoPuntaje();
    Sleep(700);
    system("cls");
    LogoPuntaje();
    Sleep(700);
    system("cls");
    LogoPuntaje();
    Sleep(700);
    system("cls");
    cout<<RESET;

    system("pause");
    system("cls");
    menu();
}


//Funcion mostrar creditos
void MostrarCreditos(){

    // Códigos de escape ANSI para colores
    const string RESET = "\033[0m";
    const string LINE_COLOR = "\033[0;33m"; // Amarillo

    AnimacionCreditos();
    cout<<"\n"<<endl;
    cout<<LINE_COLOR<<"\t------------------------------------------------------------------ "<<RESET<<endl;
    cout<<"\t|                   Cristhian Carrillo                           |" <<endl;
    cout<<LINE_COLOR<<"\t------------------------------------------------------------------ "<<RESET<<endl;
    cout<<"\t|                      Joel Velez                                |"<<endl;
    cout<<LINE_COLOR<<"\t------------------------------------------------------------------ \n"<<RESET<<endl;

    system("pause");
    system("cls");
    menu();
}


void MostrarPuntaje(){

    // Códigos de escape ANSI para colores
    const string RESET = "\033[0m";
    const string LINE_COLOR = "\033[0;33m"; // Amarillo

    AnimacionPuntaje();
    cout<<"\n"<<endl;
    cout<<LINE_COLOR<<"\t------------------------------------------------------------------ "<<RESET<<endl;
    cout<<"\t|                   Cristhian Carrillo                           |" <<endl;
    cout<<LINE_COLOR<<"\t------------------------------------------------------------------ "<<RESET<<endl;
    cout<<"\t|                      Joel Velez                                |"<<endl;
    cout<<LINE_COLOR<<"\t------------------------------------------------------------------ \n"<<RESET<<endl;

    system("pause");
    system("cls");
    menu();

}


//Funcion salir del juego
void SalirJuego(){
    AnimacionSalir();
    cout<<"\t\t Gracias por jugar"<<endl;
    Sleep(2000);
    exit(1);
}

//Funcion de inicizalizar el juego
void InicarJuego(){
    system("cls");
    AnimacionIniciarJuego();
    Personaje();

}

//----------------------------------------------------------------------------------------------
struct player {
    string nombre_jugador = "Versha";
    int score = 0;
    int id_player = 0;
    int vidas = 2;
};

struct questions {
    string preguntas;
    string opciones[4];
    string opcion_correcta = "a";
};

player *jugadores = new player[25];
questions *preguntas_juego = new questions[15];

void Registro_datos(int id) {
    cout << "Ingreso del apodo del jugador " << id + 1 << ": ";
    cin >> jugadores[id].nombre_jugador;
    jugadores[id].id_player = id;
}

void juego(int id_player) {
}

void insercion_datos(int casos, int id_) {
    switch (casos) {
        case 1: {
            ifstream preguntas("banco.txt");
            for (int i = 0; i < 15; i++) {
                getline(preguntas, preguntas_juego[i].preguntas);
                for (int j = 0; j < 4; j++) {
                    getline(preguntas, preguntas_juego[i].opciones[j]);
                }
            }
            preguntas.close();
            break;
        }
        case 2: {
            ifstream opcionc("opciones.txt");
            for (int i = 0; i < 15; i++) {
                getline(opcionc, preguntas_juego[i].opcion_correcta);
            }
            opcionc.close();
        }
        case 3: {
            ofstream puntuaciones_G("tabla_Pos.txt");
            puntuaciones_G << "Jugador: " << jugadores[id_].nombre_jugador << "  Puntuacion: " << jugadores[id_].score;
        }
    }
}

void partida(int id_p) {
    int i;
    string opcion;
    while (jugadores[id_p].vidas > 0 || i == 15) {
        cout << "Puntuacion: " << jugadores[id_p].score << "               " << "Vidas: " << jugadores[id_p].vidas <<
                endl;
        cout << preguntas_juego[i].preguntas << endl;
        for (int j = 0; j < 4; j++) {
            cout << preguntas_juego[i].opciones[j] << endl;
        }
        cout << "\nEscoga la opcion correcta";
        cin >> opcion;
        if (opcion == preguntas_juego[i].opcion_correcta) {
            jugadores[id_p].score = jugadores[id_p].score + 1000;
        } else {
            jugadores[id_p].vidas = jugadores[id_p].vidas - 1;
        }
        cout << "La opcion correcta...";
        cout << preguntas_juego[i].opcion_correcta << endl;
        i = i + 1;
    }
}
int comodines(int tipo,int pregunta,int id_) {
    int opcion_random;
    string opcion;
    string opcion_co=preguntas_juego[pregunta].opcion_correcta;
    switch (tipo) {
        case 1: {//Llamada al publico
            cout<<"LLamando a un experto ..."<<endl;
            cout<<"Yo creo que es .."<<preguntas_juego[pregunta].opcion_correcta;
        }
        case 2: {
            //Graficos en ascii con casos
            switch (opcion_co) {
                case "a": {

                }
                case "b": {

                }
                case "c": {

                }
                case "d": {

                }
            }
        }
        case 3: {//50 50
            cout << preguntas_juego[pregunta].preguntas << endl;
            switch (preguntas_juego[pregunta].opcion_correcta) {
                case 'a': {
                    cout << preguntas_juego[pregunta].opciones[0] << endl;
                    do{opcion_random=rand()%4;}while (opcion_random==0);
                    cout << preguntas_juego[pregunta].opciones[opcion_random] << endl;
                    break;
                }
                case 'b': {
                    do{opcion_random=rand()%4;}while (opcion_random==1);
                    cout << preguntas_juego[pregunta].opciones[1] << endl;
                    break;
                }
                case 'c': {
                    do{opcion_random=rand()%4;}while (opcion_random==2);
                    cout << preguntas_juego[pregunta].opciones[2] << endl;
                    break;
                }
                case 'd': {
                    do{opcion_random=rand()%4;}while (opcion_random==3);
                    cout << preguntas_juego[pregunta].opciones[3] << endl;
                    break;
                }
            }
            cout << "\nEscoga la opcion correcta";
            cin >> opcion;
            if (opcion == preguntas_juego[pregunta].opcion_correcta) {
                jugadores[id_].score = jugadores[id_].score + 1000;
            } else {
                jugadores[id_].vidas = jugadores[id_].vidas - 1;
            }
            cout << "La opcion correcta...";
            cout << preguntas_juego[pregunta].opcion_correcta << endl;
            return pregunta+1;
        }
    }
}

void menu() {
    char option;
    int id = 0;
    //poner acento a la palabra
    char wordo = 162;
    char worde = 130;
    char worda = 160;
    char wordu = 163;
    
    do {
        system("cls");
        LogoMenu();
        cout<<"\t------------------------------------------------------------------ "<<endl;
        cout<<"\t|               1.- Nueva partida                                | "<<endl;
        cout<<"\t|               2.- Cr"<<worde<<"ditos                                     | "<<endl;
        cout<<"\t|               3.- Puntajes                                               | "<<endl;
        cout<<"\t|               4.- Salir                                        | "<<endl;
        cout<<"\t------------------------------------------------------------------ "<<endl;
        cout<<"\t------------------------------------------------------------------ "<<endl;
        cout<<"\t Ingrese opci"<<wordo<<"n: ",cin>>opcion;
        
        switch (option) {
            case 1: {
                Registro_datos(id);
                partida(id);
                id = +0;
                break;
            }
            case 2: {
                system("cls");
                MostrarCreditos();
                break;
            }
            case 3: {
                
                break;
            }
            case 4: {
                system("cls");
                SalirJuego();
                break;
            }
            default: {
                cout<<"\t Opci"<<wordo<<"n no v"<<worda<<"lida..."<<endl;
                system("pause");
                break;
            }
        }
    } while (option != 4);
}

int main() {
    insercion_datos(1, 0);
    menu();

    cout << "hoasdasdasdla" << endl;
    return 0;
}
