// studentuIvertinimai.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Asmuo.h"
#include "duomenuNuskaitymas.h"
#include "duomenuIvedimas.h"
#include "galutinisPazymys.h"
#include "duomenuIsvedimas.h"
#include "duomenuPasirinkimas.h"
#include "failoSukurimas.h"
#include "studentuSarasoDalinimas.h"

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;
using std::list;


int main()
{
    srand(time(0));

    list <Asmuo> studentai;
    list <Asmuo> galvociai;
    list <Asmuo> vargsiukai;

    string failoPavadinimas;
    cout << "Iveskite duomenu failo pavadinima: " << endl;
    cin >> failoPavadinimas;

    string failoDydis;
    cout << "Iveskite failo dydi (kiek eiluciu sudaro faila):" << endl;
    cin >> failoDydis;

    duomenuNuskaitymas(studentai, failoPavadinimas + ".txt");

    if (studentai.size() > 0)
    {
        string skaiciavimoBudas;
        cout << "Pasirinkite, kaip skaiciuoti galutini bala: 'a' - naudojant vidurki; 'b' - naudojant mediana" << endl;
        cin >> skaiciavimoBudas;

        string sarasoDalinimoStrategija;
        cout << "Pasirinkite saraso dalinimo strategija: 1, 2, 3" << endl;
        cin >> sarasoDalinimoStrategija;

        studentuRusiavimas(studentai, galvociai, vargsiukai, skaiciavimoBudas, sarasoDalinimoStrategija);
        naujiSarasai(galvociai, vargsiukai, failoDydis);
    }

    system("PAUSE");
    return 0;
}
