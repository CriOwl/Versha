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

void errores() {

}

void Registro_datos(int id) {
    cout << "Ingreso del apodo del jugador " << id + 1 << ": ";
    cin >> jugadores[id].player_name;
    jugadores[id].id_player = id;
}
void menu() {
    int option;
    int id=0;
    do {
        cout << "1.Nueva Partida";
        cout << "\n2.Continuar una Partida";
        cout << "\n3.Creditos";
        cout << "\n4.Puntajes";
        cout << "\n5.Salir";
        cout << "\nEscoga una opcion:";
        cin >> option;
        switch (option) {
            case 1: {
                Registro_datos(id);
                id=+0;
                break;
            }
            case 2: {
                if(id == 0) {
                    cout<<"Primero cree una partida"<<endl;
                }else {
                    partidas();
                }
                break;
            }
            case 3: {creditos();
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
                errores();
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
