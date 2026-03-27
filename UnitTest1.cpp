
#include "pch.h"
#include "vector.26.03.2026.h"
#include "CppUnitTest.h"
#include <vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BoundaryTestsNamespace
{
    TEST_CLASS(BoundaryTestsClass)
    {
    public:

        // Тест 1: сума порожнього вектора
        TEST_METHOD(TestEmptyVectorSum)
        {
            std::vector<double> v = {};
            double expected = 0;

            double actual = sumVector(v);

            Assert::AreEqual(expected, actual, 0.0001);
        }

        // Тест 2: один елемент (сортування)
        TEST_METHOD(TestSingleElementSort)
        {
            std::vector<double> v = { 42.5 };
            std::vector<double> expected = { 42.5 };

            sortAsc(v);

            Assert::AreEqual((int)expected.size(), (int)v.size());
            Assert::AreEqual(expected[0], v[0], 0.0001);
        }

        // Тест 3: сортування ASC
        TEST_METHOD(TestSortAsc)
        {
            std::vector<double> v = { 5.2, 1.1, 3.3 };
            std::vector<double> expected = { 1.1, 3.3, 5.2 };

            sortAsc(v);

            for (int i = 0; i < v.size(); i++)
            {
                Assert::AreEqual(expected[i], v[i], 0.0001);
            }
        }

        // Тест 4: сортування DESC
        TEST_METHOD(TestSortDesc)
        {
            std::vector<double> v = { 1.1, 3.3, 2.2 };
            std::vector<double> expected = { 3.3, 2.2, 1.1 };

            sortDesc(v);

            for (int i = 0; i < v.size(); i++)
            {
                Assert::AreEqual(expected[i], v[i], 0.0001);
            }
        }

        // Тест 5: видалення дублікатів
        TEST_METHOD(TestRemoveDuplicates)
        {
            std::vector<double> v = { 1, 2, 2, 3, 3, 3 };
            std::vector<double> unique;

            removeDuplicates(v, unique);

            Assert::AreEqual(3, (int)unique.size());
        }

        // Тест 6: підрахунок дублікатів
        TEST_METHOD(TestCountDuplicates)
        {
            std::vector<double> v = { 1, 2, 2, 3, 3 };

            int result = countDuplicates(v);

            Assert::AreEqual(2, result);
        }

        // Тест 7: сума елементів
        TEST_METHOD(TestSumVector)
        {
            std::vector<double> v = { 1.5, 2.5, 3.0 };

            double result = sumVector(v);

            Assert::AreEqual(7.0, result, 0.0001);
        }
    };
}
