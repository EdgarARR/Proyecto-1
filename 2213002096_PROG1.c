#include<stdio.h>
int main()
{
	float examen1, examen2, examen3;
	float tarea1, tarea2, tarea3, tarea4, tarea5;
	float promedioexamenes, promediotareas, promediofinal;

printf("Calificacion del examen 1:");
scanf("%f", &examen1);
printf("Calificacion del examen 2:");
scanf("%f", &examen2);
printf("Calificacion del examen 3:");
scanf("%f", &examen3);
printf("Calidicacion de la tarea 1:");
scanf("%f", &tarea1);
printf("Calificacion de la tarea 2:");
scanf("%f", &tarea2);
printf("Calificacion de la tarea 3:");
scanf("%f", &tarea3);
printf("Calificacion de la tarea 4:");
scanf("%f", &tarea4);
printf("Calificacion de la tarea 5:");
scanf("%f", &tarea5);

promedioexamenes=(examen1+examen2+examen3)/3.0;
promediotareas=(tarea1+tarea2+tarea3+tarea4+tarea5)/5.0;
promediofinal=(promedioexamenes*0.6)+(promediotareas*0.4);

printf("El promedio de los examenes es:");
printf("%.2f\n", promedioexamenes);
printf("El promedio de las tareas es:");
printf("%.2f\n", promediotareas);
printf("El promedio final es:");
printf("%.2f\n", promediofinal);
return 0;
}

