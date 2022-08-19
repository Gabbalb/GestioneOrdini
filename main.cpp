#include <iostream>
#include <fstream>

using namespace std;

struct prodotto{
    string nome;
    string codice; //TODO: f per calcoare codice prodotto
    string prezzo;
    string tempoDiArrivo;
};

//TODO: matrice prodotti;

struct ordine{
    string numero;
    string oggetto;
    string costo;
    string tempoDiArrivo;
    string Operatore;
};

struct operatore{
    string nome;
    string cognome;
    string codice; //TODO: f per calcolare codice
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

void Ordine (){

    ofstream out ("ordini.txt");
    int Choose;
    int val;
    cout <<"1) inserisci in numero dell'oggetto; 2) mostra oggetti in lista"<<endl;
    cin >> Choose;
    if (Choose == 1){
        cout << "inserisci nome" << endl;
        cin >> val;
        out << val << ";";
    } else {
        //TODO: funzione per mostrare matrice ordini
    }
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
