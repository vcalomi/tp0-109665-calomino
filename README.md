<div align="right">
<img width="32px" src="img/algo2.svg">
</div>


<div align="center">
    <h2 align="left">Cambios realizados:</h2>
    <ul>
        <li align="left">En la funcion "hospital_crear" se chequea si los punteros "pokemones" y "hospital" son NULL. A su vez se inicializan los campos de la estructura hospital, se corrigio la sintaxis de "hospital_cantidad_pokemones" a "hospital_cantidad_pokemon" y se sumaron las cantidades correspondientes.</li>
        <li align="left">En la funcion "hospital_cantidad_entrenadores" se agrega un chequeo para verificar que el puntero "hospital" no sea NULL.</li>
        <li align="left">En la funcion "hospital_cantidad_pokemon" nuevamente se corrigio la sintaxis de "hospital_cantidad_pokemones" a "hospital_cantidad_pokemon".</li>
        <li align="left">En la funcion "hospital_a_cada_pokemon" se agrego un chequeo para verificar que el puntero "hospital" no sea NULL. A su vez se cambio el tipo de dato de la variable "i" de "int" a "size_t" para que asi al momento de finalizar, este devolviendo el tipo de dato esperado. En el ciclo while se cambio la condicion de corte a "i< 
hospital->cantidad_pokemon" asi itera hasta que no haya mas pokemones. Tambien, en la funcion que se encuentra dentro del if, se le agregaron los parametros correspondientes, los cuales estaban definidos en "tp0.h", estos siendo: hospital->pokemones y "aux".</li>
        <li align="left">En la funcion "pokemon_copiar" se cambio la condicion del if, ya que se estaba verificando si algo que no es un puntero era igual a NULL.</li>
        <li align="left"><ul>En la funcion "hospital_aceptar_emergencias" se realizaron los siguientes cambios:
            <li>Se creo un nuevo puntero al que se le asigno el tamaño requerido para almacenar los pokemones nuevos utilizando la funcion "malloc".</li>
            <li>Se verifica si ese nuevo puntero es NULL.</li>
            <li>Utilizando la funcion "memcpy", se copian los datos de los pokemones que ya estaban y los que llegan en el puntero creado anteriormente. Luego se asigna ese puntero a los pokemones del hospital.</li>
            <li>Se libera la memoria utilizada por el puntero creado, ya que fue asignada en la estructura "hospital" y ya no es necesaria.</li>
            <li>Se modifican la cantidad de entrenadores y de pokemones para que sea la correcta.</li>
            </ul></li>
    </ul>
</div>
