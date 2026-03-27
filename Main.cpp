#include "iostream"
#include "fstream"
#include "ctime"
#include "cstdlib"
#include <nlohmann/json.hpp>
#include "vector.26.03.2026.h"

using namespace std;
using json = nlohmann::json;

int main()
{
    srand(time(0));

    int size;
    cout << "Enter size: ";
    cin >> size;

    vector<double> v1;

    // 1. Генерація і запис у a.txt
    ofstream fa("a.txt");
    for (int i = 0; i < size; i++)
    {
        double x = (double)rand() / RAND_MAX * 100;
        v1.push_back(x);
        fa << x << " ";
    }
    fa.close();

    cout << "V1:\n";
    printVector(v1);

    // 2. Групування
    int n;
    cout << "\nEnter n: ";
    cin >> n;

    vector<double> groupSums;
    ofstream fb("b.txt");

    cout << "\nGroup sums:\n";

    for (int i = 0; i < v1.size(); i += n)
    {
        double sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i + j < v1.size())
            {
                sum += v1[i + j];
            }
        }
        groupSums.push_back(sum);
        fb << sum << " ";
        cout << sum << " ";
    }
    fb.close();

    // s2
    double s2 = sumVector(groupSums);

    // 3. Сортування
    vector<double> temp = v1;

    sortAsc(temp);
    double V1 = sumVector(temp);

    sortDesc(temp);
    double V2 = sumVector(temp);

    cout << "\nV1 (ASC sum): " << V1;
    cout << "\nV2 (DESC sum): " << V2 << endl;

    // 4. Дублікат
    int duplicates = countDuplicates(v1);

    vector<double> uniqueV;
    removeDuplicates(v1, uniqueV);

    double s3 = sumVector(uniqueV);

    cout << "s3: " << s3 << endl;
    cout << "s3 - s2: " << s3 - s2 << endl;

    // Максимальна група
    vector<double> maxGroup = getMaxGroup(v1, n);

    // 5. JSON
    json j;

    j["s2"] = s2;
    j["s3"] = s3;
    j["duplicates"] = duplicates;
    j["V1"] = V1;
    j["V2"] = V2;
    j["V1-V2"] = V1 - V2;
    j["s3-s2"] = s3 - s2;
    j["sizeA"] = v1.size();
    j["sizeB"] = groupSums.size();
    j["maxGroup"] = maxGroup;

    ofstream jout("result.json");
    jout << j.dump(4);
    jout.close();

    
}