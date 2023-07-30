#include "timer1.h"
#include <iostream>

GameTimer::GameTimer() {}

void GameTimer::StartTimer(float time) 
{
    timerptr = &timerDuration;
    *timerptr = time;
}

bool GameTimer::RunTimer() 
{
    if (timerDuration>0) { *timerptr -= GetFrameTime(); return false; }
    else return true;
}

void GameTimer::RunTimer2() 
{
    if (framesCounter%60 == 0) {
        *timerptr -= 1;
    }
}