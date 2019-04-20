#ifdef CONFIG_H
#include CONFIG_H
#endif

#ifdef TIME_C
#pragma once
#define RAW_C
#define FLICKS_C
#define DATE_C
#endif

#include "time_raw.c"
#include "time_flicks.c"
#include "time_date.c"
