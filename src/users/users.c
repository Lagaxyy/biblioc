#include <stdio.h>
#include <stdlib.h>

#include "users.h"

void createUser(char *pseudo, char *password) {
  sqlite3 *db;
  char *errMsg = 0;
  int rc;

  char buffer[100];

  rc = sqlite3_open("bibliocDB.db", &db);
  if (rc != SQLITE_OK) {
    printf("Erreur d'ouverture de la base\n");

    return;
  }
  sprintf(buffer,
          "INSERT INTO utilisateurs (pseudo, password) VALUES ('%s', '%s')",
          pseudo, password);

  rc = sqlite3_exec(db, buffer, 0, 0, &errMsg);
  if (rc != SQLITE_OK) {
    printf("Erreur SQL : %s\n", errMsg);
  } else {
    printf("Incription réussie !\n");
  }
  sqlite3_close(db);
}

void deleteUser(char *pseudo) {}

int existsUser(char *pseudo) { return 0; }
