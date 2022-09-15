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
        struct RaceCare{
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
            printf("vitesse: %d\n",vitesse);

     acceleration = (rand() % (max- min+ 1)) + min;
            printf("acceleration:%d\n",acceleration);

     nerves = (rand() % (max- min+ 1)) + min;
            printf("nerves: %d\n",nerves);

     S= vitesse + acceleration + nerves;

          return S;
        }

int main()
{
    int i;
    printIntro();
    printCountDown(i);
   // struct Race racer1 = {1, "MOHAMED CHKIR","noir" };
    srand(time(0));
};
