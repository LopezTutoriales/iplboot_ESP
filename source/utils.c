#include "fatfs/ff.h"

// See ./fatfs/ff.h:276
char *fresult_msgs[] = {
    /*FR_OK                  ( 0)*/ "Exito",
    /*FR_DISK_ERR            ( 1)*/ "Ocurrio un error grave en la capa de E/S del disco",
    /*FR_INT_ERR             ( 2)*/ "Fallo de asercion",
    /*FR_NOT_READY           ( 3)*/ "El dispositivo no esta listo",
    /*FR_NO_FILE             ( 4)*/ "No se encontro el archivo",
    /*FR_NO_PATH             ( 5)*/ "No se encontro la ruta",
    /*FR_INVALID_NAME        ( 6)*/ "El formato del nombre de la ruta no es valido",
    /*FR_DENIED              ( 7)*/ "Acceso denegado por acceso prohibido o directorio lleno",
    /*FR_EXIST               ( 8)*/ "Acceso denegado por acceso prohibido",
    /*FR_INVALID_OBJECT      ( 9)*/ "El objeto de archivo/directorio no es valido",
    /*FR_WRITE_PROTECTED     (10)*/ "La unidad fisica esta protegida contra escritura",
    /*FR_INVALID_DRIVE       (11)*/ "El numero de la unidad logica no es valido",
    /*FR_NOT_ENABLED         (12)*/ "El volumen no tiene area de trabajo",
    /*FR_NO_FILESYSTEM       (13)*/ "No hay ningun volumen FAT valido",
    /*FR_MKFS_ABORTED        (14)*/ "El f_mkfs() aborto debido a un problema",
    /*FR_TIMEOUT             (15)*/ "Imposible acceder al volumen dentro del periodo definido",
    /*FR_LOCKED              (16)*/ "Operacion rechazada por la politica de intercambio de archivos",
    /*FR_NOT_ENOUGH_CORE     (17)*/ "Imposible asignar el buffer de trabajo LFN",
    /*FR_TOO_MANY_OPEN_FILES (18)*/ "Numero de archivos abiertos > FF_FS_LOCK",
    /*FR_INVALID_PARAMETER   (19)*/ "El parametro dado no es valido"
};
int num_fresult_msgs = sizeof(fresult_msgs)/sizeof(fresult_msgs[0]);

char *get_fresult_message(FRESULT result) {
    if (result < 0 || result >= num_fresult_msgs) {
        return "Desconocido";
    }
    return fresult_msgs[result];
}
