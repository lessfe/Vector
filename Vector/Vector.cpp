#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;


int main()
{
    // Задание: В первой строке вводится количество элементов в массиве.Во второй строке вводятся элементы массива. В ответе должны вывестись элементы, которые больше предыдущего.
    /*
    

    int vec_size;
    cin >> vec_size;

    vector<int> vec(vec_size);

    for (int i = 0; i < vec_size; i++)
    {
        cin >> vec[i];   
    }
    for (int i = 0; i < vec_size; i++)
    {
        cout << vec[i];
    }
    cout << endl;

    for (int i = 0; i < vec_size - 1; i++)
    {
        if (vec[i + 1] > vec[i]) {

           cout << vec[i+1] << "\t";
        }
    }
    */

    vector <char*> vec;              
    // reserve()
    /*vec.reserve(10); Если вектор зарезервирован на три ячейки, а мы попросим увеличить объем до 6, он дополнит вектор 3 ячейками.
    но, если у нас изначально 50 ячеек, а мы хотим 6, то в данном случае ничего не произойдет.*/

    // capacity()
    /*
    vec.capacity(); Проверяем то пространство, которое зарезервировано под вектор.
    */

    // shrink_to_fit
    /*
    vec.shrink_to_fit(); Делает размер вектора равным кол-ву эл-ов в нем.
    */

    // insert
    /* 
    vec.insert(vec.begin() , 2, (char*)"Insert"); // Производит вставку эл-ов на определенную позицию со сдвигом остальных.
                    Параметры:
                  1. Иттератор(структура данных, которая используется для обращения к определенному элементу в контейнерах STL.) 
                  на тот эл-т, после которого нужно сделать вставку.
                  2. Число - кол-во эл-ов, которые мы хотим вставить (к примеру, 2).
                  3. Значение, которое будет скопировано для 2 эл-ов. 
                  */

    // erase
    /*
    vec.erase(vec.begin(), vec.begin() + 5); // Удаляет эл-ы
    1. Иттератор, на то, с какого эл-а производится удаление.
    2. Иттератор, на то, на каком эл-е закончится удаление.

    */

    // emplace - тот же insert, только новее и быстрее.
    /*
    vec.emplace(vec.begin(), (char*)"Insert");
    */

    //emplace_back - тот же push_back, только быстрее
    /*
    vec.emplace_back(10);
    */
 
    /*string note;

    while (1)
    {
        getline(cin, note);
        if (note != "exit")
        {
            notes.push_back(note);
        }
        else
        {
            break;
        }
    }
     cout << endl << "Notes" << endl;
    for (int i = 0; i < notes.size(); i++)
    {
        cout << notes[i] << endl;
    }*/

    auto iterStart = vec.begin();
    auto iterEnd = vec.end();

    
    


}

