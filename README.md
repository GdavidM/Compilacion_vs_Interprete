# Notas de Clase 03/09/2026
Los lenguajes de programación se dividen en dos grandes categorias compilados e interpretados

La diferencia clave esta en el momento y la forma en que ese codigo se traduce a lenguaje de maquina el único lenguaje que el hardware puede ejecutar directamente.

## Lenguajes Compilados
Ventajas de lenguajes compilados
En un lenguaje compilador el código fuente se traduce a código de maquina una sola vez antes de ejecutarse. A este proceso se le llama compilación
Son lenguajes que usualmente están programados par aun hardware especifico.
Ventajas
- Velocidad
- Eficiente
Deventajas
- Tiempo de compilación
- Portabilidad

## Lenguajes Interepretados
En un lenguaje interpretado, el codigo fuente se traduce a codigo de maquina en tiempo de ejecucion: el programa se traduce cada vez que corre
Ventajas
- Rapidez de desarrollo
- Protabilidad
Deventajas
- Velocidad
- Eficencia

Lenguajes de Zona intermedia: bytecode y compilación JIT
La frontera entre compilado e interpretado no siempre es tan clara. Muchos lenguajes actuales combinan ambas ideas en dos etapas:
Codigo fuente -> compilacion a byteccode -> maquina virtual+jit
`Ej:Java, python, c#`