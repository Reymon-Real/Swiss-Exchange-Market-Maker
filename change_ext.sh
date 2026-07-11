#!/bin/bash

# Comprobar si se pasaron los argumentos necesarios
if [ "$#" -ne 2 ]; then
    echo "Uso: $0 <extensión_actual> <nueva_extensión>"
    exit 1
fi

OLD_EXT=$1
NEW_EXT=$2

# Usamos 'find' para buscar archivos de forma recursiva
# -type f: busca solo archivos
# -name: filtra por la extensión
find . -type f -name "*.$OLD_EXT" -print0 | while IFS= read -r -d '' file; do
    
    # Obtener el nombre del archivo sin la extensión antigua
    # ${file%.$OLD_EXT} funciona igual en archivos encontrados con find
    base_name="${file%.$OLD_EXT}"
    
    # Renombrar el archivo
    mv "$file" "${base_name}.${NEW_EXT}"
    echo "Renombrado: $file -> ${base_name}.$NEW_EXT"
    
done

echo "Proceso finalizado en todos los subdirectorios."