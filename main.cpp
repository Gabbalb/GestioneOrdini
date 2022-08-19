#include <iostream>

using namespace std;

struct ordine{
    string numero;
    string oggetto;
    string costo;
    string tempoDiArrivo;
    string Operatore;
};

void menu (){
    cout << "----------Gestione ordini----------" << endl;
    cout << "-----------Pincopallotek-----------" << endl;
    cout << "1) Crea nuovo ordine" << endl;
    cout << "2) Modifica nuovo ordine" << endl;
    cout << "3) Mostra lista ordini" <<endl;
    cout << "4) Aggiungi un nuovo operatore" <<endl;
    cout << "5) Aggiungi un nuovo prodotto" <<endl;
    cout << "___________________________________" << endl;
    cout << "         Scegli dal menu           " << endl;
}

int main() {
    int choice;

    //print menu
    menu();

    //read choice
    int control = 0;
    do {
        cin >> choice;
        control = 0;
        switch (choice) {
            case 1:
                //NewOrder();
                break;
            case 2:
                //ModifyOrder();
                break;
            case 3:
                //ShowStory();
                break;
            default:
                control = 1;
                cout << "Scelta inesistente" << endl;
        }
    } while (control == 1);


    return 0;
}
