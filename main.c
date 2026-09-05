#include <stdio.h>
#include <window>

int nb_metres;
int heure;
int minute;
int secondes;

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

int fonction_choisir(int choix){
	switch(choix){
		case 1:
			return 1;
			break;
		case 2:
			return 2;
			break;
		default:
			printf("Wrong choice");
			return 0;
	}
}

void fonction_calcul(int heure, int minute, int seconde, int nb_metres){
	double nb_minutes = heure*60+minute+(seconde/60.0);
	double nb_kmh=nb_metres*60.0/nb_minutes;
	nb_kmh/=1000;
	printf("Ça nous fait %.3f km/h.",nb_kmh);
}

int main(void){
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
	scanf("%d", &nb_seconde);
	fonction_calcul(nb_heure, nb_minute, nb_seconde, nb_metres);	
	return 0;
}


