#include <stdio.h>
#include <stdlib.h>
#include<windows.h>


int main() {

	int a;
    int pershotel,posthotel,sclient,chm,resclient,vture;
    accueil:
    system("cls");
	printf( "\t ********************************************" );
	printf("\n \t       BIENVENUE A  PI HOTEL");
// menu d'accueil
	printf("\n\t *******************************************");
		 
	printf("\n voulez-vous entrez dans le site  en tant que :\n 1) personnel de l'hotel \n 2) client\n");
	printf(" faites votre choix \n");
	scanf("%d",&a);
	retour :
	system("cls");
//1e menu du personnel

	if(a=1){
	
		printf("choisissez votre poste:\n 1) directeur de l'hotel \n 2) cuisinier/cuisiniere \n 3) valet de chambre \n 4) serveuse/serveur \n 5) receptionniste \n 6) vigile \n");
			scanf("%d",&posthotel);
		// operation a effectuer par le personnel	
			operation:
			system("cls");
		
			switch(posthotel){
				
			 	case 1:
					printf("\n que voulez-vous consulter: \n 0) menu precedent \n 1) salaire \n 2) horaire de travaile \n 3) declarer une absence \n 4)justifier une absence\n 5) menu d'accueil\n ");
					scanf("%d\n",&pershotel);
					switch(pershotel){
					
					 		case 0:
							 goto accueil;
							 break;
							case 1:
							printf("ce n'est pas encore disponible\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;	
					 				break;
					 		case 2:
							printf("ce n'est pas encore disponible\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;
					 				break;
							case 3:
							printf("ce n'est pas encore disponible\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;	
					 				break;
							case 4:
							printf("ce n'est pas encore disponible\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;	
					 				break;
							 case 5:
							 	goto retour;
							 	break;
					 		default:
					 			printf("numero invalide\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;
					 		 }
					 break;
					 case 2:
					 		printf("\n que voulez-vous consulter: \n 1) salaire \n 2) horaire de travaile \n 3) declarer une absence \n 4)justifier une absence\n 5)menu precedent\n 0)menu d'accueil\n ");
					 		scanf("%d",&pershotel);
					 		switch(pershotel){
					 		case 0:
							 goto accueil;
							 break;
							case 1:
							printf("ce n'est pas encore disponible\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;	
					 				break;
					 		case 2:
							printf("ce n'est pas encore disponible\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;
					 				break;
							case 3:
							printf("ce n'est pas encore disponible\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;	
					 				break;
							case 4:
							printf("ce n'est pas encore disponible\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;	
					 				break;
							 case 5:
							 	goto retour;
							 	break;
					 		default:
					 			printf("numero invalide\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;
					 		 }
					 break;
					 	case 3:
					 			printf("\n que voulez-vous consulter: \n 1) salaire \n 2) horaire de travaile \n 3) declarer une absence \n 4)justifier une absence \n 5)menu precedent\n 0)menu d'accueil\n ");
					 	scanf("%d",&pershotel);
					 		switch(pershotel){
					 		case 0:
							 goto accueil;
							 system("cls");
							 break;
							case 1:
							printf("ce n'est pas encore disponible\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;	
					 				break;
					 		case 2:
							printf("ce n'est pas encore disponible\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;
					 				break;
							case 3:
							printf("ce n'est pas encore disponible\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;	
					 				break;
							case 4:
							printf("ce n'est pas encore disponible\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;	
					 				break;
							 case 5:
							 	goto retour;
							 	break;
					 		default:
					 			printf("numero invalide\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;
					 		 }
					 		break;
					 			case 4:
					 					printf("\n que voulez-vous consulter: \n 1) salaire \n 2) horaire de travaile \n 3) declarer une absence \n 4)justifier une absence\n 5)menu precedent\n 0)menu d'accueil\n  ");
					 			scanf("%d",&pershotel);
					 		switch(pershotel){
					 		case 0:
							 goto accueil;
							 break;
							case 1:
							printf("ce n'est pas encore disponible\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;	
					 				break;
					 		case 2:
							printf("ce n'est pas encore disponible\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;
					 				break;
							case 3:
							printf("ce n'est pas encore disponible\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;	
					 				break;
							case 4:
							printf("ce n'est pas encore disponible\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;	
					 				break;
							 case 5:
							 	goto retour;
							 	break;
					 		default:
					 			printf("numero invalide\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;
					 		 }
					 break;
					 			case 5:
					 			printf("\n que voulez-vous consulter: \n 1) salaire \n 2) horaire de travaile \n 3) declarer une absence \n 4)justifier une absence \n 5)menu precedent\n 0)menu d'accueil\n ");
					 		scanf("%d",&pershotel);
					 		switch(pershotel){
					 		case 0:
							 goto accueil;
							 break;
							case 1:
							printf("ce n'est pas encore disponible\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;	
					 				break;
					 		case 2:
							printf("ce n'est pas encore disponible\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;
					 				break;
							case 3:
							printf("ce n'est pas encore disponible\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;	
					 				break;
							case 4:
							printf("ce n'est pas encore disponible\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;	
					 				break;
							 case 5:
							 	goto retour;
							 	break;
					 		default:
					 			printf("numero invalide\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;
					 		 }
					 break;
							 	case 6:
							 	printf("\n que voulez-vous consulter: \n 1) salaire \n 2) horaire de travaile \n 3) declarer une absence \n 4)justifier une absence \n 5)menu precedent\n 0)menu d'accueil\n");
						        scanf("%d",&pershotel);
					 		switch(pershotel){
					 		case 0:
							 goto accueil;
							 break;
							case 1:
							printf("ce n'est pas encore disponible\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;	
					 				break;
					 		case 2:
							printf("ce n'est pas encore disponible\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;
					 				break;
							case 3:
							printf("ce n'est pas encore disponible\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;	
					 				break;
							case 4:
							printf("ce n'est pas encore disponible\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;	
					 				break;
							 case 5:
							 	goto retour;
							 	break;
					 		default:
					 			printf("numero invalide\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;
					 		 }
					 break;
							 	default:
					 			printf("numero invalide\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;
									 break;}
			
		
} if(a==2){
		
		//gestion de la partie client
	services:
		printf("\n Quel service souhaitez vous: \n 1) services de reservation \n 2) services de location\n 3) contacter le service client \n 4)menu precedent \n 0)menu d'accueil\n ");
		scanf("%d",&sclient);
					 		switch(sclient){
					 		case 0:
							 goto accueil;
							 break;
							case 1:
							printf("Que voulez vous reserver?\n 1)une chambre\n 2)une salle de conference/de seminaire \n 3)un vehicule");
								switch(resclient){
							case 1:
							printf("choisir le niveau\n 1)chambre ventille \n 2)chambre climatiser (luxieuse)");
							scanf("%d",&chm);
							switch(chm){
							case 1:
					 			printf("ce n'est pas encore accessibble'\n");
					 				goto services;	
					 				break;
							case 2:
					 			printf("ce n'est pas encore accessibble'\n");
					 				goto services;	
					 				break;
									 }
					 		case 2:
							printf("ce n'est pas encore accessible (salle de conference)\n ");
					 				goto services;
					 				break;
							case 3:
							printf("choisir le niveau\n 1)bus de tourisme \n 2)voiture de luxe (luxieuse)\n");
					 			scanf("%d",&vture);
					 			switch(chm){
							case 1:
					 			printf("ce n'est pas encore accessibble'\n");
					 				goto services;	
					 				break;
							case 2:
					 			printf("ce n'est pas encore accessible'\n");
					 				goto services;	
					 				break;}}
					 	case 3:
						 printf("ce n'est pas encore accessible(le teleconseillez est insdisponible)\n");			
					 		case 4:
					 			goto services;	
					 				break;
					 	
					 		default:
					 			printf("numero invalide\n");
					 			printf("veuiller reessayer\n");
					 				goto services;
	}
	
	return 0; 
	     }}

