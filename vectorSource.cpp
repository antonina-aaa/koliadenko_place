#include "vector.h"
#include <iostream>
#include <ctime>
#include <fstream>
#include <nlohmann/json.hpp>

using namespace std;
using json = nlohmann::json;

// Реалізація функцій
int Sum(const vector<int>& a) {
    int sum = 0;
    for (int x : a) sum += x;
    return sum;
}

vector<int> Unique(const vector<int>& a) {
    vector<int> res;
    for (int x : a) {
        if (find(res.begin(), res.end(), x) == res.end()) {
            res.push_back(x);
        }
    }
    return res;
}

int DuplicatesCount(const vector<int>& a) {
    vector<int> uniqueVec = Unique(a);
    return a.size() - uniqueVec.size();
}

// Головна програма
int main() {
    system("color 5B");
    int size;
    cout << "Input size: "; cin >> size;
    vector<int> a(size);
    srand(time(NULL));

    for (int i = 0; i < size; i++) a[i] = 2 + rand() % 100;

    cout << "\nVector: ";
    for (int x : a) cout << x << " ";

    int sum2 = Sum(a);
    vector<int> unique = Unique(a);
    int sum3 = Sum(unique);
    int duplicates = DuplicatesCount(a);

    sort(a.begin(), a.end());

    ofstream jout("data.json");
    json j;
    j["S2"] = sum2;
    j["S3"] = sum3;
    j["V1"] = a;
    j["V2"] = unique;
    jout << j.dump(4);
    jout.close();

    cout << "\n\nS3 - S2 = " << sum3 - sum2;
    cout << "\nDuplicates count: " << duplicates;
    cout << "\nData saved to data.json\n";

    return 0;
}