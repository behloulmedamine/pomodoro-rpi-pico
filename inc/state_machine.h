// STATE_MACHINE_H

#ifndef STATE_MACHINE_H
#define STATE_MACHINE_H

#include "timer_.h"

typedef struct
{
    uint8_t sessions;
    uint8_t workDuration;
    uint8_t shortBreak;
    uint8_t longBreak;
    uint8_t currentMinute;
    uint8_t currentSecond;
    uint8_t currentSession;
} time_s;

typedef enum
{
    HOME,
    SETTINGS,
    SESSIONS,
    WORKDURATION,
    SHORTBREAK,
    LONGBREAK,
    TASKS_DONE,
    GAME,
    SIMON,
    MASTERMIND
} pomodoro_e;

extern pomodoro_e state;

extern volatile uint8_t interrupt_flag;

extern bool mute;

void __init();

void home_state();
void settings_state();
void sessions_state();
void work_duration_state();
void short_break_state();
void long_break_state();
void tasks_done_state();
void games_state();
void simon_game_state();
void mastermind_game_state();

#endif