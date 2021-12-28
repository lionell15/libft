# **Libft**
## Parte 1
### Funciones de la libc


| Nombre de l función: | memset |
| ------------- | ------------- |
| Prototipo: | _void *ft_memset(void *b, int c, size_t len);_ |
| Ficheros a entregar: | ft_memset.c |
| Parametros: | 1. Puntero al bloque de memoria (b).  <br /> 2. El valor que desea ajustar. <br /> 3.  El número de bytes que se establece en ese valor. |
| Valor de retorno: | Devuelve un puntero a un puntero a la zona de almacenamiento (b). |
| Descripción: | Copia el caracter c (un char sin signo) a los primeros n caracteres de (b). |


| Nombre de la función: | bzero |
| ------------- | ------------- |
| Prototipo: |  _void ft_bzero(void *s, size_t n);_ |
| Ficheros a entregar: | ft_bzero.c |
| Parametros: | 1. Puntero a una cadena para rellenar.<br /> 2. Numero de bytes que se van a poner a cero.|
| Valor de retorno: | No retorna valor. |
| Descripción: | Pone a cero los n primeros bytes de la cadena de bytes s.  |

| Nombre de la función: | memcpy |
| ------------- | ------------- |
| Prototipo: |  _void *ft_memcpy(void *dst, const void *src, size_t n);_ |
| Ficheros a entregar: | ft_memcpy.c |
| Parametros: | 1. Puntero a una cadena de destino.<br /> 2. Puntero a una cadena de origen. <br /> 3. Numero de bytes que se van a copiar.|
| Valor de retorno: | Retorna un puntero a la cadena de caracteres dst |
| Descripción: | Copia n caracteres del area de la memoria de src en el area de la memoria de dst. |

| Nombre de la función: | memccpy |
| ------------- | ------------- |
| Prototipo: |  _void *ft_memccpy(void *dst, const void *src, int c, size_t n);_ |
| Ficheros a entregar: | ft_memccpy.c |
| Parametros: | 1. Puntero a una cadena de destino.<br /> 2. Puntero a una cadena de origen. <br /> 3. Último carácter que se va a copiar.<br /> 4. Numero de bytes que se van a copiar.|
| Valor de retorno: | Devuelve un puntero al siguiente carácter de dst tras c, o NULL si c no estaba en los n primeros caracteres de src. |
| Descripción: | Copia  como mucho n bytes desde el área de memoria src al área de memoria dst, parando cuando se encuentra el carácter c. |

| Nombre de la función: | memmove |
| ------------- | ------------- |
| Prototipo: |  _void *ft_memmove(void *dst, const void *src, size_t len);_ |
| Ficheros a entregar: | ft_memmove.c |
| Parametros: | 1. Puntero a una cadena de destino.<br /> 2. Puntero a una cadena de origen. <br /> 3. Numero de bytes que se copiarán.<br /> |
| Valor de retorno: | Devuelve un puntero a la cadena dst  |
| Descripción: | Copia los primeros n caracteres del objeto apuntado por src al objeto apuntado por dst. Sin embargo, se asegura de que no estén superpuestos. |

| Nombre de la función: | memchr |
| --------------- | ------------- |
| Prototipo: | _void *ft_memchr(const void *s, int c, size_t n);_ |
| Ficheros a entregar: | ft_memchr.c |
| Parametros : | 1. puntero al bloque de memoria para realizar una búsqueda. <br /> 2. Caracter que se va a buscar. <br /> 3. Número de caracteres que se comprobarán. |
| Valor de retorno: | Retorna un puntero al carácter localizado, o un puntero nulo si el carácter no apareció en el objeto.  |
| Descripción: | Localiza la primera aparición del carácter c (convertido a unsigned char) en los primeros n caracteres (cada uno interpretado como un unsigned char) del objeto apuntado por s. |

| Nombre de la función: | memcmp |
| --------------------- | ------ |
| Prototipo: | _int ft_memcmp(const void *s1, const void *s2, size_t n);_ |
| Ficheros a entregar: | ft_memcmp.c |
| Parametros: | 1. puntero al primer bloque de memoria. <br /> 2. puntero al segundo bloque de memoria. <br /> 3. Número de caracteres que se va a comparar. |
| Valor de retorno: | El valor devuelto indica la relación entre los búferes. <br /> **<0** s1 es menor a s2 <br /> **0** s1 es idéntica a s2 <br /> **>0** s1 es mayor a s2 |
| Descripción: | Compara los caracteres de dos búferes de memoria. |

