# biblioc
Projet de bibliothèque en langage C

## Notes

### Commandes en entrée

- list: affiche la liste des livres
    - filtres (genre, ...)
- login: se connecte à un compte existant
- signup: crée un compte (pseudo unique)
- logout: se déconnecte du compte si connecté
- borrow: emprunte un livre si disponible
- return: retourne le livre emprunté

### BDD

#### genres

attributs:

- nom

#### utilisateurs

attributs:

- pseudo
- password

fonctions:

```C
/* ajoute un utilisateur dans la bdd */
void createUser(char *pseudo, char *password);
/* supprime un utilisateur de la bdd */
void deleteUser(char *pseudo);
/* vérifie si le pseudo existe et le mot de passe correspond */
int existsUser(char *pseudo, char *password);
```

#### livres

attributs

- titre
- auteur
- nombre de pages
- #genre

fonctions:

#### emprunts

attributs

- date debut
- date fin
- #utilisateur
- #livre

fonctions:

```C
/* vérifie si le livre est emprunté */
int isBorrowed(int id_livre);
/* emprunte un livre */
void borrow();
```

