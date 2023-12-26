# Practica Final DCA
## Proceso Bisect 
Para realizar el proceso de bisect he realizado una serie de pasos. El primero ha sido: 
- `git bisect start` para iniciar el proceso
- `git bisect bad rama2` para marcar el commit donde esta el fallo
- `git bisect good <id-commit>` para marcar el commit anterior donde estaba bien el codigo

Una vez finalizado el proceso volvemos al estado normal de trabajo con `git bisect reset`
## Uso de Hook
Para el uso de Hook, he empleado un hook para un evento post-commit que muestra un mensaje cuando se realiza un commit.
He creado el fichero post-commit con el contenido del mensaje y le he dado privilegios al archivo y asi cuando ejecuto el commit me muestra dicho mensaje