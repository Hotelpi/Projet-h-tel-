#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	int a;
    int pershotel;
	printf( "\t ********************************************" );
	printf("\n \t       BIENVENUE A  PI HOTEL");
// 1er menu
	printf("\n\t *******************************************");
	TROUVE:
	printf("\n voulez-vous entrez dans le site  en tant que :\n 1) personnel de l'hotel \n 2) client\n");
	printf(" faites votre choix \n");
	scanf("%d",&a);//1e menu du personnel
	system("csl");
	
	if(a=1){
		retour : 
		printf("choisissez votre poste:\n 1) directeur de l'hotel \n 2) cuisinier/cuisiniere \n 3) valet de chambre \n 4) serveuse/serveur \n 5) receptionnste \n 6) vigile \n");
			scanf("%d",&pershotel);
			switch(pershotel){
				case 1:
					printf("\n que voulez-vous consulter: \n 1) salaire \n 2) horaire de travaile \n 3) declarer une absence \n 4)justifier une absence\n 100)menu precedent\n 0)menu d'accueil' ");
					 break;
					 case 2:
					 		printf("\n que voulez-vous consulter: \n 1) salaire \n 2) horaire de travaile \n 3) declarer une absence \n 4)justifier une absence\n 100)menu precedent\n 0)menu d'accueil' ");
					 	break;
					 	case 3:
					 			printf("\n que voulez-vous consulter: \n 1) salaire \n 2) horaire de travaile \n 3) declarer une absence \n 4)justifier une absence \n 100)menu precedent\n 0)menu d'accueil'");
					 		break;
					 			case 4:
					 					printf("\n que voulez-vous consulter: \n 1) salaire \n 2) horaire de travaile \n 3) declarer une absence \n 4)justifier une absence\n 100)menu precedent\n 0)menu d'accueil' ");
					 		break;
					 			case 5:
					 					printf("\n que voulez-vous consulter: \n 1) salaire \n 2) horaire de travaile \n 3) declarer une absence \n 4)justifier une absence \n 1OO)menu precedent\n 0)menu d'accueil'");
					 		break;
							 	case 6:
							 			printf("\n que voulez-vous consulter: \n 1) salaire \n 2) horaire de travaile \n 3) declarer une absence \n 4)justifier une absence \n 100)menu precedent\n 0)menu d'accueil\n");
					 		break;
					 		case 0:
							 goto TROUVE;
							 case 100:
							 	goto retour;
				
					 		default:
					 			printf("numero invalide");
					 		
		
	}	}
	return 0;
	
}
