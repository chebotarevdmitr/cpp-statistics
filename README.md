Сборка проекта  
mkdir build && cd build
cmake ..
make

запуск 
Перейдите в папку build
cd build
Запустите исполняемый файл
./statistics

введите числа
0 1 2 3 4 5 6 7 8 9 10
Для завершения ввода 
Linux Нажмите Ctrl+D

пример вывщда :
min = 0
max = 10
mean = 5
std = 3.16228
pct90 = 9
pct95 = 10

пересборка проекта
cd build
rm -rf *    # Очистка старых файлов
cmake ..
make
