# Développer une application WEB complète

Rajouter une BDD à une application WEB

## Livrables

Question 1 :

```
➡️ Lorsqu’un utilisateur rentre son login et son mot de passe, le script PHP interroge la base de données pour vérifier si l’utilisateur existe dans la base de données et si le mot de passe associé est correct.
```

Question 2 :

```
➡️ Si c’est le cas, il affiche une page WEB : user.html qui contiendra uniquement le message « bonjour utilisateur ».
```

Question 3 :

```
➡️ Rajouter dans la BDD un champ "SuperUser" qui contient True ou False (booléen)
```

Question 4 :

```
➡️ Lorsqu'un utilisateur se connecte, on regardera le champ SuperUser. Si l’utilisateur est enregistré comme un super utilisateur (SuperUser = True), alors il est emmené vers une page WEB différente sur laquelle il y aura marqué « bonjour super utilisateur ».
```

Question 5 :

```
➡️ Vérifier votre application et joindre une capture d’écran du résultat.
```

Question 6 :

```
➡️ Créer une page WEB permettant d’ajouter un utilisateur dans la base table utilisateurs. Il sera possible d’entrer son login, son mot de passe et de l’enregistrer comme super utilisateur si besoin.
```

Question 7 :

```
➡️ Un fichier readme.md dans lequel vous expliquerez le fonctionnement de vos codes.
```

## Réponse à la question 1

Cliquez [ici](https://github.com/AnthoninB70/anthonin.boisot/blob/main/Developper_une_application_WEB/Rajouter_BDD/login.php) pour voir le fichier login.php complété.

## Réponse à la question 2

Cliquez [ici](https://github.com/AnthoninB70/anthonin.boisot/blob/main/Developper_une_application_WEB/Rajouter_BDD/user.html) pour voir le fichier user.html complété.

## Réponse à la question 3

Résultat :

![SuperUser](https://i.imgur.com/NPEotvj.png)

## Réponse à la question 4

Cliquez [ici](https://github.com/AnthoninB70/anthonin.boisot/blob/main/Developper_une_application_WEB/Rajouter_BDD/superuser.html) pour voir le fichier superuser.html complété.

## Réponse à la question 5

Résultat :

![SuperUser](https://i.imgur.com/JaKgLyK.png)

## Réponse à la question 6

Cliquez [ici](https://github.com/AnthoninB70/anthonin.boisot/blob/main/Developper_une_application_WEB/Rajouter_BDD/ajouter_utilisateur.php) pour voir le fichier ajouter_utilisateur.php complété.

## Réponse à la question 7

L'utilisateur accède à la page d'accueil (index.html) et saisit les informations de connexion d'un nouvel utilisateur.

L'utilisateur envoie ces informations à la page ajouter_utilisateur.php en appuyant sur le bouton "Ajouter".

La page ajouter_utilisateur.php stocke les informations dans la base de données et redirige l'utilisateur vers la page de confirmation (confirmation.html).

L'utilisateur peut maintenant se connecter à l'application en utilisant les informations de connexion de l'utilisateur qu'il vient de créer.

L'utilisateur accède à la page de connexion (login.php) et saisit ses informations de connexion.

La page login.php vérifie les informations de connexion, redirige l'utilisateur vers la page de bienvenue correspondante (superuser.html ou user.html) si les informations sont correctes ou affiche un message d'erreur si les informations sont incorrectes.
