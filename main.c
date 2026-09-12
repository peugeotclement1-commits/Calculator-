

#include <stdio.h>

int nb_metres;
int heure;
int minute;
int secondes;
int programme = 0;

int verif(int heure, int minute, int seconde){
	if(seconde > 60){
		seconde=0;
		minute+=1;
	}
	if (minute>60){
		minute=0;
		heure+=1;
	}
	return 0;
}


double fonction_calcul_kmh(int heure, int minute, int seconde, int nb_metres){
	double nb_minutes = heure*60+minute+(seconde/60.0);
	double nb_kmh=nb_metres*60.0/nb_minutes;
	nb_kmh/=1000;
	printf("Ça nous fait %.3f km/h.\n",nb_kmh);
	return nb_kmh;
}

void fonction_calcul_minkm(int heure, int minute, int seconde, int nb_metres){
	double minperkm;
	minperkm=60/fonction_calcul_kmh(heure , minute, seconde, nb_metres);
	printf("Ça nous fait %.2f min/km ", minperkm);	
}

void fonction_choisir(int choix, int heure, int minute, int seconde, int nb_metres){
	switch(choix){
		case 1:
			fonction_calcul_minkm(heure, minute, seconde, nb_metres);
			break;
		case 2:
			fonction_calcul_kmh(heure, minute, seconde, nb_metres );
			break;
		default:
			printf("Wrong choice");
	}
}

void stopper_programme(){
	char stopper;
	printf("Si vous souhaitez stopper le programme, tapez 'stopper'");
	scanf("%c", &stopper);
	if (stopper=="stopper"){
		programme=1;
	}else {
		programme=2;
	}
}

int main(void){
	while(programme!=1){
		printf("Bienvenue dans le calculateur de km/h.\n");
		printf("Si km/h -> 1\nSi min/km -> 2\nVotre choix : ");
		int choix;
		scanf("%d",&choix);
		int nb_metres;
		printf("nombre de metres : ");
		scanf("%d", &nb_metres);
		int nb_heure;
		printf("nombre d'heures : "); 
		scanf("%d", &nb_heure);
		int nb_minute;
		printf("nombre de minutes : ");
		 scanf("%d", &nb_minute);
		int nb_seconde;
		printf("nombre de secondes : ");
		scanf("%d", &nb_seconde)
		stopper_programme();
		fonction_choisir(choix, nb_heure, nb_minute, nb_seconde, nb_metres);
	}
}























