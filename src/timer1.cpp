#include "timer1.h"
#include <iostream>

GameTimer::GameTimer() {}

void GameTimer::StartTimer(float time) 
{
    timerptr = &timerDuration;
    *timerptr = time;
    std::cout << timerDuration;
}

bool GameTimer::RunTimer() 
{
    if (timerDuration>0) { *timerptr -= GetFrameTime(); return false; }
    else return true;
}