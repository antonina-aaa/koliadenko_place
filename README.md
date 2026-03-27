# 🛒 Koliadenko Place: Multi-Module C++ Workspace

![C++](https://img.shields.io/badge/C%2B%2B-17-blue.svg)
![IDE](https://img.shields.io/badge/IDE-Visual_Studio_2022-purple.svg)
![Library](https://img.shields.io/badge/Library-nlohmann--json-orange.svg)
![Tests](https://img.shields.io/badge/Tests-Passing-brightgreen.svg)

 ![Project Preview](prewiew.webp)

**Koliadenko Place** — це інтегроване середовище розробки, що поєднує систему автоматизованого продажу (Self-Checkout) та науково-дослідний модуль для обробки великих масивів даних.

---

## 📂 Структура проєкту (Гілки Git)

Проєкт має розгалужену структуру. Використовуйте `git checkout [назва_гілки]`, щоб перемикатися між модулями:

1.  **`Store-Zhovkva, koliadenko-ivanka, Anna`** — Модуль магазину та аудіо-інтерфейсу.
2.  **`jason+vector` / `dz_json_Tanya / jso_Anna`** — Робота з JSON та алгоритмами обробки векторів.
3.  **`dz2_unitTest_Tanya`** — Автоматизовані юніт-тести.

---

## 🏬 Модуль 1: Self-Checkout System
*Симуляція касового термінала для різних типів магазинів.*

**Ключові особливості:**
* **Локації:** Підтримка асортименту (до прикладу) для **Pet Store** та **Game Store**.
* **Smart Cart:** Динамічне додавання товарів, перевірка залишків та формування фінального чека.
* **Discount System:** Логіка промокодів для автоматичного перерахунку вартості.
* **Audio UI:** Звукове підтвердження оплати (`success.wav`).

---

## 🧬 Модуль 2: Data Research & Vector Lab
*Аналітичний модуль для обробки числових даних.*

📊 **Алгоритми (vector.h):**
* **Custom Sorting:** Власна реалізація `sortAsc` (зростання) та `sortDesc` (спадання).
* **Duplicate Handler:** Очищення масивів від повторів (`removeDuplicates`) та аналіз різниці між векторами.
* **Math Logic:** Групування елементів та розрахунок контрольних сум.

📄 **Робота з файлами:**
* Генерація файлу `numbers.txt` з **1000 випадковими числами**.
* Експорт результатів (суми, вектори, статистика) у структурований формат `data.json`.

---

## 🧪 Модуль 3: QA & Unit Testing
*Набір тестів на базі Microsoft Native Unit Test Framework.*

* **Sorting Test:** Валідація алгоритмів сортування.
* **Sum Test:** Точність математичних обчислень.
* **Unique Test:** Перевірка цілісності даних після видалення дублікатів.
* **JSON Test:** Перевірка коректності запису об'єктів `nlohmann`.

---

## 🛠 Технічні вимоги та налаштування

1.  **Середовище:** Visual Studio 2022, стандарт **C++17**.
2.  **Залежності:** Пакет nlohmann.json.

---

## 🏗 Як запустити

```bash
# Клонувати репозиторій
git clone [https://github.com/ваш-юзернейм/koliadenko-place.git](https://github.com/ваш-юзернейм/koliadenko-place.git)

# Перейти на гілку з магазином(до прикладу)
git checkout Store-Zhovkva
