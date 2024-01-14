#pragma once

// Hier kommt die Deklaration (und Beschreibung) von mergesort hin

#include <mergesort.hpp>
#include <vector>

/*
*   Zerlegt Array in Teil-Arrays und führt merge aus.
*   @param liste: Zu sortierender Vektor
*/
void mergesort(std::vector<int>& liste);

/*  
*   Vergleicht zwei Arrays und sortiert die Werte in übergeordnetem Array
*   @param links: Linke Seite des zerlegten Vektors von mergesort-Funktion
*   @param rechts: Rechte Seite des zerlegten Vektors von mergesort-Funktion
*   @param merged: Sortierungs-Ergebnis der Arrays links u. rechts
*/
void merge(const std::vector<int>& links, const std::vector<int>& rechts, std::vector<int>& merged);