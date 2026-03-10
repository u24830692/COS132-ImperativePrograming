#ifndef SURVIVAL_INTERFACE_H
#define SURVIVAL_INTERFACE_H

#include "Configuration.h"

#include <iostream>
#include <string>

namespace SURVIVALINTERFACE
{
    float calculateSurvivalIndex();

    bool isCombatReady();

    int getOutbreakDay(int totalHours);

    void scavengeSupplies();

    bool canReachSafeZone();

    unsigned int calculateInfectionRisk(short int zoneDangerLevel);

    bool hasEnoughFood();

    bool isLongRangeTrip();

    bool isVulnerable();

    bool canSprint();

    bool isPerfectHealth();

    void consumeFood();

    void useStamina();

    void recoverMorale();

    int getRemainingCapacity();

    double calculateTravelTime();

    void printReport();
}

#endif