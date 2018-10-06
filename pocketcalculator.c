/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 2
 * Title:			Pocketcalaculator
 * Author:			Rieser Felix
 * ----------------------------------------------------------
 * Description:
 * A Calucalor, who can add, subtract, mulitply and divide.
 * ----------------------------------------------------------
 */

#include <stdio.h>
int main(int argc, char const *argv[]) {

  int selection = displayMenu();
  execute(selection);
}

int displayMenu(){

    int selection;

    printf("add      (1)\n");
    printf("subtract (2)\n");
    printf("divide   (3)\n");
    printf("multiply (4)\n");
    printf("stop     (-1)\n");

    scanf("%d : \n", &selection );

    return selection;
}

void execute(int selection){

  double firstAdd;
  double secondAdd;

  switch (selection) {
      case 1:

        firstAdd  =  getOperands();
        secondAdd =  getOperands();

        int res = add(firstAdd, secondAdd);

        printResults(res);

        break;
      case 2:

        subtract();

        break;
      case 3:

        divide();

        break;
      case 4:

        multiply();

        break;
      case -1:

        break;

      default:

      printf("Ungültige eingabe!");

      break;
    }
}

int getOperandsperants(){

int back;

scanf("%d \n",back );

return back;

}

int add(int firstN, int secondN){

int back = firstN + secondN;

return back;

}

void printResults(int res){

printf("Ergebnis : %d \n",res );
}
