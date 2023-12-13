// CursovaRabota.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm> //Видяно от нета

int RombS(int a, int h);

using namespace std;
int main()
{
    int a, h, s;
    int arrayOfRombs[20];
    int currentArrayIndex = 0;
    char choice;

    do
    {
        printf("Enter value for A:\n");
        scanf_s("%d", &a);
        printf("Enter value for H:\n");
        scanf_s("%d", &h);
        s = RombS(a, h);

        if (currentArrayIndex < 20)
        {
            arrayOfRombs[currentArrayIndex] = s;
            currentArrayIndex++;
        }
        else
        {
            printf("Array of Rombs is full!\n");      
            break;
        }
        printf("S =%d\n", s);

        printf("Want to enter more values? Y/N\n");     
        //scanf_s("%c", &choice); //със scanf_s не работи
        cin >> choice;

       // if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N')       
          //  printf("Invalid answer. Try again!\n");
                  
    } 
    while (choice != 'n' && choice != 'N');

    printf("Array of Rombs: ");

    std::sort(arrayOfRombs, arrayOfRombs + currentArrayIndex, std::greater<int>());

    for (int i = 0; i < currentArrayIndex; i++)
    {     
        printf("%d ", arrayOfRombs[i]);
    }
  
}

int RombS(int a, int h)
{
    int s = a * h;
    return s;

}



