# Laba8HW
# Домашняя работа (Условие)

<img width="738" height="180" alt="image" src="https://github.com/user-attachments/assets/bd278bd5-7f8e-4f55-b6ad-b1148122e870" />

# Алгоритм и блок-схема

1. Задать начальное значение `sign = 1 , sum=0`.
2. Запросить у пользователя значение `x`.
3. Запустить цикл `for` с параметром `i`, начинающимся с 0, и условием продолжения `i < x`.
5. На каждом шаге цикла высчитывать по формуле `sign * (1 + (i + 1) / 10.0)`.
6. После окончания цикла вывести полученное значение `sum` на экран.
7. Завершить работу программы.


# Блок-схема 

<img width="568" height="760" alt="image" src="https://github.com/user-attachments/assets/0cf9a28f-3abc-429c-82eb-3396e32cff9c" />

Ссылка на мою диаграмму: <a href="https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22WJzUy3EMjr-eLaRKOxhb%22%3E7Vlbc%2BMmFP41mtntTDLoRuRHX5J2L2nTyUybfeqwFpZokdAivLb66wsI3SwnVhxF2Ye%2BYDjA4fCd88ERttxlsv%2BZoyy%2BZSGmlgPCveWuLMexgQvkj5IUpQRCrxREnIRmUCO4J%2F%2FiaqaRbkmI885AwRgVJOsK1yxN8Vp0ZIhztusO2zDaXTVDEe4J7teI9qV%2FklDEpTRwrhr5L5hEcbWyDWdlT4KqwWYneYxCtmuJ3GvLXXLGRFlL9ktMFXgVLuW8m0d6a8M4TsWQCX%2FcfnTnD%2BFv4ObTX8WnO%2F7r78K%2FcEotOOyh0Kg1opxt%2BRo%2FoasaJ4oKPKX23jQZFzGLWIrodSNdcLZNQ6wsBLLVjPnMWCaFthT%2BjYUoTGCgrWBSFIuEml4TEohHWDxhm1cDLiMVswQLXsh5HFMkyPfu3pEJmageV0%2B9Y0Si4gAT3m7l26LyPuiqKO0ysxrfyErLjEakPfYM7z3hrJYTKJVkUWDvYiLwfYa0F3eSr10oZYBm%2BEOaS8J1wP2O6NbosqSbZitVLoAlhwRXVV2WC11em0mYC7xv2dQHP27xxjfA7VocMyKjpG4brF3wuLc6OD8XVH9ESnhvQQlpJS8e1PxLv2p%2BMep0Y7XvtArTGkglOA2VZtNSyRtCpa5rTtDpOHl0uShLX1PI1mUpCTQg5xDI6xPIdg4YBA8gdl6LQlcjUgj%2BwLdKMAkVnImpAIdQQV8WsipHIUoxZRFHiUQuw5xIAzA%2F7LtrOp5%2FEW3IHlfJ4VFu5SRKdZ80cptox490DdV3es0iv%2Bsd8Fosmo3IouCtWDQ6Ozz7IA%2FwJs653P%2FdMuDQ8iZOhYNB93fMkq%2FbfJRUmFgORImaR%2BV6i%2FNu7eCMtPe1jhvbHjGwK%2B9PnPnuiXho1b80SbBsNWmvarSz3oFsMC65AJcQwqsTDJlzjorWgExFfv44gSA4fq41Li01DswZgolPRTCIfy%2FLnx2oqZZx3FELv23VG8piw1JxsUEJoXInc0shYhhqBixRvkYhQbLrlqXssFuvCbSWXEeY0jHLdFe9iKxF6ldlGWqFhTYB6PzDAT%2BVq2ozv%2FJq7DvbDHXAO1JX7fe6enN0ig0ua2meofTohteMMq7NlKcCAJtN38z3lRK5UKmnlLfEGs5KesYZBk%2FnTL07%2B%2FByGO8Qc4bEodye6AbbsVjMBWf%2F4GUJ8iplKdaZKKUHIkTL5HMtV9TprQKQrBGdm46EhOGRA64f4OoD0dPleemr23cF7HrC9b2prhM45nXyJg8p1rCvQNt%2FYUb1MpwHvVz8YJ9r1VOIbQWLkw8i%2Bqid5mOul7WO5yZ%2FiJtGf6udmzdZVa5aGMOxED2RrnqHbxcDAJXN5l%2BRMkFp%2Fltyr%2F8D%3C%2Fdiagram%3E%3C%2Fmxfile%3E">Диаграмма №4</a> 

# Реализация программы
```
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_CTYPE, "RUS");
    int x, sign = 1;
    double sum = 0;
    printf("Введите число: ");
    scanf("%d", &x);
    for (int i = 0; i < x; i++, sign *= -1) {
        sum += sign * (1 + (i + 1) / 10.0);
    }   
    printf("%.1f\n", sum);
}

```

# Пример работы программы при вводе значений 10 и 4

Контрольный пример программы 

Введем число 3

Выход: 1.2

<img width="295" height="84" alt="image" src="https://github.com/user-attachments/assets/fb584cd5-1cbd-4347-a15d-fffcb95c57ba" />


# Информация о разработчике

ФИО: Васянин Александр Сергеевич

Группа: бОТИ-261
