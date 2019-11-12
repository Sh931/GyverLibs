// пример работы в режиме интервалов

#include "GyverTimer.h"   // подключаем библиотеку

GTimer myTimer(MS);  // создать миллисекундный таймер (ms) (по умолч. в режиме интервала)
//GTimer myTimer(MS, 1000);  // можно сразу указать период (по умолч. в режиме интервала)
//GTimer myTimer(US, 5000);  // или микросекундный (us), на 5000 мкс (по умолч. в режиме интервала)

void setup() {
  Serial.begin(9600);
  myTimer.setInterval(500);   // запуск в режиме интервала 500 мс
  
  // myTimer.stop(); 	// "остановить" таймер
  // myTimer.start(); 	// запустить (перезапустить) таймер
  // myTimer.reset(); 	// сбросить период
  // myTimer.resume(); 	// продолжить работу после stop
}

void loop() {
  if (myTimer.isReady()) Serial.println("Timer!");  // 2 раза в секунду
}