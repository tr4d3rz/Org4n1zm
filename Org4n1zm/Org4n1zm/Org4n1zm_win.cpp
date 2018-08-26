// Org4n1zm.cpp: definisce le funzioni esportate per l'applicazione DLL.
//

#include "stdafx.h"
#include "Org4n1zm_win.h"


// Esempio di variabile esportata
ORG4N1ZM_API int nOrg4n1zm=0;

// Esempio di funzione esportata.
ORG4N1ZM_API int fnOrg4n1zm(void)
{
    return 42;
}

// Costruttore di una classe esportata.
// Vedere Org4n1zm.h per la definizione della classe
COrg4n1zm::COrg4n1zm()
{
    return;
}
