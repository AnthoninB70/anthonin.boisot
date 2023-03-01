# Entrainement E4

Configuration IP d'un serveur

## Livrables

Question 1 :

```
➡️ En utilisant la documentation PP1, compléter le document réponses en précisant les 2 interfaces disponibles coté serveur WEB OZW772 pour une connexion avec l’ordinateur. Préciser également la configuration IP (réglage usine) de ces interfaces ainsi que le pilote qu’il sera nécessaire d’installer sur le système d’exploitation de l’ordinateur pour que la communication soit opérationnelle. On souhaite connecter un ordinateur au serveur WEB OZW772 en utilisant les deux interfaces précédentes en l’absence de serveur DHCP.
```

Question 2 :

```
➡️ Proposer une configuration réseau (IP + masque CIDR) pour les 2 interfaces de cet ordinateur.
```

Question 3 :

```
➡️ En utilisant les documentations PP1 et PP2, indiquer les protocoles applicatifs supportés par le serveur WEB OZW772. Quel est le protocole à privilégier pour accéder au serveur WEB ? Justifier. Le thermostat RDG100 permet le contrôle de la température dans une pièce en fonction d’une valeur de consigne. Il est relié à une sonde de température QAA32 permettant de mesurer la température ambiante. Le thermostat communique avec le serveur WEB OZW772 par le bus de terrain KNX.
Nous allons nous intéresser aux requêtes HTTP générées par le navigateur WEB de l’ordinateur en direction du serveur WEB OZW772. Les méthodes HTTP supportées sont GET, HEAD, POST et OPTIONS. Deux cas de requêtes HTTP seront étudiés : • demande de la température ambiante mesurée par le thermostat RDG100 ;
• changement de la valeur de consigne de la température du thermostat RDG100.
```

Question 4 :

```
➡️ En utilisant la documentation PP2, compléter le document réponses précisant le nom de la méthode HTTP utilisée pour demander la température ambiante et le nom de la méthode HTTP utilisée pour changer la valeur de consigne. Justifier.
```

## Réponse à la question 1

Résultat :

![Configuration IP d'un serveur](https://i.imgur.com/DLjfmLW.png)

## Réponse à la question 2

Interface de la carte réseau Ethernet : 192.168.2.11/24 (tous sauf .10)
Interface Ethernet virtuelle via USB : 192.168.250.2/24 (tout sauf .1)

## Réponse à la question 3

Les 3 protocoles pris en charge sont HTTP, HTTPS et FTP.
Le protocole privilégié pour se connecter au serveur WEB est le HTTPS. Il permet le cryptage des communications entre le navigateur WEB et le serveur WEB.

## Réponse à la question 4

Résultat :

![Analyse de datagramme KNX](https://i.imgur.com/47k3rBe.png)
