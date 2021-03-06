﻿#ifndef CYCLE_H
#define CYCLE_H

#include "common.h"

class QueueCycle: public Common
{
public:
    QueueCycle() {}
    QueueCycle(Display *parent);
    ~QueueCycle() {}

    void Add(int a);
    int Remove(int n);
};

#endif // CYCLE_H
