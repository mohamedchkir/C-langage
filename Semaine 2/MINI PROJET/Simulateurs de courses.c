#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Structures section
        struct Race{
         int numberOfLaps;
         int currentLap;
         char firstPlaceDriverName[100];
         char firstPlaceRaceCarColor[100];
        };
        struct RaceCar{
         char driverName[100];
         char raceCarColor[100];
         int totalLapTime;
        };
// Print functions section
        void printIntro(){
         printf("\t\t Bienvenue a notre evenement principal, les fans de course numerique!     \n");
         printf("\t\tJ'espere que tout le monde a pris son gouter car nous allons commencer!  \n\n  ");
        }

        void printCountDown(int i){
          printf("La course commence en quelque instant......\n");
         for( i = 5; i > 0; i--){
          printf("%d\n", i);
          sleep(1);
        }
          printf("Allez course!!!!!");
        }
        void printFirstPlaceAfterLap(struct Race race) {
          printf("apres le tour numero %d\n",race.currentLap);
          printf("la premiere place est occupee par:%s ,",race.firstPlaceDriverName);
          printf("dans la voiture de course:%s !\n",race.firstPlaceRaceCarColor);
        }
         void printCongratulation(struct Race race) {
          printf("Félicitons tous %s, dans la voiture de course %s, ",race.firstPlaceDriverName,race.firstPlaceRaceCarColor);
          printf("pour son incroyable performance,\n en ce moment Nous annonçons la fin de la course bon nuit a tous!!!!!\n");
        }
// Logic functions section
         int calculateTimeToCompleteLap(){
            int vitesse;
            int acceleration;
            int nerves;
            int max=3,min=1;
            int S;
        srand(time(0));
     vitesse = (rand() % (max- min+ 1)) + min;

     acceleration = (rand() % (max- min+ 1)) + min;

     nerves = (rand() % (max- min+ 1)) + min;

     S= vitesse + acceleration + nerves;

          return S;
        }
        void updateRaceCar(struct RaceCar* raceCar){

            raceCar-> totalLapTime += calculateTimeToCompleteLap();
        }
        void updateFirstPlace(struct Race* race ,struct RaceCar* raceCar1,struct RaceCar* raceCar2){

         if(raceCar1->totalLapTime > raceCar2->totalLapTime){
            strcpy(race->firstPlaceDriverName,raceCar2->driverName);
            strcpy(race->firstPlaceRaceCarColor,raceCar2->raceCarColor);
        }
         else{
            strcpy(race->firstPlaceDriverName,raceCar1->driverName);
            strcpy(race->firstPlaceRaceCarColor,raceCar1->raceCarColor);
        }
        race->currentLap++;
        }
        void startRace(struct Race race,struct RaceCar* raceCar1,struct RaceCar* raceCar2){
            race.numberOfLaps=5;
            race.currentLap=1;
            strcpy(race.firstPlaceDriverName,"");   //utiliser strcpy sur la structure pour ajouter la nouvelle valeur
            strcpy(race.firstPlaceRaceCarColor,"");

            for(int i=0;i<5;i++){
                updateRaceCar(&raceCar1);
                updateRaceCar(&raceCar2);
                updateFirstPlace(&race, &raceCar1, &raceCar2);
                printFirstPlaceAfterLap(race);
       }
          printCongratulation(race);
  }
int main(){
    int i;


    struct RaceCar raceCar1 = {.totalLapTime=0};
    strcpy(raceCar1.driverName, "gg");
    strcpy(raceCar1.raceCarColor, "rag");
    struct RaceCar raceCar2 = {.totalLapTime=0};;
    strcpy(raceCar2.driverName, "ddd");
    strcpy(raceCar2.raceCarColor, "rauq");

    printIntro();
    printCountDown(i);
    struct Race race ;
    startRace(race,&raceCar1, &raceCar2);
   // struct Race racer1 = {1, "MOHAMED CHKIR","noir" };
    srand(time(0));
};
