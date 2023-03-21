# Starter Kit

Découvrir Raspberry

## Livrables

Question 1 :

```
➡️ Une capture d'écran ou une synthèse des différences entre Arduino Uno et Raspberry Pi
```

Question 2 :

```
➡️ Le schéma des GPIO de la Raspberry Pi
```


Question 3 :

```
➡️ Les informations du protocole des broches SCL et SDA avec les avantages et les inconvénients de ce protocole
```

Question 4 :

```
➡️ Un compte rendu de l'utilisation du SSH (est ce que tout s'est bien passé, problèmes rencontrés, solutions mises en places pour résoudre les problèmes)
```

## Réponse à la question 1

Résultat :

![Raspberry_Pi](https://i.imgur.com/4X7J4Vi.png)

## Réponse à la question 2

Résultat :

![Raspberry_Pi](https://i.imgur.com/nFl00by.png)

## Réponse à la question 3

Les broches SCL et SDA de la Raspberry Pi sont utilisées pour la communication I2C, un protocole simple et rapide pour connecter plusieurs dispositifs, mais qui a une distance de communication limitée et des problèmes de synchronisation dans les systèmes complexes.

## Réponse à la question 4

Tout d'abord, j'ai vérifié que le câble Ethernet était correctement connecté entre le Raspberry Pi et le commutateur - ce qui correspond à la couche 1 du modèle OSI.

Résultat :

![Raspberry_Pi](https://i.imgur.com/AaplEAh.png)

Ensuite, j'ai utilisé la commande "ipconfig" du côté de Windows et "ifconfig" du côté du Raspberry Pi pour vérifier les configurations réseau des périphériques et m'assurer qu'ils disposaient tous deux d'une adresse IP - ce qui correspond à la couche 2 du modèle OSI.

J'ai également vérifié que le Raspberry Pi était connecté au réseau en envoyant un ping à Google.com depuis le terminal du Raspberry Pi. J'ai également envoyé un ping à la passerelle par défaut du réseau BTS en utilisant l'adresse IP 192.168.72.10 pour voir si les paquets étaient correctement redirigés - ce qui correspond à la couche 3 du modèle OSI.

Cependant, j'ai rencontré un problème lorsque j'ai essayé d'accéder au Raspberry Pi via SSH. Après avoir fait des recherches sur Internet, j'ai découvert que SSH était désactivé par défaut sur le Raspberry Pi. J'ai donc activé SSH en suivant les instructions de configuration et j'ai redémarré le Raspberry Pi - qui est la couche 4 du modèle OSI.

Résultat :

![Raspberry_Pi](https://i.imgur.com/fNdagBx.png)

J'ai ensuite réessayé la commande SSH et j'ai pu accéder au Raspberry Pi via SSH.

Résultat :

![Raspberry_Pi](https://i.imgur.com/kZvHxpD.png)
