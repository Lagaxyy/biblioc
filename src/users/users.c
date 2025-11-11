#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>



void  CreatUsers () {
    sqlite3 *db;
    char **errMsg = 0;
    int rc;

    char pseudo[25];
    char password [50];

    printf("Entrer votre pseudo");
    scanf('%s', pseudo);

    printf("Entrer votre password");
    scanf('%s', password);

    rc = sqlite3_open('bibliocDB.db', &db);
    if (rc != SQLITE_OK) {
        printf("Erreur d'ouverture de la base\n");

        return; 
    }  
    

    sprintf(sql, "INSERT INTO utilisateurs (pseudo, password) VALUES ('%s', '%s')",pseudo, password );

    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);
    if (rc != SQLITE_OK) {
        printf("Erreur SQL : %s\n", errMsg);
    } else {
        printf("Incription réussie !\n");
    }
    sqlite3_close(db);
}

void deleteUser (char *pseudo){
    
}


int existsUser (char *pseudo, char *password ) {

}