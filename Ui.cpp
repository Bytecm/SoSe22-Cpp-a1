//
// Created by chris on 11.02.2022.
//

using namespace std;

#include <iostream>
#include "Complex.h"
#include "Ui.h"

void Ui::anwendung() {
    bool running = true;
    char mode;
    Complex complex(5, 3);
    Complex complex2(0, 0, 30.9638, 5.83095);
    cout << complex.toString();
    cout << complex2.toString();


    /*
    //loop for Dialog
    while (running) {
        cout << "Willkommen beim Komplexen Zahlen konverter" << endl;
        cout << "in welchem Format moechten sie die Zahl eingaben? Kartesische Form (k), Polar Form(p) oder moechten Sie das Programm beenden? (k/p/e):";
        cin >> mode;

        //Distinguish between the selected modes
        switch (mode) {
            case 'k':
                cout << endl << "Gewaehlter Modus: Kartesische Form" << endl;
                //get the Input variables
                cout << "Bitte geben sie den Realteil ein: ";
                double x, y;
                cin >> x;
                cout << endl <<"Bitte geben sie den Imaginaerteil ein: ";
                cin >> y;
                //set input in the Object, Calculate it and print it
                complex.set_cart(x, y);
                cout << endl <<"Ergebnis:" << endl;
                cout << complex.polarToString();
                break;
            case 'p':
                cout << "Gewaehlter Modus: Polar Form" << endl;
                //get the Input variables
                cout << "Bitte geben sie den Phasenwinkel (GRAD) ein: ";
                double p, t;
                cin >> p;
                cout << endl <<"Bitte geben sie den Betrag ein: ";
                cin >> t;
                //set input in the Object, Calculate it and toString it
                complex.set_polar(p, t);
                cout << endl <<"Ergebnis:" << endl;
                cout << complex.cartToString();
                break;
            case 'e':
                //user requested exit -> settung running to false so that the loop can break
                running = false;
                cout << "Gewaehlter Modus: Beenden" << endl;
                break;
            default:
                //input is undefined
                cout << "Eingabe unbekannt, bitte erneut versuchen" << endl << endl;
                break;
        }
        cout << endl << "------------------------------------------------------------------" << endl;
    }
    cout << "Auf Wiedersehen!" << endl;
     */

}