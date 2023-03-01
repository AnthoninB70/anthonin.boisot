<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8" />
    <title>Titre</title>
  </head>
  <body>
    <p>
      <?php
      if (isset($_GET["prenom"]) and isset($_GET["nom"])) {
          // On a le nom et le prénom
          echo "Bonjour " . $_GET["prenom"] . " " . $_GET["nom"] . " !\n";
      }
      // Il manque des paramètres, on avertit le visiteur
      else {
          echo "Il faut renseigner un nom et un prénom !\n";
      }

      $var_a = $_GET["a"];
      $var_b = $_GET["b"];

      if ($var_a > $var_b) {
          echo "a is bigger than b\n";
      }
      echo $var_a + $var_b;
      ?>
    </p>
  </body>
</html>
