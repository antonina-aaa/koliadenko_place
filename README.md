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
* **Audio UI:** Відтворення звуку успішної оплати (`success.wav`) за допомогою Windows Multimedia API.

```cpp
// Реалізація звукового супроводу
#include <windows.h>
#pragma comment(lib, "winmm.lib")
PlaySound(TEXT("success.wav"), NULL, SND_FILENAME | SND_ASYNC);
