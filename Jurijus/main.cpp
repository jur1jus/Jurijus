#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Kiek bus skaiciu?" << endl; // paklausia kiek bus skaièiø
    cin >> N;
    int array[N];
    cout << "Kokie bus skaiciai?" << endl; // skaièiø ávedimas
    for (int i=1; i<=N; i++)
        cin >> array[i];
    for (int i=1; i<=N; i++)  //kiek skaièiø noriu surûğiuot, sukamas ciklas, tol kol yra skaièiø aibei
        for (int j=2; j<=N; j++) // pirmas skaièius paimtas, ir lyginimas su sekanèiu skaièium
            if (array[j-1]>array[j]) // jeigu pirmas skaièius paimtas masyve yra didesnis, nei sekantis
            {
                int t=array[j-1]; //sukuriamas laikinas kintamasis
                array[j-1]=array[j]; //sukurtas skaièius laikinas, prilyginimas pirmam skaièiui. Pirmas aibës skaièius ágauna antro aibës skaièiaus reikğmæ.
                array[j]=t; // kintamieji sukeièiami vietomis. Antro masyvo indeksas ágauna pirma masyvo reikğmæ.
            }
    cout << "Surikiuoti skaiciai" << endl;
    for (int i=1; i<=N; i++) //masyvo iğspausdinimo ciklas
        cout << array[i] << endl;
}

