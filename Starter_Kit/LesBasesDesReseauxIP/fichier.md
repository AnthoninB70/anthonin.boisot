# Starter Kit

Les bases des réseaux IP

## Livrables

Question 1 :

```
➡️ Une image du modèle OSI ainsi qu'une brève description. Pour chaque couche du modèle OSI, donnez des exemples ( cf. vidéo )
```

Question 2 :

```
➡️ Citez le nom de l'autre modèle couramment utilisé et joindre une photo
```

Question 3 :

```
➡️ Qu'est-ce qu'un LAN ? Citez des exemples de LAN
```

Question 4 :

```
➡️ Dans la vidéo, on mentionne l'adresse MAC. Expliquez en détail son utilité. Cette adresse est codée sur 48 bits en Hexadécimal. Après quelques recherches, expliquez ce qu'est un bit, un octet
```

Question 5 :

```
➡️ Également, on parle d'hexadécimal. Après recherches, donnez l'équivalent hexadécimal du nombre décimal 58, 40, 3, et 146. Vous pouvez vous aider d'un convertisseur en ligne. Vous apprendrez dans une prochaine activité comment passer de la notation décimal à hexadécimal ou binaire.
```

Question 6 :

```
➡️ Donnez la définition d'un réseau WAN.
```

Question 7 :

```
➡️ L'adresse IP la plus couramment utilisée pour nos box internet à la maison est : 192.168.1.1. Donner l'écriture binaire de cette adresse IP (vous pouvez vous aider d'un convertisseur en ligne)
```

Question 8 :

```
➡️ Donnez deux exemples d'adresses IPv4 privées de classe C. Les périphériques porteurs de ces adresses peuvent ils cohabiter sur le même réseau ?
```

Question 9 :

```
➡️ Renseignez vous sur la notation CIDR. Comment écrit on le masque 255.255.255.0 en notation CIDR ?
```

Question 10 :

```
➡️ Rappeler ce que signifie DNS et son utilité
```

Question 11 :

```
➡️ Rappeler ce que signifie DHCP et son utilité
```

Question 12 :

```
➡️ Dans la vidéo, un test est effectué en ligne de commande ("ipconfig") pour voir la configuration IP de l'ordinateur. Exécutez cette commande sur votre PC et joignez une capture d'écran
```

Question 13 :

```
➡️ Quelle adresse IP nous indique un problème de configuration IP ?
```

Question 14 :

```
➡️ Rappelez le port par défaut pour le protocole HTTP, HTTPS, FTP, SSH, Telnet, POP et SMTP. Pour chacun d'entre eux, expliquer brièvement leur utilité
```

Question 15 :

```
➡️ Listez les différents outils de dépannage cités dans la vidéo. Pour chacun d'entre eux, essayer la commande dans votre invite de commande Windows et joindre une capture d'écran du résultat. (Pour le ping, faites un ping de google.fr, idem pour tracert)
```

Question 16 :

```
➡️ Pour chacune des commandes réseau Windows listées ci-dessus, donnez l'équivalent pour Linux
```

Question 17 :

```
➡️ Prendre une capture d'écran de la fin de la vidéo résumant les différentes couches avec les exemples.
```

## Réponse à la question 1

En résumé, le modèle OSI est une norme qui permet à différents systèmes informatiques de communiquer entre eux. Par exemple, la couche 1 est celle où vous pouvez voir un câble de catégorie 5. La couche 2, elle, travaille sur Ethernet. La couche 3, quant à elle, travaille sur les adresses IP. La couche 4 se situe à son tour au niveau des protocoles TCP et UDP. Tandis que la couche 5 permet de réaliser plusieurs sessions en même temps. La couche 6 se situe au niveau de HTTP par exemple. Et enfin la couche 7 est par exemple l'application Google Chrome ; voici une image pour mieux comprendre :

