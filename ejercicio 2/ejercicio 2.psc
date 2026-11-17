Algoritmo suma_acumulativa
		Definir N, contador, suma Como Entero
		
		Escribir "Introduce un numero entero positivo N: "
		Leer N
		
		Mientras N <= 0 Hacer
			Escribir "Numero no valido. Introduce un numero mayor que 0: "
			Leer N
		FinMientras
		
		contador <- 1
		suma <- 0
		
		Mientras contador <= N Hacer
			suma <- suma + contador
			contador <- contador + 1
		FinMientras
		
		Escribir "La suma de 1 hasta ", N, " es: ", suma
FinAlgoritmo
