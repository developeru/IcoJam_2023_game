#pragma once
#include <raylib.h>

class GameTimer 
{
public:
    GameTimer();
    void StartTimer(float time);
    bool RunTimer();
    void RunTimer2();
    float timerDuration;
    float* timerptr;
    int framesCounter;
private:
    
    
};