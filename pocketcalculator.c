#include <stdio.h>
#include <float.h>
int main(int argc, char const *argv[])
{
   double* firstNumber;
   double* secondNumber;
   int choice;

   choice = PrintMenu();
   GetOperants(&firstNumber, &secondNumber);
   ExecuteOption(choice, &firstNumber, &secondNumber);

  return 0;
}

void PrintMenu()
{
  int choice;
  printf("Add (1), Subtract (2), Multiply (3), Divide (4), Stop program(-1) Enter your choice: ");
  scanf("%d", &choice);
}
void ExecuteOption(int choice, double firstNumber, double secondNumber)
{
  switch (choice) {
    case 1:
      Add(firstNumber, secondNumber);
      break;
    case 2:
      Subtract(firstNumber, secondNumber);
      break;
    case 3:
     Multiply(firstNumber, secondNumber);
      break;
    case 4:
      Divide(firstNumber, secondNumber);
      break;
      case -1:
      break;
      default:
        printf("inavlid input, please try again\n");
        PrintMenu();
        break;
  }
}

  void GetOperants(double* firstNumber, double* secondNumber)
{
    printf("First operand: ");
    scanf("%lf\n", firstNumber);

    printf("Second operand: ");
    scanf("%lf\n", secondNumber);
  }

  void Add(double firstNum, double secondNum)
  {
      int result =  firstNum + secondNum;
      PrintResult(result);

  }
  void Subtract(double firstNum, double secondNum)
  {
      int result = firstNum - secondNum;
      PrintResult(result);
  }

  void Multiply(double firstNum, double secondNum) {
    int result =  firstNum * secondNum;
    PrintResult(result);
  }

  void Divide(double firstNum, double secondNum)
  {
    int result;
    if (secondNum == 0) {
      GetOperants(&firstNum, &secondNum);
    }
    else{
      result =  firstNum / secondNum;
      PrintResult(result);
    }
  }

  void PrintResult(double result)
  {
    if(result < DBL_MIN ){

        printf("Number Overflow\n");

    }

    else if(result > DBL_MAX ){

        printf("Number Overflow\n");
    }

    else{

      printf("Ergebnis : %lf \n",result );
    }


  }
