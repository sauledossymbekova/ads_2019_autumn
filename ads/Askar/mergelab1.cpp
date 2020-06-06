/*Даны две бесконечных возрастающих последовательности чисел A и B. i-ый член последовательности A равен i2. i-ый член последовательности B равен i3.

Требуется найти Cx, где C – возрастающая последовательность, полученная при объединении последовательностей A и B. Если существует некоторое число, которое встречается и в последовательности A и в последовательности B, то в последовательность C это число попадает в единственном экземпляре.

Входные данные
В единственной строке входного файла дано натуральное число x (1 ≤ x ≤ 107).

Выходные данные
В выходной файл выведите Cx.*/
// 1 -1; 2-4; 4-9;
#include <iostream>
 
using namespace std;
 
int main()
{
    int x;
    cin >> x;
 
    long long i=1; long long j=1;
 
    long long res;
    int counter=0;
 
    for(int k=1;k<=x;k++)
    {
        if(i*i==j*j*j)
        {
            i++;
            k--;
            continue;
        }
 
        if(i*i<j*j*j)
        {
            res=i*i;
            i++;
        }
 
        else
        if(i*i>j*j*j)
        {
            res=j*j*j;
            j++;
        }
    }
 
    cout << res;
}