| Nombre de la función: | strlen |
| --------------------- | ------ |
| Prototipo: | _size_t ft_strlen(const char *s);_ |
| Ficheros a entregar: | ft_strlen.c  |
| Parametros: | 1. Cadena terminada en un valor nulo. |
| Valor de retorno: | Devuelve el nuúmero de caracteres de s ecepto el valor nulo. |
| Descripción: | Obtiene la longitud de una cadena |

| Nombre de la función: | strlcpy |
| -------------------- | -------- |
| Prototipo: | _size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);_ |
| Ficheros a entregar: | ft_strlcpy.c |
| Parametros: | 1. puntero al bloque de memoria de destino. <br /> 2. puntero al bloque de memoria de origen. <br /> 3.  Número de caracteres que se van a copiar. |
| Valor de retorno: | Devuelve la longitutd total de la cadena que intenta crear. |
| Descripción: | Copia dstsize caracteres de la cadena  src en la cadena dst. |

| Nombre de la función: | strlcat |
| -------------------- | -------- |
| Prototipo: | _size_t ft_strlcat(char *dst, const char *src, size_t dstsize);_ |
| Ficheros a entregar: | ft_strlcat.c |
| Parametros: | 1. puntero al bloque de memoria de destino. <br /> 2. puntero al bloque de memoria de origen. <br /> 3.  Número de caracteres que se van a concatenar. |
| Valor de retorno: |  Devuelve el número de caracteres que intentó crear, la longitud inicial de dst + la longitud de src.|
| Descripción: | Concatena la cadena de caracteres src en la cadena dst limitada por dstsize. |

| Nombre de la función: | strchr |
| -------------------- | -------- |
| Prototipo: | _char *ft_strchr(const char *s, int c);_|
| Ficheros a entregar: | ft_strchr.c|
| Parametros: | 1. Puntero a una cadena de caracteres <br /> 2. Caracter que se va a buscar.   |
| Valor de retorno: | Devuelve la posición en la cadena (s) la primera ocurrencia del carácter c.Si no se encuentra devuelve un punyero nulo. |
| Descripción: |  Buscar la primera ocurrencia de (c) en la cadena (s) y devuelve su posición.|

| Nombre de la función: | strrchr |
| -------------------- | -------- |
| Prototipo: | _char *ft_strrchr(const char *s, int c);_ |
| Ficheros a entregar: | ft_strrchr.c |
| Parametros: | 1. Puntero a una cadena de caracteres <br /> 2. Caracter que se va a buscar. |
| Valor de retorno: | Devuelve la posición en la cafena (s) la ultima ocutrencia de (c). Si no se encuentra el valor, la función devuelve un puntero nulo. |
| Descripción: | Busca la ultima ocurrencia de (c) en la cadena (s) y devuelve su posición. |

| Nombre de la función: | strnstr |
| -------------------- | -------- |
| Prototipo: | _char *ft_strnstr(const char *haystack, const char *needle, size_t len);_ |
| Ficheros a entregar: | ft_strnstr.c |
| Parametros: | 1. Puntero a una cadena de caracteres donde buscar. <br /> 2. Puntero a una subcadena de caracteres a buscar. |
| Valor de retorno: |  Devuelve -1 si no se encontro la subcadena dentro de la cadena o n si se encotro en la posicion n de la cadena.|
| Descripción: |  Busca la secuencia de carácteres contenida en la subcadena en una cadena de texto. |

| Nombre de la función: | strncmp |
| -------------------- | -------- |
| Prototipo: | _int	ft_strncmp(const char *s1, const char *s2, size_t n);_|
| Ficheros a entregar: | ft_strncmp.c |
| Parametros: | 1. Puntero a una cadena de caracteres <br/> 2. Puntero a otra cadena de caracteres. <br/> 3. Numero de caracteres que se va a comparar |i
| Valor de retorno: | Devuelve 0 si las dos cadenas son iguales. <br /> Devuelve menor que cero si s1 es menor que s2.<br /> Devuelve mayor que cero si s1 es mayor que s2. |
| Descripción: | Compara la cadena s1 con la cadena s2 hasta el n carcater. |

| Nombre de la función: | atoi |
| -------------------- | -------- |
| Prototipo: | _int	ft_atoi(const char *str);_|
| Ficheros a entregar: | ft_atoi.c |
| Parametros: | 1. Puntero a la cadena que se desea convertir |
| Valor de retorno: | Retorna el valor numérico de la cadena o 0 si no se puede convertir. |
| Descripción: | Convierte una cadena a su valor numérico (entero) |

| Nombre de la función: | isalpha |
| -------------------- | -------- |
| Prototipo: | _int	ft_isalpha(int c);_ |
| Ficheros a entregar: | ft_isalpha.c |
| Parametros: | 1. caracter a comprobar  |
| Valor de retorno: | Devuelve 1 si c es un caracter alfabetico de a a z o de A a Z, decuelve 0 si no lo es.||
| Descripción: |  Comprueba si el caracter c es un caracter alfabético |

