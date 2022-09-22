#include <iostream>

using namespace std;


int main() {
    // TODO : Take input instead of declaring variable
    float distanceInKm = 17.5; // Echallens -> Yverdon HEIG-VD
    float trainTicketPrice = 4.6; // Trajet simple avec demi-tarif
    float carAvgConsumption = 3.3; // Liter / 100km Motorcycle CB 500 x 2017
    float gasPricePerLiter = 1.94; // https://www.tcs.ch/fr/camping-voyages/informations-touristiques/bon-a-savoir/peages-frais/prix-essence-europe.php
    float carDepreciationCostByKm = 0.4;

    const float carTravelConsumption = distanceInKm * carAvgConsumption / 100;
    const float carTravelGasCost = carTravelConsumption * gasPricePerLiter;
    const float carDepreciation = distanceInKm * carDepreciationCostByKm;
    const float carTravelTotalCost = carTravelGasCost + carDepreciation;

    cout << "Ton trajet a un cout de " << carTravelTotalCost << " frs en voiture / moto" << endl;

    return 0;
}
