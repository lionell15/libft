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
| Prototipo: | |
| Ficheros a entregar: | |
| Parametros: |  |
| Valor de retorno: |  |
| Descripción: |  |

| Nombre de la función: | strrchr |
| -------------------- | -------- |
| Prototipo: | |
| Ficheros a entregar: | |
| Parametros: |  |
| Valor de retorno: |  |
| Descripción: |  |

| Nombre de la función: | strnstr |
| -------------------- | -------- |
| Prototipo: | |
| Ficheros a entregar: | |
| Parametros: |  |
| Valor de retorno: |  |
| Descripción: |  |

| Nombre de la función: | strncmp |
| -------------------- | -------- |
| Prototipo: | |
| Ficheros a entregar: | |
| Parametros: |  |
| Valor de retorno: |  |
| Descripción: |  |

| Nombre de la función: | atoi |
| -------------------- | -------- |
| Prototipo: | |
| Ficheros a entregar: | |
| Parametros: |  |
| Valor de retorno: |  |
| Descripción: |  |

| Nombre de la función: | isalpha |
| -------------------- | -------- |
| Prototipo: | |
| Ficheros a entregar: | |
| Parametros: |  |
| Valor de retorno: |  |
| Descripción: |  |

| Nombre de la función: | isdigit |
| -------------------- | -------- |
| Prototipo: | |
| Ficheros a entregar: | |
| Parametros: |  |
| Valor de retorno: |  |
| Descripción: |  |

| Nombre de la función: | isalnum |
| -------------------- | -------- |
| Prototipo: | |
| Ficheros a entregar: | |
| Parametros: |  |
| Valor de retorno: |  |
| Descripción: |  |

| Nombre de la función: | isascii |
| -------------------- | -------- |
| Prototipo: | |
| Ficheros a entregar: | |
| Parametros: |  |
| Valor de retorno: |  |
| Descripción: |  |

| Nombre de la función: | isprint |
| -------------------- | -------- |
| Prototipo: | |
| Ficheros a entregar: | |
| Parametros: |  |
| Valor de retorno: |  |
| Descripción: |  |

| Nombre de la función: | toupper |
| -------------------- | -------- |
| Prototipo: | |
| Ficheros a entregar: | |
| Parametros: |  |
| Valor de retorno: |  |
| Descripción: |  |

| Nombre de la función: | tolower |
| -------------------- | -------- |
| Prototipo: | |
| Ficheros a entregar: | |
| Parametros: |  |
| Valor de retorno: |  |
| Descripción: |  |
