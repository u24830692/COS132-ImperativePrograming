#include "SurvivalInterface.h"

using namespace std;

float SURVIVALINTERFACE::calculateSurvivalIndex() {
    float SurvivalIndex = CONFIGURATION::BASE_RATE + (5 * CONFIGURATION::fitnessLevel) + (2.5 * CONFIGURATION::foodCans) - (1.2 * CONFIGURATION::distance);

    return SurvivalIndex;
}

bool SURVIVALINTERFACE::isCombatReady() {
   return (CONFIGURATION::fitnessLevel > 7) && (CONFIGURATION::foodCans > 5); //i just chose to go straight to returning instead of using other things like possibly a ternary if statement or an if - else coz that seems like to much work 
}

int SURVIVALINTERFACE::getOutbreakDay(int totalHours) {
    return (totalHours / 24) % 7;
}

void SURVIVALINTERFACE::scavengeSupplies() {
    int foundCans;
    cout << "How many cans did you find?" << endl;
    cin >> foundCans;

    CONFIGURATION::foodCans += foundCans;
}

bool SURVIVALINTERFACE::canReachSafeZone() {
    double fuelAvailable;
    cout << "How much fuel do you have available?" << endl;
    cin >> fuelAvailable;

    return (CONFIGURATION::FUEL_EFFICIENCY * fuelAvailable) > CONFIGURATION::distance;
}

unsigned int SURVIVALINTERFACE::calculateInfectionRisk(short int zoneDangerLevel) {
    return (zoneDangerLevel * CONFIGURATION::distance)/CONFIGURATION::fitnessLevel;
}

bool SURVIVALINTERFACE::hasEnoughFood() {
    return (CONFIGURATION::foodCans >= 10);
}

bool SURVIVALINTERFACE::isLongRangeTrip() {
    return (CONFIGURATION::distance > 50);
}

bool SURVIVALINTERFACE::isVulnerable() {
    return (CONFIGURATION::fitnessLevel < 3) || (CONFIGURATION::foodCans < 2);
}

bool SURVIVALINTERFACE::canSprint() {
    return (CONFIGURATION::stamina >= 20) && (CONFIGURATION::fitnessLevel >= 5);
}

bool SURVIVALINTERFACE::isPerfectHealth() {
    return (CONFIGURATION::fitnessLevel == 10);
}

void SURVIVALINTERFACE::consumeFood() {
    CONFIGURATION::foodCans -= 1;
    CONFIGURATION::stamina += 5;
}

void SURVIVALINTERFACE::useStamina() {
    int staminaLoss;
    cout << "How much stamina did you loose?"<< endl;
    cin >> staminaLoss;
    CONFIGURATION::stamina -= staminaLoss; 
    if (CONFIGURATION::stamina < 0) {
        CONFIGURATION::stamina = 0;
    }
}

void SURVIVALINTERFACE::recoverMorale() {
    int moraleBoost;
    cout << "With how much did your morale get boosted?" << endl;
    cin >> moraleBoost;
    CONFIGURATION::morale += moraleBoost;
    if (CONFIGURATION::morale > 100) {
        CONFIGURATION::morale = 100;
    }
}

int SURVIVALINTERFACE::getRemainingCapacity() {
    int maxCapacity;
    cout << "What is the maximum capacity of food storage?"<< endl;
    cin >> maxCapacity;
    int availableCans = maxCapacity - CONFIGURATION::foodCans;
    if (availableCans < 0) {
        availableCans = 0;
    }
    return availableCans;
}

double SURVIVALINTERFACE::calculateTravelTime() {
    int speed;
    cout << "How fast will you be moving(km/h)?"<< endl;
    cin >> speed;
    if (speed <= 0) {
        return 0.0;
    }
    return CONFIGURATION::distance / speed;
}

void SURVIVALINTERFACE::printReport() {
    //for step 1
    int hours;
    cout << "When did the outbreak occur?" << endl;
    cin >> hours;

    //for step 2

    cout << "--- FINAL SURVIVAL REPORT ---" << endl;
    cout << "------ DAY OF THE WEEK ------" << endl;
    cout << SURVIVALINTERFACE::getOutbreakDay(hours) << endl;
    cout << "Survivor: " << CONFIGURATION::playerName << endl;
    cout << "Fitness: " << CONFIGURATION::fitnessLevel<< "/10" << endl;
    cout << "Supplies: " << CONFIGURATION::foodCans << " cans" << endl;
    cout << "Enough Food? [1=Yes, 0=No]: " << SURVIVALINTERFACE::hasEnoughFood() << endl;
    cout << "Vulnerable? [1=Yes, 0=No]: " << SURVIVALINTERFACE::isVulnerable() << endl;
    cout << "Can Sprint? [1=Yes, 0=No]: " << SURVIVALINTERFACE::canSprint() << endl;
    cout << "Combat Ready? [1=Yes, 0=No]: " << SURVIVALINTERFACE::isCombatReady() << endl;
    cout << "Perfect Health? [1=Yes, 0=No]: " << SURVIVALINTERFACE::isPerfectHealth() << endl;
    cout << "Distance: " << CONFIGURATION::distance << " km" << endl;
    cout << "Survival Index: " << SURVIVALINTERFACE::calculateSurvivalIndex() << "%" << endl;
    cout << "-----------------------------" << endl;

}