#include "tp0.h"

#include <stdio.h>
#include <string.h>

/**
 * Reserva memoria para un hospital y la inicializa.
 * Se puede asumir que los pokemones están ordenados
 *
 * Devuelve NULL en caso de no poder.
 */
hospital_t *hospital_crear(pokemon_t *pokemones, size_t cantidad_pokemones,
			   size_t cantidad_entrenadores)
{
	hospital_t *hospital = malloc(sizeof(hospital_t));
	hospital->pokemones;
	hospital->cantidad_pokemon = 0;

	return hospital;
}

/**
 * Devuelve la cantidad de entrenadores que actualmente hacen atender a sus
 * pokemon en el hospital.
 */
size_t hospital_cantidad_entrenadores(hospital_t *hospital)
{
	return hospital->cantidad_entrenadores; //funciona siempre?
}

/**
 * Devuelve la cantidad de pokemon que son atendidos actualmente en el hospital.
 */
size_t hospital_cantidad_pokemones(hospital_t *hospital)
{
	if (hospital == NULL)
		return 0;
	return hospital->cantidad_pokemones;
}

/**
 * Aplica una función a cada uno de los pokemon almacenados en el hospital. La
 * función debe aplicarse a cada pokemon en orden de prioridad del pokemon. A menor salud,
 * mayor prioridad tiene un pokemon.
 *
 * La función a aplicar recibe el pokemon y devuelve true o false. Si la función
 * devuelve true, se debe seguir aplicando la función a los próximos pokemon si
 * quedan. Si la función devuelve false, no se debe continuar.
 *
 * Devuelve la cantidad de pokemon a los que se les aplicó la función (hayan devuelto true o false).
 */
size_t hospital_a_cada_pokemon(hospital_t *hospital,
			       bool (*funcion)(pokemon_t *p, void *aux),
			       void *aux)
{
	if (funcion == NULL)
		return 0;

	int i = 1; //cuenta bien?
	while (true) { //hay mejor forma?
		i++;
		if (!funcion(pokemon, NULL)) //y con el aux que hago?
			return i;
	}

	return i;
}

/**
 * Dados dos pokemones, la funcion devuelve true si son iguales, es decir, todos sus atributos son identicos
 * o false en caso contrario.
 */
bool pokemones_comparar(pokemon_t *pokemon1, pokemon_t *pokemon2)
{
	if (pokemon1 == NULL || pokemon2 == NULL)
		return false;

	//TODO: comparar los atributos de los pokemones
	//Buscar como comparar strings en C

	return true;
}

/**
 * Funcion que copia lo que hay en poke_origen a poke_destino. Si alguna de las dos variables es NULL,
 * devuelve false. Si no, se copia el pokemon y se devuelve true.
 */
bool pokemon_copiar(pokemon_t *poke_destino, pokemon_t poke_origen)
{ //funciona
	if (poke_destino == NULL || poke_origen == NULL)
		return false;

	poke_destino->id = poke_origen.id;
	poke_destino->salud = poke_origen.salud;
	strcpy(poke_destino->nombre_entrenador, poke_origen.nombre_entrenador);
	return true;
}

/**
 *  Cuando ocurre una emergencia, llegan nuevos pokemones en ambulancia, que deben ser ingresados al hospital.
 *  Se debe mantener el orden de prioridad de los pokemones! Los pokemones con menor salud deben estar lo más adelante
 *  en la fila posible
 *  Devuelve -1 en caso de error o 0 en caso de éxito
 */
int hospital_aceptar_emergencias(hospital_t *hospital,
				 pokemon_t *pokemones_ambulancia,
				 size_t cant_pokes_ambulancia,
				 size_t cant_nuevos_entrenadores)
{
	if (hospital == NULL || pokemones_ambulancia == NULL)
		return ERROR;

	//TODO: agrandar vector pokemones en hospital

	//TODO: insertar ordenadamente o insertar y luego ordenar?

	//TODO: modificar variables para reflejar la nueva cantidad de elementos

	return EXITO
}

/**
 *  Libera el hospital y toda la memoria utilizada por el mismo.
 */
void hospital_destruir(hospital_t *hospital)
{
	free(hospital);
}
