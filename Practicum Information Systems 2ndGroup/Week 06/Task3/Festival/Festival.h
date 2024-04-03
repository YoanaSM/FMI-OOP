#pragma once
#include "Projection.h"
#include <iostream>
constexpr int MAX_PROJECTIONS = 100;
constexpr int FEST_NAME = 30;
class Festival
{
private:

    char festivalName[FEST_NAME + 1];
    Projection projections[MAX_PROJECTIONS];
    unsigned numProjections;

public:
    Festival(const char* festivalName);

    void setFestivalName(const char* festivalName);
    void addProjection(const Projection& projection);

    const char* getFestivalName() const;
    const Projection* getProjections() const;
    int getNumProjections() const;
};