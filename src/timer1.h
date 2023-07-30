#pragma once
#include <raylib.h>

class GameTimer 
{
public:
    GameTimer();
    void StartTimer(float time);
    bool RunTimer();
    float timerDuration;
    float* timerptr;
private:
    
    
};