<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8" />
    <title>Calcul IMC</title>
  </head>
  <body>
    <p>
      <?php if (isset($_GET["poids"]) and isset($_GET["taille"])) {
          // On a le poids et la taille
          $poids = $_GET["poids"];
          $taille = $_GET["taille"];

          // Calcul de l'IMC
          $imc = $poids / ($taille * $taille);

          // Affichage de l'IMC
          echo "Votre IMC est de " . $imc . "<br>";

          // Interprétation de l'IMC
          if ($imc < 18.5) {
              echo "Vous êtes en dessous de la moyenne";
          } elseif ($imc >= 18.5 && $imc < 25) {
              echo "Votre poids est normal";
          } elseif ($imc >= 25 && $imc < 30) {
              echo "Vous êtes en surpoids";
          } elseif ($imc >= 30 && $imc < 35) {
              echo "Vous êtes en obésité légère";
          } elseif ($imc >= 35 && $imc < 40) {
              echo "Vous êtes en obésité modérée";
          } else {
              echo "Vous êtes en obésité sévère";
          }
      }
      // Il manque des paramètres, on avertit le visiteur
      else {
          echo "Il faut renseigner votre poids et votre taille !\n";
      } ?>
    </p>
  </body>
</html>
