#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

struct player{
    string player_name="Versha";
    int score=0;
    int id_player=0;
};
struct partidas{
    string player_name="Versha";
    int score=0;
    int id_player=0;
};
player *jugadores = new player[25];
void puntuaciones() {

}

void inicio() {

}

void salir() {
    cout<<" \n"
        <<"..######.....###....##.......####.########.##....##.########...#######. \n"
        <<".##....##...##.##...##........##..##.......###...##.##.....##.##.....## \n"
        <<".##........##...##..##........##..##.......####..##.##.....##.##.....## \n"
        <<"..######..##.....##.##........##..######...##.##.##.##.....##.##.....## \n"
        <<".......##.#########.##........##..##.......##..####.##.....##.##.....## \n"
        <<".##....##.##.....##.##........##..##.......##...###.##.....##.##.....## \n"
        <<"..######..##.....##.########.####.########.##....##.########...#######. \n"
        <<"\n";
    cout<<"\t\t Gracias por jugar"<<endl;
    Sleep(2000);
    exit(1);
}

//Funcion para mostrar los créditos
void creditos() {
    cout<<"\t..######..########..########.########..####.########..#######...######. \n"
        <<"\t.##....##.##.....##.##.......##.....##..##.....##....##.....##.##....## \n"
        <<"\t.##.......##.....##.##.......##.....##..##.....##....##.....##.##...... \n"
        <<"\t.##.......########..######...##.....##..##.....##....##.....##..######. \n"
        <<"\t.##.......##...##...##.......##.....##..##.....##....##.....##.......## \n"
        <<"\t.##....##.##....##..##.......##.....##..##.....##....##.....##.##....## \n"
        <<"\t..######..##.....##.########.########..####....##.....#######...######. ";
    cout<<" "<<endl;
    cout<< "\t\t\t Cristhian Carrillo " <<endl;
    cout<< "\t\t\t Joel Velez" <<endl;

    system("pause");
    system("cls");
}

void errores(char option) {
    //isalpha valida si el dato ingresado es una letra
    if(isalpha( option)){
        cout<<" Opción invalida, por favor ingrese un numero."<<endl;
        system("pause");
        system("cls");
    }else{
        cout<<" Ingrese un número dentro de las opciones"<<endl;
        system("pause");
        system("cls");
    }
}

void Registro_datos(int id) {
    cout << "Ingreso del apodo del jugador " << id + 1 << ": ";
    cin >> jugadores[id].player_name;
    jugadores[id].id_player = id;
}
void menu() {
    char option;
    int id=0;
    do {
        system("cls");
        cout << "\n 1.Nueva Partida";
        cout << "\n 2.Continuar una Partida";
        cout << "\n 3.Creditos";
        cout << "\n 4.Puntajes";
        cout << "\n 5.Salir";
        cout << "\n Escoga una opcion: ", cin >> option;
        switch (option) {
            case 1: {
                Registro_datos(id);
                id=+0;
                break;
            }
            case 2: {
                if(id == 0){
                    cout<<"Primero cree una partida"<<endl;
                }else {
                    partidas();
                }
                break;
            }
            case 3: {
                creditos();
                break;
            }
            case 4: {
                puntuaciones();
                break;
            }
            case 5: {
                salir();
                break;
            }
            default: {
                errores(option);
                break;
            }
        }
    } while (option!=5);
}
int main()
{
    menu();
    cout<<"hoasdasdasdla"<<endl;
    return 0;
}