| Nombre de la función: | isdigit |
| -------------------- | -------- |
| Prototipo: | _int	ft_isdigit(int c);_|
| Ficheros a entregar: | ft_isdigit.c |
| Parametros: | 1. Caracter a comprobar. |
| Valor de retorno: |  Devuelve 1 si el caracter c es un número de 0 a 9, decuelve 0 si no lo es.|
| Descripción: | Comprueba si el caracter c es un caracter numérico de (0 - 9) |

| Nombre de la función: | isalnum |
| -------------------- | -------- |
| Prototipo: | _int	ft_isalnum(int c);_|
| Ficheros a entregar: | ft_isalnum.c |
| Parametros: | 1. Caracter a comprobar. |
| Valor de retorno: |  Devuelve 1 si el caracter c es un caracter alfanumérico, devuelve 0 si no lo es. |
| Descripción: |  Comprueba si el caracter c es un caracter alfanumérico (a - z) o (0 - 9) |

| Nombre de la función: | isascii |
| -------------------- | -------- |
| Prototipo: | _int	ft_isascii(int c);_|
| Ficheros a entregar: | ft_isascii.c |
| Parametros: | 1. Caracter a comprobar.  |
| Valor de retorno: | Devuelve 1 si el caracter c es un caracter de la tabla ascii, devuelve 0 si no lo es. |
| Descripción: |  Comprueba si el carqcter c es un caracter existente en la tabla ascii. |

| Nombre de la función: | isprint |
| -------------------- | -------- |
| Prototipo: | _int	ft_isprint(int c);_|
| Ficheros a entregar: | ft_isprint.c ||
| Parametros: | 1. Caracter a comprobar  |
| Valor de retorno: | Devuelve 1 si el caracter c es un caracter imprimible, devuelve 0 si no lo es. |
| Descripción: | Comprueba si el caracter c es un caracter imprimible.  |

| Nombre de la función: | toupper |
| -------------------- | -------- |
| Prototipo: | _int	ft_toupper(int c);_|
| Ficheros a entregar: | ft_toupper.c |
| Parametros: | 1. Caracter que se desea pasar a mayuscula |
| Valor de retorno: | Devuelve el caracter c en mayuscula |
| Descripción: | Convierte el caracter c en un caracter mayuscula. |

| Nombre de la función: | tolower |
| -------------------- | -------- |
| Prototipo: | _int	ft_tolower(int c);_|
| Ficheros a entregar: | ft_tolower.c|
| Parametros: | 1. Caracter que se desea pasar a minuscula  |
| Valor de retorno: |  Devuelve el caracter c en minuscula. |
| Descripción: | Convierte el caracter c en un caracter minuscula. |

| Nombre de la función: | calloc |
| -------------------- | -------- |
| Prototipo: | _void *ft_calloc(size_t count, size_t size);_|
| Ficheros a entregar: | ft_calloc.c|
| Parametros: | 1. Numero de elementos. <br /> 2. Longitud en bytes de cada elemento. |
| Valor de retorno: |  Devuelve un puntero al espacio asignado. |
| Funciones externas autorizadas: | malloc |
| Descripción: | Asigna una matriz en la memoria con elementos que se inicializan en 0. |

| Nombre de la función: | strdup |
| -------------------- | -------- |
| Prototipo: | _char *ft_strdup(const char *s1);_|
| Ficheros a entregar: | ft_strdup.c|
| Parametros: | 1.  Punyero a una cadena de caracteres. |
| Valor de retorno: | Devuelve un puntero a la cadena duplicada, o NULL si no había bastante memoria. |
| Funciones externas autorizadas: | malloc |
| Descripción: | La  función  strdup()  devuelve  un  puntero  a  una  nueva cadena de caracteres que es un duplicado de la cadena apuntada por s.   La  memoria  para  la  nueva  cadena  se  obtiene automáticamente con malloc(3), y puede (y debe) liberarse con free(3). |

## Parte 2

### Funciones adicionales

| Nombre de la función: | ft_substr |
| --------------------- | --------- |
| Prototipo: | _char *ft_substr(char const *s, unsigned int start, size_t len);_ |
| Ficheros a entregar: | ft_substr.c |
| Parametros: | 1. Puntero a una cadena de caracteres. <br /> 2. Posición donde empieza el substring. <br /> 3. Longitud del substring. |
| Valor de retorno: | Devuelve un puntero a una substring creada a partir de la posición start con una longitud len.   |
| Funciones externas autorizadas: | malloc |
| Descripción: |  Devuelve una subcadena especificada de una cadena. |

