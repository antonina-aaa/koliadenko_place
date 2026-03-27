#pragma once
#pragma once
#include <vector>
#include <iostream>
using namespace std;

// Вивід
void printVector(const vector<double>& v)
{
    for (double x : v)
        cout << x << " ";
    cout << endl;
}

// Сума
double sumVector(const vector<double>& v)
{
    double sum = 0;
    for (double x : v)
        sum += x;
    return sum;
}

// Сортування ASC
void sortAsc(vector<double>& v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = 0; j < v.size() - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
}

// Сортування DESC
void sortDesc(vector<double>& v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = 0; j < v.size() - i - 1; j++)
        {
            if (v[j] < v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
}

// Кількість дублікатів
int countDuplicates(const vector<double>& v)
{
    int count = 0;

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] == v[j])
            {
                count++;
                break;
            }
        }
    }
    return count;
}

// Видалення дублікатів
void removeDuplicates(const vector<double>& v, vector<double>& unique)
{
    for (int i = 0; i < v.size(); i++)
    {
        bool isDup = false;

        for (int j = 0; j < unique.size(); j++)
        {
            if (v[i] == unique[j])
            {
                isDup = true;
                break;
            }
        }

        if (!isDup)
            unique.push_back(v[i]);
    }
}

// Максимальна група
vector<double> getMaxGroup(const vector<double>& v, int n)
{
    vector<double> best;
    double maxSum = -1;

    for (int i = 0; i < v.size(); i += n)
    {
        double sum = 0;
        vector<double> temp;

        for (int j = 0; j < n; j++)
        {
            if (i + j < v.size())
            {
                sum += v[i + j];
                temp.push_back(v[i + j]);
            }
        }

        if (sum > maxSum)
        {
            maxSum = sum;
            best = temp;
        }
    }

    return best;
}