# Паттерн Команда
## Инкапсуляция вызова
![image](https://github.com/papavelvoroshilov25/Command/blob/master/images/Command.PNG?raw=true)
В этой главе мы выходим на новый уровень инкапсуляции - на этот раз будут инкапсулироваться вызовы методов.   Да, 
все верно — вызывающему объекту не нужно беспокоиться о том, как 
будут выполняться его запросы. Он просто использует инкапсулирован-
ный метод для решения своей задачи. Инкапсуляция позволяет решать 
и такие нетривиальные задачи, как регистрация или отмена вызовов. 
![image](https://github.com/papavelvoroshilov25/Command/blob/master/images/%D0%A1%D0%BD%D0%B8%D0%BC%D0%BE%D0%BA.JPG?raw=true)
### Реализация интерфейса Command
Начнем по порядку: все объекты команд реализуют единый интерфейс, который состоит всего из одного метода. В примере с кафе мы назвали этот метод orderUp(), но чаще встречается стандартное имя execute().
Интерфейс Command выглядит так:
public interface Command {
    public void execute();
}
### Реализация команды для включения света
Допустим,  вы  хотите  реализовать  команду  для  включения  света. 
Обратившись к описаниям классов устройств, мы видим, что класс 
Light содержит два метода: on() и off(). Реализация команды выглядит примерно так:
![image](https://github.com/papavelvoroshilov25/Command/blob/master/images/svet.JPG?raw=true)
### Использование объекта команды
Упростим исходную задачу: допустим, пульт оснащен всего одной кнопкой и имеет всего одну ячейку 
для хранения управляемого устройства:
![image](https://github.com/papavelvoroshilov25/Command/blob/master/images/Object_command.JPG?raw=true)

### Определение паттерна Команда: диаграмма классов
![image](https://github.com/papavelvoroshilov25/Command/blob/master/images/image.jpg?raw=true)
