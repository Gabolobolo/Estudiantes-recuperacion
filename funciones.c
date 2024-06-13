#include <stdio.h>
#include <string.h>
#include "funciones.h"

void imprimirAlumnos(char alumnos[][2][20], double notas[][3]) {
printf("Nombre\t\tApellido\t\tPromedio\t\tAprobacion\n");   
    for (int i = 0; i < 6; i++) {
        double promedio = (notas[i][0] + notas[i][1] + notas[i][2]) / 3;
        printf("%s\t\t%s\t\t%.2lf\t\t%s\n", alumnos[i][0], alumnos[i][1], notas[i][0], notas[i][1], notas[i][2], promedio, promedio >= 6 ? "Aprobado" : "Reprobado");
    }
}

void buscarAlumnoXApellido(char alumnos[][2][20], double notas[][3]) {
    char apellido[20];
    printf("Ingrese el apellido del alumno a buscar: ");
    scanf("%s", apellido);
    int noexiste = 0;
    printf("Nombre\t\tApellido\t\tPromedio\t\tAprobacion\n");   
    for (int i = 0; i < 6; i++) {
        if (strcmp(alumnos[i][1], apellido) == 0) {
            double promedio = (notas[i][0] + notas[i][1] + notas[i][2]) / 3.0;
            printf("%s\t\t%s\t\t%.2lf\t\t%s\n", alumnos[i][0], alumnos[i][1], notas[i][0], notas[i][1], notas[i][2], promedio, promedio >= 6 ? "Aprobado" : "Reprobado");
            noexiste = 1;
            break;
        }
    }
    if (noexiste==0){
        printf("No se encontró ningún alumno con ese apellido.\n");
}
}

void editarCalificaciones(char alumnos[][2][20], double notas[][3]) {
    char apellido[20];
    printf("Ingrese el apellido del alumno para editar calificaciones: ");
    scanf("%s", apellido);
    int noexiste = 0;
    for (int i = 0; i < 6; i++) {
        if (strcmp(alumnos[i][1], apellido) == 0) {
            printf("Ingrese las nuevas calificaciones para %s %s: ", alumnos[i][0], alumnos[i][1]);
            scanf("%lf %lf %lf", &notas[i][0], &notas[i][1], &notas[i][2]);
            printf("Calificaciones actualizadas para %s %s.\n", alumnos[i][0], alumnos[i][1]);
            noexiste = 1;
            break;
        }
    }
    if (noexiste == 0){
        printf("No se encontró ningún alumno con ese apellido.\n");
}
}
