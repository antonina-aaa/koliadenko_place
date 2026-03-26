# 🛒 Koliadenko Place: Multi-Module C++ Workspace

![C++](https://img.shields.io/badge/C++-17-blue.svg)
![IDE](https://img.shields.io/badge/IDE-Visual_Studio_2022-purple.svg)
![Tests](https://img.shields.io/badge/Tests-Passing-brightgreen.svg)
![JSON](https://img.shields.io/badge/Library-nlohmann--json-orange.svg)

Ласкаво просимо до **Koliadenko Place** — інтегрованого середовища розробки, яке поєднує прикладну систему самообслуговування та науково-дослідний модуль обробки даних.

---

## 🏬 Модуль 1: Self-Checkout System (Гілка `Store-Zhovkva`)
*Симуляція касового термінала для магазинів різних типів.*

**Ключові особливості:**
* **Вибір локації:** Робота з асортиментом **Pet Store** та **Game Store**.
* **Smart Cart:** Динамічне додавання товарів, перевірка залишків та формування чека.
* **Discount System:** Логіка застосування промокодів для автоматичного перерахунку `totalPrice`.
* **Audio UI:** Відтворення звуку успішної оплати (`success.wav`).

```cpp
// Реалізація звукового супроводу
system("назва_музичного_файлу.його_розширення");
🧬 Модуль 2: Data Research & Vector Lab (Гілки jason+vector, dz_json_Tanya)
Модуль для глибокої роботи з масивами даних, файловою системою та JSON.

📊 Алгоритми (vector.h):
Custom Sorting: Власна реалізація sortAsc (за зростанням) та sortDesc (за спаданням).

Duplicate Handler: Функція removeDuplicates для очищення масивів та printDifference для аналізу повторів.

Math Logic: Розрахунок сум груп елементів та обчислення різниці між оригінальним та відфільтрованим векторами.

📄 Обмін даними (JSON & Files):
Генерація: Автоматичне створення numbers.txt з 1000 випадковими числами.

Serialization: Експорт результатів (суми, кількість дублікатів, вектори V1 та V2) у структурований файл data.json.

🧪 Модуль 3: QA & Unit Testing (Гілка dz2_unitTest_Tanya)
Набір автоматизованих тестів для перевірки надійності коду.

Використовується Microsoft Native Unit Test Framework. Основні перевірки:

Sorting Test: Валідація правильного порядку після виконання сортування.

Sum Test: Перевірка точності математичних обчислень у функціях вектора.

Unique Test: Контроль коректності видалення дублікатів (чи не втрачаються дані).

JSON Test: Перевірка цілісності даних при роботі з об'єктами бібліотеки nlohmann.

🛠 Технічні вимоги та налаштування
1. Середовище розробки
IDE: Visual Studio 2022.

Стандарт: C++17 або новіше.

2. Залежності
JSON: Встановіть пакет nlohmann.json через NuGet.

Audio: Для роботи звуку додайте winmm.lib у властивості проєкту:

Project Properties -> Linker -> Input -> Additional Dependencies.

3. Робота з гілками
Проєкт має розгалужену структуру. Використовуйте git checkout для переходу між модулями:

Store-Zhovkva — Магазин та звуки.

jason+vector / dz_json_Tanya — Робота з JSON та алгоритмами.

dz2_unitTest_Tanya — Юніт-тести.
