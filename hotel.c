#include <stdio.h>
#include <stdlib.h>
#include<windows.h>


int main() {
    char pass,ide;
	int a,c;
    int pershotel,locclient,chbre,posthotel,sclient,chm,resclient,vture;
    // menu d'accueil
    accueil:
    //system("cls");
	printf( "\t ********************************************" );
	printf("\n \t       BIENVENUE A  PI HOTEL");
	printf("\n\t *******************************************");	 
	printf("\n voulez-vous \n 1) vous connecter \n 2) ouvrir un compte\n");
	scanf("%d",&c);
	system("cls");
	if(c==1 || c==2){	
	switch(c){
		case 1:
			printf(" entrez votre identifiant \n");
			scanf("%S",&ide);
			printf(" entrez votre mot de pass\n");
			scanf("%S",&pass);
			system("cls");
			goto continu;
			break;
		case 2:
		  //  void creer_compte()	;
		  	break;
		default:
			system("cls");
			printf("numero invalide\n");
			printf("veuiller reessayer\n");
			goto accueil;
	}}else{
		system("cls");
		printf("numero invalide\n");
		printf("veuiller reessayer\n");
			goto accueil;
	}
	continu:
	printf("\n voulez-vous entrez dans le site  en tant que :\n 1) personnel de l'hotel \n 2) client\n 3)quitter\n");
	printf(" faites votre choix \n");
	scanf("%d",&a);
	retour :
	system("cls");
//1e menu du personnel

	if(a==1){
	
		printf("choisissez votre poste:\n 1) directeur de l'hotel \n 2) cuisinier/cuisiniere \n 3) valet de chambre \n ");
		printf("4) serveuse/serveur \n 5) receptionniste \n 6) vigile \n");
		scanf("%d",&posthotel);
		system("cls");
		// operation a effectuer par le personnel	
		operation:
			switch(posthotel){
			 	case 1:
					printf("\n que voulez-vous consulter: \n 0) menu precedent \n 1) salaire \n 2) horaire de travaile \n 3) declarer une absence \n ");
					printf("4)justifier une absence\n 5)ajouter un nouveau client\n 6)modifier les parametre d'un client\n 7)supprimer un client\n 8) menu d'accueil\n");
					scanf("%d",&pershotel);
					system("cls");
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
								printf("entrez les données du client\n");
								// void les identifiants();
					 			printf("veuiller reessayer,car inaccessible\n");
					 				goto operation;	
					 				break;
					 		case 6:
								printf("modifier le champ concerné\n");
								// void les identifiants();
						 		printf("veuiller reessayer,ce n'est pas encore disponible\n");
					 				goto operation;	
					 				break;
					 		case 7:
								printf("supprimer le client malhonnete\n");
								// void les identifiants();
						 		printf("veuiller reessayer,ce n'est pas encore disponible\n");
					 				goto operation;	
					 				break;
							 case 8:
							 	goto retour;
							 	break;
					 		default:
					 			system("cls");
					 			printf("numero invalide\n");
					 			printf("veuiller reessayer\n");
					 				goto operation;
					 		 }
						break;
				case 2:
					printf("\n que voulez-vous consulter: \n 1) salaire \n 2) horaire de travaile \n 3) declarer une absence \n  ");
					printf("4)justifier une absence\n 5)menu precedent\n 0)menu d'accueil\n");
					scanf("%d",&pershotel);
					system("cls");
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
						 			system("cls");
						 			printf("numero invalide\n");
						 			printf("veuiller reessayer\n");
						 				goto operation;
						 		 }
					        break;
				case 3:
					printf("\n que voulez-vous consulter: \n 1) salaire \n 2) horaire de travaile \n 3) declarer une absence \n ");
					printf(" 4)justifier une absence \n 5)menu precedent\n 0)menu d'accueil\n");
					scanf("%d",&pershotel);
					 		system("cls");
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
						 			system("cls");
						 			printf("numero invalide\n");
						 			printf("veuiller reessayer\n");
						 				goto operation;
					 			}
					 		break;
					 			case 4:
					 				printf("\n que voulez-vous consulter: \n 1) salaire \n 2) horaire de travaile \n 3) declarer une absence \n   ");
					 				printf("4)justifier une absence\n 5)menu precedent\n 0)menu d'accueil\n");
					 				scanf("%d",&pershotel);
					 				system("cls");
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
									 			system("cls");
									 			printf("numero invalide\n");
									 			printf("veuiller reessayer\n");
									 				goto operation;
					 					}
									break;
					 			case 5:
					 				printf("\n que voulez-vous consulter: \n 1) salaire \n 2) horaire de travaile \n 3) declarer une absence \n  ");
					 				printf("4)justifier une absence\n 5)menu precedent\n 0)menu d'accueil\n");
					 				scanf("%d",&pershotel);
					 				system("cls");
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
									 			system("cls");
									 			printf("numero invalide\n");
									 			printf("veuiller reessayer\n");
									 				goto operation;
									 		}
										break;
							 	case 6:
								 	printf("\n que voulez-vous consulter: \n 1) salaire \n 2) horaire de travaile \n 3) declarer une absence \n ");
								 	printf("4)justifier une absence\n 5)menu precedent\n 0)menu d'accueil\n");
							        scanf("%d",&pershotel);
							        system("cls");
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
								 			system("cls");
								 			printf("numero invalide\n");
								 			printf("veuiller reessayer\n");
								 				goto operation;
						 				}
						    		break;
							 	default:
							 		system("cls");
						 			printf("numero invalide\n");
						 			printf("veuiller reessayer\n");
						 				goto operation;
										 break;}
								/*default:
						 			printf("numero invalide\n");
						 			printf("veuiller reessayer\n");
						 				goto operation;
										 break;*/
				
				
	}
	system("cls");
	services: 
	if(a==2){
	
		//gestion de la partie client
		printf("\n Quel service souhaitez vous: \n 1) services de reservation \n 2) services de location\n ");
		printf("3) contacter le service client \n 4)menu precedent \n 0)menu d'accueil\n");
		scanf("%d",&sclient);
		system("cls");
		switch(sclient){
			case 0:
				goto accueil;
				break;
			case 1:
				printf("Que voulez vous reserver?\n 1)une chambre\n 2)une salle de conference/de seminaire \n 3)un vehicule\n");
				scanf("%d",&resclient);
				system("cls");
				voiture:
					switch(resclient){
						case 1:
							printf("choisir le niveau\n 1)chambre ventille \n 2)chambre climatiser (luxieuse)\n");
							scanf("%d",&chm);
							system("cls");
						
								switch(chm){
									case 1:
							 			printf("ce n'est pas encore accessibble'\n");
							 				goto services;	
							 				break;
									case 2:
							 			printf("ce n'est pas encore accessibble'\n");
							 				goto services;	
							 				break;
							 		default:
						 			printf("numero invalide\n");
						 			printf("veuiller reessayer\n");
						 				goto services;
											 }
							 		case 2:
										printf("ce n'est pas encore accessible (salle de conference)\n ");
							 				goto services;
							 				break;
									case 3:
										printf("choisir le niveau\n 1)bus de tourisme \n 2)voiture de luxe (luxieuse)\n");
							 			scanf("%d",&vture);
							 			system("cls");
								 			switch(vture){
												case 1:
										 			printf("ce n'est pas encore accessibble'\n");
										 			system("cls");
										 				goto services;	
										 				break;
												case 2:
										 			printf("ce n'est pas encore accessible'\n");
										 			system("cls");
										 				goto services;	
										 				break;
												default:
										 			printf("numero invalide\n");
										 			printf("veuiller reessayer\n");
										 				goto services;
										 					break;
											}
									default:
							 			printf("numero invalide\n");
							 			printf("veuiller reessayer\n");
							 				goto services;
								}
				case 2:
					//system("cls");
					printf("Que voulez vous location?\n 1)une chambre\n 2)une salle de conference/de seminaire \n 3)un vehicule\n");
				scanf("%d",&locclient);
				system("cls");
					switch(locclient){
						case 1:
							printf("choisir le niveau\n 1)chambre ventille \n 2)chambre climatiser (luxieuse)\n");
							scanf("%d",&chbre);
							system("cls");
						
								switch(chbre){
									case 1:
							 			printf("ce n'est pas encore accessibble'\n");
							 				goto services;	
							 				break;
									case 2:
							 			printf("ce n'est pas encore accessibble'\n");
							 				goto services;	
							 				break;
							 		default:
						 			printf("numero invalide\n");
						 			printf("veuiller reessayer\n");
						 				goto services;
										 }		
				break;
				case 2:
										printf("ce n'est pas encore accessible (salle de conference)\n ");
							 				goto services;
							 				break;
									case 3:
										printf("choisir le niveau\n 1)bus de tourisme \n 2)voiture de luxe (luxieuse)\n");
							 			scanf("%d",&vture);
							 			system("cls");
								 			switch(vture){
												case 1:
										 			printf("ce n'est pas encore accessibble'\n");
										 			system("cls");
										 				goto services;	
										 				break;
												case 2:
										 			printf("ce n'est pas encore accessible'\n");
										 			system("cls");
										 				goto services;	
										 				break;
												default:
										 			printf("numero invalide\n");
										 			printf("veuiller reessayer\n");
										 				goto services;
										 					break;
											}
									default:
							 			printf("numero invalide\n");
							 			printf("veuiller reessayer\n");
							 				goto services;
			break;	}						
				case 3:
					system("cls");	
					printf("LE CONTACT DE LA DIRECTION EST:\n\n +237 699-43-37-12/ +237 691-09-43-33 \n\n\n NOTRE ADRESS E-MAIL EST:\n\n WWW.PI_HOTEL.COM\n\n\n\n\n");
					goto continu;
					break;			
				case 4:
					system("cls");
						goto continu;	
					break;
								 	
				default:
					system("cls");
					printf("numero invalide\n");
					printf("veuiller reessayer\n");
						 	
						goto services ;
		}
	if(a==3){
	return 1;		
	}else{
		system("cls");
		printf("numero invalide\n");
		printf("veuiller reessayer\n");
			goto accueil;	
			}}}	

