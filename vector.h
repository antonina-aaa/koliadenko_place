#pragma once
#include <iostream>
#include <vector>

using namespace std;
// Сортування у зростаючому порядку
void sortAsc(vector<int>& v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = 0; j < v.size() - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

// Сортування у спадному порядку
void sortDesc(vector<int>& v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = 0; j < v.size() - i - 1; j++)
        {
            if (v[j] < v[j + 1])
            {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

// Сума елементів
int sumOfElements(vector<int>& v)
{
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    return sum;
}

// Видалення дублікатів
void removeDuplicates(vector<int>& v, vector<int>& unique)
{
    for (int i = 0; i < v.size(); i++)
    {
        bool isDuplicate = false;
        for (int j = 0; j < unique.size(); j++)
        {
            if (v[i] == unique[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate)
        {
            unique.push_back(v[i]);
        }
    }
}
// Вивід повторюваних елементів
void printDifference(const vector<int>& v1)
{
    for (int i = 0; i < v1.size(); i++)
    {
        // Перевірка: чи вже виводили цей елемент
        bool alreadyPrinted = false;
        for (int k = 0; k < i; k++)
        {
            if (v1[i] == v1[k])
            {
                alreadyPrinted = true;
                break;
            }
        }
        if (alreadyPrinted)
            continue;
        // Рахуємо кількість входжень
        int count = 0;
        for (int j = 0; j < v1.size(); j++)
        {
            if (v1[i] == v1[j])
            {
                count++;
            }
        }
        // Якщо більше 1 — це дублікат
        if (count > 1)
        {
            cout << v1[i] << " ";
        }
    }
}