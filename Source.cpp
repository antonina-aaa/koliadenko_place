#include <fstream>
#include <ctime>
#include <cstdlib>
#include <nlohmann/json.hpp>
#include "vector.h"
using namespace std;
using json = nlohmann::json;
int main()
{
      srand(time(0));
    // створюємо файл та записуємо 1000 випадкових чисел
    ofstream file("numbers.txt");
    for (int i = 0; i < 1000; i++) {
        int num = rand() % 100;
        file << num << " ";
    }
    file.close();
    vector<int> b1;
    ifstream infile("numbers.txt");
    int x;
    while (infile >> x) {
        b1.push_back(x);
    }
    infile.close();
    cout << "Numbers:\n";
    for (int i = 0; i < b1.size(); i++) {
        cout << b1[i] << " ";
    }
    int n;
    cout << "\nEnter how many elements to group: ";
    cin >> n;

    cout << "\nSum of each group:\n";

    for (int i = 0; i < b1.size(); i += n)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i + j < b1.size()) 
            {
                sum += b1[i + j];
            }
        }
        cout << sum << " ";
    }
    cout << endl;
    // завдання з дошки
    ofstream out("e.txt");
    ofstream jout("data.json");
    int size;
    cout << "Enter size of new array: ";
    cin >> size;
    vector<int> v1(size);
    vector<int> v2;
    for (int i = 0; i < size; i++)
    {
        v1[i] = rand() % 99 + 1;
    }
    cout << "Array V1: ";
    for (int i = 0; i < size; i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    cout << "Enter n: ";
    cin >> n;
    // Сумування по n елементів
    out << "Summed numbers:\n";
    for (int i = 0; i < v1.size(); i += n)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i + j < v1.size())
            {
                sum += v1[i + j];
            }
        }
        out << sum << endl;
    }

    cout << endl;
    // Сортування за зростанням
    sortAsc(v1);
    cout << "Sorted array V1 (ASC): ";
    for (int i = 0; i < size; i++)
    {
        cout << v1[i] << " ";
    }
    int sum2 = sumOfElements(v1);
    cout << endl << "Sum of elements (ASC): " << sum2 << endl << endl;
    // Сортування за спаданням
    sortDesc(v1);
    cout << "Sorted array V1 (DESC): ";
    for (int i = 0; i < size; i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl << "Sum of elements (DESC): " << sumOfElements(v1) << endl << endl;
    // Копія масиву
    vector<int> copyV1 = v1;
    // Видалення дублікатів
    removeDuplicates(v1, v2);
    int sum3 = sumOfElements(v2);
    // Різниця сум
    cout << "Difference of sums S3 - S2: " << sum3 - sum2 << endl;
    // Кількість дублікатів
    int duplicatesCount = size - v2.size();
        // Різниця масивів
    cout << "Difference of arrays |V1 - V2|: ";
    printDifference(copyV1);
    cout << endl;
        // JSON через бібліотеку
    json j;
    j["sum1"] = sum2;
    j["sum2"] = sum3;
    j["difference"] = sum3 - sum2;
    j["duplicatesCount"] = duplicatesCount;
    j["V1"] = v1;
    j["V2"] = v2;
    jout << j.dump(4);
    out.close();
    jout.close();
    return 0;
}