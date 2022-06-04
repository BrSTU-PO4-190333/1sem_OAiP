# CMD

- [x] [Создаём диск R](#создаём-диск-r)
- [ ] [Задание 1](#задание-1)
- [x] [Задание 2](#задание-2)
- [ ] [Задание 3](#задание-3)
- [ ] [Задание 4](#задание-4)
- [ ] [Задание 5](#задание-5)
- [x] [Задание 6](#задание-6)
- [x] [Задание 7](#задание-7)
- [ ] [Задание 8](#задание-8)
- [ ] [Задание 9](#задание-9)
- [ ] [Задание 10](#задание-10)
- [ ] [Задание 11](#задание-11)
- [ ] [Задание 12](#задание-12)
- [ ] [Задание 13](#задание-13)
- [ ] [Задание 14](#задание-14)
- [ ] [Задание 15](#задание-15)
- [ ] [Задание 16](#задание-16)
- [ ] [Задание 17](#задание-17)
- [ ] [Задание 18](#задание-18)
- [ ] [Задание 19](#задание-19)
- [ ] [Задание 20](#задание-20)
- [ ] [Задание 21](#задание-21)
- [ ] [Задание 22](#задание-22)
- [ ] [Задание 23](#задание-23)
- [ ] [Задание 24](#задание-24)
- [ ] [Задание 25](#задание-25)
- [ ] [Задание 26](#задание-26)
- [ ] [Задание 27](#задание-27)

## Создаём диск R

1. `Win` + `E`.
2. Левой кнопкой пиши по `This computer`.
3. `Manager`.
4. `Computer Managment (Local)` > `Storage` > `Disk Managment`.
5. Левой кнопкой мыши по диску.
6. `Shrink volume`.
7. Enter the amount of space to thrink in MB: `1024`.
8. Жмём `Shrink`.
9. Жмём левой кнопкой мыши по пустому пространству.
10. `New Simple Volume...`.
11. `Next >`.
12. Simple volume size in MB: `1024`.
13. `Next >`.
14. Assing the following drive letter: `R`.
15. `Next >`.
16. Volume label: `R`.
15. `Next >`.
15. `Finish`.

## Задание 1

Создайте на диске `R:\` файл `R:\test3.txt` и каталог `R:\LAB`,
в каталоге `R:\LAB` создайте файлы `file1`, `file2`, `file3` и `file4.txt`, `file5.txt`, `file6.txt`.
Выведите атрибуты файла `R:\test3.txt`.
Назначьте атрибут «Только чтение» файлу `R:\test3.txt`.
Удалите атрибут "Только чтение" для всех файлов из папки `R:\LAB\` с расширением `*.txt`.
Отмените атрибут "Только чтение" для всех файлов в каталоге `R:\LAB\`.
Установите атрибут «Архивный» для всех файлов на диске `R:\`.

## Задание 2

Просмотрите текущую кодовую страницу.
Замените текущую кодовую страницу страницей «Восточная и центральная Европа»
затем на «Французский (Канада)».
Верните первоначальную кодовую страницу.

```cmd
REM Смотрим текущую кодовую страницу
chcp
REM Результат: Active code page: 437


REM Заменяем текущую кодовую страницу страницей «Восточная и центральная Европа»
chcp 852
REM Результат: Active code page: 852

REM Смотрим текущую кодовую страницу
chcp
REM Результат: Active code page: 852


REM Заменяем текущую кодовую страницу на «Французский (Канада)»
chcp 863
REM Результат: Active code page: 863

REM Смотрим текущую кодовую страницу
chcp
REM Результат: Active code page: 863


REM Возвращаем первоначальную кодовую страницу
chcp 437
REM Результат: Active code page: 437

REM Смотрим текущую кодовую страницу
chcp
REM Результат: Active code page: 437
```

## Задание 3

Создайте на диске `R:\` каталог и подкаталог (`R:\SUB1\SUB2\`).
Перейдите в каталог `SUB1`,
а затем в подкаталог текущего каталога.
Перейдите из подкаталога в родительский каталог.
Выведите на экран имя текущего каталога.
В каталоге `R:\SUB1` создайте файлы `file1`, `file2`, `file3` и `file4.txt`, `file5.txt`, `file6.txt`.
Скопируйте все файлы каталога `R:\SUB1` на корневой диск `R:\`.

## Задание 4

Проверьте диск в дисководе `R:\` и исправить все обнаруженные ошибки.

## Задание 5

Проверьте, зашифрована ли папка `R:\SUB1`.
Создайте каталог `R:\SUB3\` и файл `R:\SUB3\lab.txt`, зашифруйте данный файл, зашифруйте папку `R:\SUB3`.

## Задание 6

Очистите окно командной строки.

```
cls
```

## Задание 7

Изменить цвет текста на красный, а цвет фона на зеленый.

```
color 24
```

## Задание 8

Сравнить первые 5 строк двух файлов в каталоге `R:\SUB1` и вывести результат в десятичном формате.
Сравнить первые 10 строк двух файлов в каталоге `R:\SUB1` и вывести номера строк в которых встретились различия.

## Задание 9

Создайте, используя консольный ввод файлы `R:\Memo.doc` и `R:\Memo1.doc`.
Для создания файла в командной строке используется команда `copy con имя_файла`.
После того, как выполнили командe `copy con имя_файла` необходимо напечатать текст (содержимое файла),
а затем завершить ввод нажатием `Ctrl + Z`.
Скопируйте файл `Memo.doc` в файл `Letter.doc` на текущем диске и убедитесь,
что символ конца файла находится в конце скопированного файла.
Скопируйте несколько файлов в один `R:\Memo.doc` и `R:\Memo1.doc` в `R:\Result.txt`
(организуйте проверку правильности копирования путем сравнения копий файлов).

## Задание 10

Задайте кодовую страницу вместе с кодом страны для Польши.

## Задание 11

Выведите текущую системную дату и измените ее.

## Задание 12

Вывести подряд все каталоги диска `C:\` в алфавитном порядке,
в несколько колонок и с паузой после заполнения каждого экрана.
Вывести все каталоги диска `C:\` с сортировкой по дате и времени от ранних к поздним.
Вывести все файлы диска `C:\` с сокращенными именами файлов.
Организуйте перенаправление вывода содержимого корневого диска `С:\` в файл `Dr.txt` в каталоге `R:\SUB2\`.

## Задание 13

Сравните два текстовых файла с именами `Monthly.rpt` и `Sales.rpt` и выведите результат в сокращенном формате.
Сравните два текстовых файла с именами `Monthly.rpt` и `Sales.rpt` и выведите результат в двоичном формате.

## Задание 14

Создайте файл `R:\TEXT_MY`, содержащий осмысленный текст.
Создайте файл `R:\DTEXT`, содержащий дважды продублированный текст из файла `R:\TEXT_MY`.
Организуйте поиск любого слова из файла `R:\TEXT_MY`, проанализируйте результат.

## Задание 15

Продублируйте 10 раз содержимое файла `R:\TEXT_MY`, результат сохраните в файл `R:\Big.txt`.
Организуйте по экранный вывод информации из файла `R:\Big.txt`.

## Задание 16

Переместить все файлы с расширением `.txt` из каталога `R:\SUB1` в каталог `R:\SUB2`.

## Задание 17

Для диска `C:\` выведите текущие пути поиска исполняемых файлов.

## Задание 18

Измените приглашение командной строки на

```
Текущее время| Текущая дата $Текущий диск=
```

## Задание 19

Создайте файл `Story.txt` на диске `R:\` в каталоге `\SUB1`.
Выведите содержимое текстового файла `Story.txt` на экран Удалите файл `Story.txt`.
Попытайтесь восстановить файл `Story.txt` из каталога `R:\SUB1`.

## Задание 20

Выведите и измените связи между расширениями имени типами для файлов `R:\test1.txt`, `R:\test2.txt`.
Удалите тип файла, соответствующий расширению имени файла `R:\test2.txt`.
Просмотрите текущие сопоставления типов файлов.
Отправьте результаты выполнения предыдущей команды в файл `Result.cfg`

## Задание 21

Выведите на экран подробные сведения о конфигурации компьютера и операционной системы,
сведения о безопасности, код продукта и параметры оборудования, такие как ОЗУ, дисковое пространство и сетевые карты.

## Задание 22

Выведите системное время.

## Задание 23

Организуйте вывод графического дерево каталога `С:\`.

## Задание 24

Выведите версию операционной системы.

## Задание 25

Выведите метку тома диска `С:\` и серийный номер.

## Задание 26

Получите MAC-адреса сетевой карты

## Задание 27

Узнайте текущий IP-адрес, шлюз, DNS и т.п.

## Задание 28

Выведите сетевой адрес.

<!--
Содержимое отчета

1. Титульный лист
2. Цель работы
3. Полный формат команд по каждому пункту задания и результаты выполнения команд
   (скриншот экрана (скриншот - это точное изображение того,
   что вы видите на экране монитора в данный момент)
   после выполнения каждой команды).
4. Вывод
-->