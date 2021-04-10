/* Программа, в которой создаётся массив. Массив заполняется поэлементно:
пользователь для каждого элемента вводит значение с клавиатуры*/
#include<iostream>
using namespace std;
int main ()
{
   int colichestvo;
   cout << " Vvedite colichestvo elementov v massive: ";
   cin >> colichestvo;
   int massiv [colichestvo];
   for ( int n = 0; n < colichestvo; n ++ )
   {
       cout << n + 1 << " element massiva = ";
        cin >> massiv [n];
   }
   cout << endl << " Vvedennie chisla: " << endl;
   for ( int i = 0; i < colichestvo; i++)
   {
       cout << massiv [i] << "\t";
   }
}

