#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Kiek bus skaiciu?" << endl; // paklausia kiek bus skai�i�
    cin >> N;
    int array[N];
    cout << "Kokie bus skaiciai?" << endl; // skai�i� �vedimas
    for (int i=1; i<=N; i++)
        cin >> array[i];
    for (int i=1; i<=N; i++)  //kiek skai�i� noriu sur��iuot, sukamas ciklas, tol kol yra skai�i� aibei
        for (int j=2; j<=N; j++) // pirmas skai�ius paimtas, ir lyginimas su sekan�iu skai�ium
            if (array[j-1]>array[j]) // jeigu pirmas skai�ius paimtas masyve yra didesnis, nei sekantis
            {
                int t=array[j-1]; //sukuriamas laikinas kintamasis
                array[j-1]=array[j]; //sukurtas skai�ius laikinas, prilyginimas pirmam skai�iui. Pirmas aib�s skai�ius �gauna antro aib�s skai�iaus reik�m�.
                array[j]=t; // kintamieji sukei�iami vietomis. Antro masyvo indeksas �gauna pirma masyvo reik�m�.
            }
    cout << "Surikiuoti skaiciai" << endl;
    for (int i=1; i<=N; i++) //masyvo i�spausdinimo ciklas
        cout << array[i] << endl;
}

