<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8" />
    <title>Cible</title>
  </head>
  <body>
    <p>Bonjour !</p>

    <p>
      Vous vous appelez
      <!-- <?php echo $_POST["prenom"]; ?> -->
      <?php echo $_GET["prenom"]; ?>
      !
    </p>

    <p>
      Si vous souhaitez changer de prénom,
      <a href="formulaire.html">veuillez cliquer ici</a> pour retourner à la
      page formulaire.php.
    </p>
  </body>
</html>
