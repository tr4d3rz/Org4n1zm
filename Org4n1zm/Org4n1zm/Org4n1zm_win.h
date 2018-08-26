// Il seguente blocco ifdef rappresenta il modo standard di creare macro che semplificano 
// l'esportazione da una DLL. Tutti i file all'interno della DLL sono compilati con il simbolo ORG4N1ZM_EXPORTS
// definito nella riga di comando. Questo simbolo non deve essere definito in alcun progetto
// che utilizza questa DLL. In questo modo qualsiasi altro progetto i cui file di origine includono questo file vedranno le funzioni 
// ORG4N1ZM_API come importate da una DLL, mentre la DLL vedrà i simboli
// definiti con questa macro come esportati.
#ifdef ORG4N1ZM_EXPORTS
#define ORG4N1ZM_API __declspec(dllexport)
#else
#define ORG4N1ZM_API __declspec(dllimport)
#endif

#include "Org4n1zm.h"

// Questa classe è esportata da Org4n1zm.dll
class ORG4N1ZM_API COrg4n1zm {
public:
	COrg4n1zm(void);
	// TODO: aggiungere qui i metodi.
};

extern ORG4N1ZM_API int nOrg4n1zm;

ORG4N1ZM_API int fnOrg4n1zm(void);