![Modèle OSI](https://i.imgur.com/XBVBxKB.png)

## Réponse à la question 2

L'autre modèle couramment utilisé est le modèle TCP/IP, dont une image est présentée ci-dessous :

![Modèle TCPIP](https://i.imgur.com/FEn5G0B.png)

## Réponse à la question 3

Un LAN est un réseau local. On en trouve la plupart à la maison.

## Réponse à la question 4

L'adresse MAC est utilisée pour bloquer l'accès à un appareil et constitue le moyen le plus efficace de le faire, car le blocage d'une adresse IP peut être facilement contourné (par exemple par un VPN).

Un bit est une unité de mesure qu'un ordinateur comprend.

L'égalité suivante est connue : 1 octet vaut toujours 8 bits.

## Réponse à la question 5

Nous savons que 58 (nombre décimal) vaudra 3A (nombre hexadécimal) ; que 40 (nombre décimal) vaudra 28 (nombre hexadécimal) et que 146 (nombre décimal) vaudra 92 (nombre hexadécimal).

## Réponse à la question 6

Un WAN est un réseau étendu ; en d'autres termes, c'est ce que nous avons tendance à dire pour le terme "Internet".

## Réponse à la question 7

L'adresse IP 192.168.1.1 est 11000110.10101000.00000001.00000001 en binaire.

## Réponse à la question 8

Voici deux exemples d'adresses privées IPv4 de classe C : 192.168.220.201 && 192.168.249.51.

Les appareils portant ces adresses peuvent cohabiter sur le même réseau pour les exemples ci-dessus mais ne peuvent pas se faire un ping.

## Réponse à la question 9

La notation CIDR de 255.255.255.0 en /24.

## Réponse à la question 10

Il s'agit du système de noms de domaine.

C'est utile car il est beaucoup plus facile de se souvenir de "mots" que de chiffres.

Par exemple, il m'est beaucoup plus facile de me souvenir de "iris.hd.free.fr" que de "82.64.247.59".

## Réponse à la question 11

Il s'agit du protocole de configuration dynamique des hôtes.

Il permet de définir une adresse IP automatiquement à partir d'une plage.

## Réponse à la question 12

Résultat de ma commande ipconfig sur mon ordinateur :

![ipconfig](https://i.imgur.com/DYzHqD3.png)

## Réponse à la question 13

C'est l'adresse APIPA qui indique un problème de configuration IP. La plage d'adresses APIPA (Automatic Private Internet Protocol Addressing) va de 169.254.0.0 à 169.254.255.255.

## Réponse à la question 14

Il s'agit du port 80 HTTP ; 443 HTTPS ; 21 FTP ; 22 SSH ; 23 Telnet ; 110 POP et SMTP.

HTTP et HTTPS sont utilisés sur le protocole de communication Internet.

FTP est utilisé depuis un ordinateur pour copier des fichiers vers un autre ordinateur du réseau ou pour supprimer ou modifier des fichiers sur cet ordinateur.

SSH est utilisé pour se connecter à distance à des systèmes hôtes serveurs.

Telnet est utilisé pour communiquer avec un serveur distant en échangeant des lignes de texte et en recevant des réponses textuelles.

POP et SMTP sont utilisés pour disposer d'un serveur de messagerie.

## Réponse à la question 15

Voici les deux exemples d'outils de dépannage mentionnés dans la vidéo et leurs captures d'écran, en commençant par la commande ping :

![ping](https://i.imgur.com/Q0Cy48m.png)

Commande tracert :

![tracert](https://i.imgur.com/DcwzWOx.png)

*Note : Nous voyons aussi la commande ipconfig ; voir la question 12.*

## Réponse à la question 16

L'équivalence de la commande ipconfig, commande Batch pour que Windows devienne ip a (dans le passé c'était ifconfig), commande Bash pour Linux.

L'équivalence de la commande ping, commande Batch pour que Windows reste ping, commande Bash pour Linux.

L'équivalence de la commande tracert, commande Batch pour que Windows devienne traceroute, commande Bash pour Linux.

## Réponse à la question 17

Vous trouverez ci-dessous une capture d'écran de la fin de la vidéo résumant les différentes couches avec les exemples :

![YouTube](https://i.imgur.com/g3TLEsB.png)
