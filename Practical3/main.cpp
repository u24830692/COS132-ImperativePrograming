#include <iostream>
#include "Configuration.h"
#include "SurvivalInterface.h"

using namespace std;

int main()
{
    cout << "=== Zombie Survival Test ===" << endl;
        
    // Testing the basic functions
    cout << "Survival Index: " << SURVIVALINTERFACE::calculateSurvivalIndex() << "%" << endl;
    
    cout << "Combat Ready? " << SURVIVALINTERFACE::isCombatReady() << endl;
    
    cout << "Has Enough Food? " << SURVIVALINTERFACE::hasEnoughFood() << endl;
    
    cout << "Long Range Trip? " << SURVIVALINTERFACE::isLongRangeTrip() << endl;
    
    cout << "Day (0 hours): " << SURVIVALINTERFACE::getOutbreakDay(0) << endl;
    cout << "Day (40 hours): " << SURVIVALINTERFACE::getOutbreakDay(40) << endl;
    
    // Test scavenge
    cout << "Scavenging supplies..." << endl;
    SURVIVALINTERFACE::scavengeSupplies();
    
    // Final report
    cout << "\nFinal Report:" << endl;
    SURVIVALINTERFACE::printReport();

    return 0;
}