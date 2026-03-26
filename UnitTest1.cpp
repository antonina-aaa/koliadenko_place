#include "pch.h"
#include "CppUnitTest.h"
#include "../dz_1/vector.h"
#include <vector>
#include "nlohmann/json.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using json = nlohmann::json;

namespace VectorTests
{
    TEST_CLASS(VectorFunctionsTest)
    {
    public:

        // 1. Тест сортування за зростанням
        TEST_METHOD(TestSortAsc)
        {
            std::vector<int> v = { 5, 2, 8, 1, 3 };
            sortAsc(v);
            std::vector<int> expected = { 1, 2, 3, 5, 8 };

            for (size_t i = 0; i < v.size(); i++) {
                Assert::AreEqual(expected[i], v[i]);
            }
        }

        // 2. Тест сортування за спаданням
        TEST_METHOD(TestSortDesc)
        {
            std::vector<int> v = { 1, 5, 2, 8, 3 };
            sortDesc(v);
            std::vector<int> expected = { 8, 5, 3, 2, 1 };

            for (size_t i = 0; i < v.size(); i++) {
                Assert::AreEqual(expected[i], v[i]);
            }
        }

        // 3. Тест суми елементів
        TEST_METHOD(TestSumOfElements)
        {
            std::vector<int> v = { 10, 20, 30 };
            int result = sumOfElements(v);
            Assert::AreEqual(60, result);
        }

        // 4. Тест видалення дублікатів
        TEST_METHOD(TestRemoveDuplicates)
        {
            std::vector<int> v = { 1, 2, 2, 3, 1, 4 };
            std::vector<int> unique;
            removeDuplicates(v, unique);

            // Має залишитись 4 елементи: 1, 2, 3, 4
            Assert::AreEqual((size_t)4, unique.size());
            Assert::AreEqual(1, unique[0]);
            Assert::AreEqual(2, unique[1]);
            Assert::AreEqual(3, unique[2]);
            Assert::AreEqual(4, unique[3]);
        }

        // 5. Перевірка роботи JSON (чи підключена бібліотека)
        TEST_METHOD(TestJsonIntegration)
        {
            json j;
            j["test"] = 100;
            Assert::AreEqual(100, (int)j["test"]);
        }
    };
}