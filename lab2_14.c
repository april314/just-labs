/* Шар. Разработать программу, меню которой позволяет выполнить следующие
функции:
● Ввод радиуса шара.
● Вывод площади поверхности шара.
● Вывод объема шара.
● Вывод длины ребра вписанного правильного тетраэдра.
● Вывод площади сечения, проведенного на расстоянии k от центра шара.
● Информация о версии и авторе программы.
● Выход из программы. */
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

void radius_input(double * radius);
int menu();
void area_output(double * radius);
void volume_output(double * radius);
void tetrlen_output(double * radius);
void sectarea_output(double * radius, double * k);

void info();

int main()
{
	double radius;
	double k;
	int choice;
	
	printf("Hello! ");
	radius_input(&radius);
	if (radius == 0) {
		printf("Bye!\n");
	}
	else {
	  while ((choice = menu()) != 7) {
		
		switch(choice)
		{
			case 1:
			area_output(&radius);
			break;
			
			case 2:
			volume_output(&radius);
			break;
			
			case 3:
			tetrlen_output(&radius);
			break;
			
			case 4:
			sectarea_output(&radius, &k);
			break;
			
			case 5:
			info();
			break;
			
			case 6:
			{
				radius_input(&radius);
				if (radius == 0) {
					printf("Bye!\n");
					break;
				}
				else //another menu-switch
					continue;
			}
		}
	  }
	}
	
	return 0;
}

void radius_input(double * radius)
{
	printf("Enter radius of an Orb (0 to quit): ");
	while (scanf("%lf", radius) != 1) {
		fflush(stdin); //clean the wrong input
		printf("Wrong! Enter radius again: ");
	}
}

int menu()
{
	int choice;
	
	printf("\n1. Show me area.\n");
	printf("2. Show me volume.\n");
	printf("3. Show me the length of an edge of the regular tetrahedron inside the Orb\n");
	printf("4. Show me the area of the section of the Orb\n");
	printf("5. Show me info\n");
	printf("6. Enter new Orb radius\n");
	printf("7. Let me go!");
	
	printf("\n\nEnter: ");
	while (scanf("%d", &choice) != 1 || choice < 1 || choice > 7 )
	{
		fflush(stdin); //clean the wrong input
		printf("Wrong! Enter again: ");
	}
	
	return choice;
}

void area_output(double * radius)
{
	double area;
	area = 4 * M_PI * *radius * *radius;
	printf("Area = %f\n", area);
}

void volume_output(double * radius)
{
	double volume;
	volume = 4 / 3 * M_PI * *radius * *radius * *radius;
	printf("Volume = %f\n", volume);
}

void tetrlen_output(double * radius)
{
	double a;
	a = 4 * *radius / sqrt(6);
	printf("Length = %f\n", a);
}

void sectarea_output(double * radius, double * k)
{
	double rad;
	double area;
	printf ("Enter K = ");
	scanf("%lf", k);
	rad = sqrt(*radius * *radius - (*k) * (*k));
	area = M_PI * rad * rad;
	printf("Area = %f\n", area);
}

void info()
{
	printf("\nHello there!\n I'm a young aspiring computer science student Nastya\n Contact me via pigeon post\n See ya\n");
}