| Nombre de la función: | ft_srtjoin |
| --------------------- | --------- |
| Prototipo: |  _char *ft_strjoin(char const *s1, char const *s2);_|
| Ficheros a entregar: | ft_strjoin.c |
| Parametros: | 1. Puntero a una cadena de caracteres. <br /> 2. Caracter que se usará para separar la lista. |
| Valor de retorno: |  devuelve una cadena con asignación dinámica memoria. |
| Funciones externas autorizadas: | malloc |
| Descripción: |  La función strjoin () combina todas las cadenas en el lista de argumentos, y pone el resultado en la lista devuelta cadena con memoria asignada dinámicamente. El retorno La cadena está separada por el delimitador especificado por el primer separador de argumento. La memoria asignada dinámicamente necesita ser liberado por el usuario.
 |

| Nombre de la función: | ft_strtrim |
| --------------------- | --------- |
| Prototipo: | _char ft_strtrim(char const *s1, char const *set);_|
| Ficheros a entregar: | ft_strtrim.c |
| Parametros: | 1. Puntero a una cadena de caracteres.<br /> 2. Caracter que será reemplazado.  |
| Valor de retorno: | Puntero a la cadena s1 modificada. |
| Funciones externas autorizadas: | malloc |
| Descripción: | Elimina todos caracteres (set) del principio y el final de una cadena. |

| Nombre de la función: | ft_split |
| --------------------- | --------- |
| Prototipo: |  _char **ft_split(char const *s, char c);_ |
| Ficheros a entregar: | ft_split.c |
| Parametros: |  1. puntero a una cadena de caracteres. <br /> 2. Caracter por el cual se van a separar las palabras en (s)  |
| Valor de retorno: |  Devuelve un puntero a la lista de palabras en la cadena de entrada. |
| Funciones externas autorizadas: | malloc |
| Descripción: | Separa o divide una cadena de caracteres (s) por el caracter (c) y retorna una lista de estas. |

| Nombre de la función: | ft_itoa |
| --------------------- | --------- |
| Prototipo: | _char *ft_itoa(int n);_ |
| Ficheros a entregar: | ft_itoa.c |
| Parametros: | 1. Puntero a la cadena que se desea convertir.  |
| Valor de retorno: |  devuelve un numero entero convertido en cadena de caracteres si ha sido posible la conversión sino devuelve nulo. |
| Funciones externas autorizadas: | malloc |
| Descripción: |  Convierte un numero entero a una cadena de caracteres. |

| Nombre de la función: | ft_strmapi |
| --------------------- | --------- |
| Prototipo: | _char *ft_strmapi(char const *s, char (*f)(unsigned int, char);_ |
| Ficheros a entregar: | ft_strmapi.c |
| Parametros: | 1. Puntero a una cadena de caracteres. <br /> 2. Función que se va aplicar a cadabuno de los valores en la cadena (s).  |
| Valor de retorno: |  Devuelve un puntero a una cadena con los valores pasados por la funcion (f). |
| Funciones externas autorizadas: | malloc |
| Descripción: |  Crea una nueva cadena a partir de la modificación de la cadena con la función especificada. |

| Nombre de la función: | ft_putchar_fd |
| --------------------- | --------- |
| Prototipo: | _void ft_putchar_fd(char c, int fd);_ |
| Ficheros a entregar: | ft_putchar_fd.c |
| Parametros: | 1. Caracter a escribir. <br /> 2. archivo o formato de salida. |
| Valor de retorno: | devuelve el carácter escrito como una conversión de unsigned char a un int o EOF en caso de error.  |
| Funciones externas autorizadas: | malloc |
| Descripción: |  Escribe un caracter dentro de un archivo. |

| Nombre de la función: | ft_putstr_fd |
| --------------------- | --------- |
| Prototipo: | _void ft_putstr_fd(char *s, int fd);_ |
| Ficheros a entregar: | ft_putstr_fd.c |
| Parametros: |   |
| Valor de retorno: |   |
| Funciones externas autorizadas: | malloc |
| Descripción: |   |

| Nombre de la función: | ft_putendl_fd |
| --------------------- | --------- |
| Prototipo: | _void ft_putendl_fd(char *s, int fd);_ |
| Ficheros a entregar: | ft_putendl_fd |
| Parametros: |   |
| Valor de retorno: |   |
| Funciones externas autorizadas: | malloc |
| Descripción: |   |

| Nombre de la función: | ft_putnbr_fd |                              
| --------------------- | --------- |
| Prototipo: | _void ft_putnbr_fd(int nb, int fd);_  |
| Ficheros a entregar: | ft_putnbr_fd |                               
| Parametros: |   |                                                   
| Valor de retorno: |   |                                             
| Funciones externas autorizadas: | malloc |                          
| Descripción: |   |
